TOOLCHAIN_DIR=/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64
export PATH=$PATH:${TOOLCHAIN_DIR}/bin


HOST=arm-linux-gnueabihf
CROSS=arm-linux-gnueabihf-
PREFIX=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty_sdl2




#libpng and libjpeg
DEPENDLIB=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty_sdl2
export CFLAGS="-I${DEPENDLIB}/include"
export CPPFLAGS="-I${DEPENDLIB}/include"
export LDFLAGS="-L${DEPENDLIB}/lib"
export CC=${CROSS}gcc
export AR=${CROSS}ar
export NVCC=${CROSS}gcc

#modify makefile and config.mk, cd to lib folder
cd lib
./configure --prefix=${PREFIX} --host=${HOST}

