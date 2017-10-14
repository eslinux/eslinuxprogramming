TOOLCHAIN_DIR=/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64
export PATH=$PATH:${TOOLCHAIN_DIR}/bin



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
#installed will be ./install




#opencv 2.3.1

 
#-DWITH_JPEG=OFF because this lib is error
cmake -DWITH_GTK=OFF  \
-DENABLE_PRECOMPILED_HEADERS=OFF \
-DCMAKE_BUILD_TYPE=RELEASE \
-DCMAKE_SYSTEM_NAME=Linux \
-DCMAKE_SYSTEM_PROCESSOR=arm \
-DCMAKE_C_COMPILER=arm-linux-gnueabihf-gcc \
-DCMAKE_CXX_COMPILER=arm-linux-gnueabihf-g++ \
-DWITH_JPEG=OFF \
..
 
 
 
 
 




















        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
