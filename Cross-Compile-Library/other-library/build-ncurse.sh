


TOOLCHAIN_DIR=/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64
export PATH=$PATH:${TOOLCHAIN_DIR}/bin


ROOTFS_DIR=/home/linuxpc/Downloads/face_recognition/ISO/raspbian-jessie-lite-rootfs

EXTRA_CONFIG += \
	--prefix=$(ROOTFS_DIR)/usr \
	--with-shared \
	--without-debug \
	--without-ada \
	--with-ospeed=unsigned \
	--with-chtype=long \
	--enable-hard-tabs \
	--enable-xmc-glitch \
	--enable-colorfgbg \
	--enable-overwrite \
	--with-termlib=tinfo \
	--disable-nls \
	--without-manpages \
	PKG_CONFIG_PATH=$ROOTFS_DIR/usr/lib/pkgconfig
	
./configure --prefix=$ROOTFS_DIR/usr \
   $EXTRA_CONFIG \
   --host=arm-linux-gnueabihf CC=arm-linux-gnueabihf-gcc
