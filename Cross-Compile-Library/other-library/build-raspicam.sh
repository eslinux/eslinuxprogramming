


TOOLCHAIN_DIR=/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64
export PATH=$PATH:${TOOLCHAIN_DIR}/bin


PREFIX=/home/linuxpc/Downloads/face_recognition/lib-source/raspicam-0.1.6/release/install
TOOLCHAIN_FILE=/home/linuxpc/Downloads/face_recognition/lib-source/arm-gnueabi.toolchain-rpi.cmake

#modify CMakeLists.txt

cmake  \
-DCMAKE_BUILD_TYPE=RELEASE \
-DCMAKE_TOOLCHAIN_FILE=$TOOLCHAIN_FILE \
-DCMAKE_INSTALL_PREFIX=$PREFIX \
..


