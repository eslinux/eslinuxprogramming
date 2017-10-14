TOOLCHAIN_DIR=/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64
export PATH=$PATH:${TOOLCHAIN_DIR}/bin


HOST=arm-linux-gnueabihf
CROSS=arm-linux-gnueabihf-
PREFIX=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty_sdl2


./configure --prefix=${PREFIX} --host=${HOST} \
CC=${CROSS}gcc
