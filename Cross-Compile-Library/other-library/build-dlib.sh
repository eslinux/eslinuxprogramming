
TOOLCHAIN_DIR=/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64
export PATH=$PATH:${TOOLCHAIN_DIR}/bin


PREFIX=/home/linuxpc/Downloads/face_recognition/lib-source/dlib/rpi/install
TOOLCHAIN_FILE=/home/linuxpc/Downloads/face_recognition/lib-source/dlib/arm-gnueabi.toolchain-rpi.cmake



cmake  \
-DCMAKE_BUILD_TYPE=RELEASE \
-DCMAKE_TOOLCHAIN_FILE=$TOOLCHAIN_FILE \
-DDLIB_NO_GUI_SUPPORT=1 \
-DDLIB_USE_CUDA=0 \
-DCMAKE_INSTALL_PREFIX=$PREFIX \
..
