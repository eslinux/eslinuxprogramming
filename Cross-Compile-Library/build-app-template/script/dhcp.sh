. ./tools/Config.sh

VER=1.2.8
APP_DIR=zlib-${VER}
DL_FROM=${URL_SOURCE_DL}
DL_FILE=${APP_DIR}.tar.gz
md5="44d667c142d7cda120332623eab69f40"



download_file ${DL_FROM} ${DL_FILE}
#retval=$?
#echo $retval 



CFLAGS=-fPIC -DPIC


cd ${SRC_DIR}/${APP_DIR}







cd opencv-2.4.13


mkdir release  
cd release

PREFIX=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty
TOOLCHAIN_FILE=`pwd`/../platforms/linux/arm-gnueabi.toolchain-rpi.cmake
touch $TOOLCHAIN_FILE
echo "set( CMAKE_SYSTEM_NAME Linux )" > $TOOLCHAIN_FILE
echo "set( CMAKE_SYSTEM_PROCESSOR arm )" >> $TOOLCHAIN_FILE
echo "set( CMAKE_C_COMPILER arm-linux-gnueabihf-gcc )" >> $TOOLCHAIN_FILE
echo "set( CMAKE_CXX_COMPILER arm-linux-gnueabihf-g++ )" >> $TOOLCHAIN_FILE
 
#-DWITH_JPEG=OFF because this lib is error
cmake -DWITH_GTK=OFF  \
-DENABLE_PRECOMPILED_HEADERS=OFF \
-DCMAKE_BUILD_TYPE=RELEASE \
-DCMAKE_TOOLCHAIN_FILE=$TOOLCHAIN_FILE \
-DWITH_JPEG=OFF \
..  #chu y hai dau cham  
   
make
make install  







exit 0  #=> build ok
#exit 1  #=> build fail
