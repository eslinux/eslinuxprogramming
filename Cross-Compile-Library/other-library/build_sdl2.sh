
#PC

./configure --prefix=`pwd`/install




#RPI
export CPPFLAGS="-I/opt/vc/include"
export LDFLAGS="-L/opt/vc/lib"

./configure -disable-pulseaudio --disable-esd --disable-video-mir --disable-video-wayland --disable-video-x11 --disable-video-opengl





#CROSS
TOOLCHAIN_DIR=/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64
export PATH=$PATH:${TOOLCHAIN_DIR}/bin

export CPPFLAGS="-I/home/linuxpc/Downloads/face_recognition/ISO/raspbian-jessie-lite-rootfs/opt/vc/include"
export LDFLAGS="-L/home/linuxpc/Downloads/face_recognition/ISO/raspbian-jessie-lite-rootfs/opt/vc/lib"

./configure --host=arm-linux-gnueabihf -disable-pulseaudio \
--disable-esd --disable-video-mir --disable-video-wayland \
--disable-video-x11 --disable-video-opengl \
CC=arm-linux-gnueabihf-gcc \
--prefix=`pwd`/install



#aapp
export LD_LIBRARY_PATH=/opt/vc/lib:/usr/local/lib
export CPPFLAGS="-I/opt/vc/include"
export LDFLAGS="-L/opt/vc/lib"
