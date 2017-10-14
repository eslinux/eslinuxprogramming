#!/usr/bin/env bash



#source_env
CROSS=arm-linux-gnueabihf
TOOLCHAIN_DIR=/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64


ROOTFS_DIR=/home/linuxpc/Downloads/face_recognition/ISO/raspbian-jessie-lite-rootfs
INSTALL_DIR=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty
CUR_DIR=`pwd`

export PATH=$PATH:$TOOLCHAIN_DIR/bin
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$TOOLCHAIN_DIR/lib:$INSTALL_DIR/lib


MARK_BUILD_DIR="$CUR_DIR/mark_build"
if [ ! -d "$MARK_BUILD_DIR" ]; then
	mkdir "$MARK_BUILD_DIR"
fi

if [ "$1" == "clean" ]; then
	rm -rf "$MARK_BUILD_DIR/*"
fi



log() {
    local msg="$1"; shift
    local _color_bold_yellow='\e[1;33m'
    local _color_reset='\e[0m'
    echo -e "\[${_color_bold_yellow}\]${msg}\[${_color_reset}\]"
}

mark_build(){
	touch "$MARK_BUILD_DIR/$1"
	cd ..
}


#=======================================================================
#              BUILD LIB
#=======================================================================





build_zlib(){
	SRC_DIR="zlib-1.2.11"
	if [ -f "$MARK_BUILD_DIR/$SRC_DIR" ]; then
		return
	fi
	
	if [ ! -d "$SRC_DIR" ]; then
		tar xf "$SRC_DIR.tar.gz"
	fi
	cd "$SRC_DIR"
	CROSS_PREFIX="$CROSS-" ./configure --shared --prefix=$INSTALL_DIR
	make clean all
	make install && mark_build "$SRC_DIR"
	

}

build_bzlib(){
	SRC_DIR="bzip2-1.0.6"
	if [ -f "$MARK_BUILD_DIR/$SRC_DIR" ]; then
		return
	fi
	
	if [ ! -d "$SRC_DIR" ]; then
		tar xf "$SRC_DIR.tar.gz"
	fi

	#extract only, not build :D
	mark_build "$SRC_DIR"
}





build_boost(){
	SRC_DIR="boost_1_58_0"
	if [ -f "$MARK_BUILD_DIR/$SRC_DIR" ]; then
		return
	fi
	
	if [ ! -d "$SRC_DIR" ]; then
		tar xf "$SRC_DIR.tar.gz"
	fi
	
	cd "$SRC_DIR"
	./bootstrap.sh
	
	sed -i "s/using gcc/using gcc : arm : $CROSS-g++/g" project-config.jam
	
	ZLIB_SOURCE_DIR=$CUR_DIR/zlib-1.2.11
	BZIP2_SOURCE_DIR=$CUR_DIR/bzip2-1.0.6


	./bjam toolset=gcc-arm target-os=linux --prefix=$INSTALL_DIR \
	-sZLIB_SOURCE=$ZLIB_SOURCE_DIR \
	-sBZIP2_SOURCE=$BZIP2_SOURCE_DIR \
	--without-python \
	install && mark_build "$SRC_DIR"
	
	
}




build_opencv(){
	SRC_DIR="opencv-2.4.13"

	if [ -f "$MARK_BUILD_DIR/$SRC_DIR" ]; then
		return
	fi
	
	if [ ! -d "$SRC_DIR" ]; then
		unzip "$SRC_DIR.zip"
	fi
	
	cd "$SRC_DIR"
	
	TOOLCHAIN_FILE=./platforms/linux/arm-gnueabi.toolchain-rpi.cmake
	touch $TOOLCHAIN_FILE
	
	echo 	"set( CMAKE_SYSTEM_NAME Linux )
			set( CMAKE_SYSTEM_PROCESSOR arm )
			set( CMAKE_C_COMPILER $CROSS-gcc )
			set( CMAKE_CXX_COMPILER $CROSS-g++)" > $TOOLCHAIN_FILE
	
	rm -rf release
	mkdir release
	cd release


cmake -DWITH_GTK=OFF \
	-DENABLE_PRECOMPILED_HEADERS=OFF \
	-DCMAKE_BUILD_TYPE=RELEASE \
	-DCMAKE_TOOLCHAIN_FILE=$TOOLCHAIN_FILE \
	-DCMAKE_INSTALL_PREFIX=$INSTALL_DIR \
	..  #chu y hai dau cham  

	
	make -j4 && make install && cd .. && mark_build "$SRC_DIR"

}







#=======================================================================
#              MAIN
#=======================================================================

main() {

	
    log "Installing build_zlib..."
    build_zlib
    
    log "Installing build_bzlib..."
    build_bzlib
    
    log "Installing build_boost..."
    build_boost
    
    
    log "Installing build_opencv..."
    #build_opencv

}

main 
