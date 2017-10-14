

#build QT => cd to qtbase folder
RPI_TOOLCHAIN=/opt/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64/bin/arm-linux-gnueabihf-
RPI_SYSROOT=/home/linuxpc/2017-07-05-raspbian-jessie-lite-rootfs

#correct link rootfs
sysroot-relativelinks.py $RPI_SYSROOT


#configure
./configure -opengl es2 -device linux-rasp-pi-g++ \
-device-option CROSS_COMPILE=$RPI_TOOLCHAIN  \
-opensource -confirm-license -optimized-qmake \
-reduce-exports -release -make libs -skip qtwebkit \
-sysroot $RPI_SYSROOT \
-prefix /usr/local/qt5pi



#affter install /usr/local/qt5pi (qmake for host) and $RPI_SYSROOT/usr/local/qt5pi  (lib for rpi)
make -j4
make install



#run app must have rootfs (mount rootfs of rpi to host) link the same as when cross-compile (/run/media/linuxpc/62ca0b6d-6291-4c40-b1fd-11bc291e4a38)
export PATH=$PATH:/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64/bin  
export QMAKESPEC=/usr/local/qt5pilite/mkspecs/devices/linux-rasp-pi-g++
cd /home/linuxpc/Downloads/showimage/showImage3
/usr/local/qt5pilite/bin/qmake
make
