TOOLCHAIN_DIR=/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64
export PATH=$PATH:${TOOLCHAIN_DIR}/bin



RPI_SYSROOT=/home/linuxpc/Downloads/face_recognition/ISO/raspbian-jessie-lite-rootfs
HOST=arm-linux-gnueabihf
CROSS=arm-linux-gnueabihf-
PREFIX=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty






export CPPFLAGS="-I/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty/include"
export LDFLAGS="-L/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty/lib"

#libpng and freetype
./configure --prefix=${PREFIX} --host=${HOST} \
CC=${CROSS}gcc



#DirectFB

 #thư viện phụ thuộc   
 DEPEND_LIB_DIR=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty
 export CFLAGS="-I${DEPEND_LIB_DIR}/include  -I${DEPEND_LIB_DIR}/usr/include/libpng12 -I${DEPEND_LIB_DIR}/usr/include/freetype2"
 export CPPFLAGS=-I${DEPEND_LIB_DIR}/include  
 export LDFLAGS="-L${DEPEND_LIB_DIR}/lib -lstdc++" 
 export PKG_CONFIG_PATH=${DEPEND_LIB_DIR}/lib/pkgconfig  
 export LD_LIBRARY_PATH="${DEPEND_LIB_DIR}/lib"


./configure --prefix=${PREFIX} --host=${HOST} \
--disable-x11 --enable-fbdev=yes --disable-devmem \
--with-gfxdrivers=none --with-inputdrivers=none \
CC=${CROSS}gcc



#run app
export DFBARGS=module-dir=/home/pi/Documents/face/3rdparty/lib/directfb-1.6-0
