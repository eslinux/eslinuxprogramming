TOOLCHAIN_DIR=/home/linuxpc/Downloads/tools-rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64
export PATH=$PATH:${TOOLCHAIN_DIR}/bin
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${TOOLCHAIN_DIR}/lib



cd boost_1_58_0

./bootstrap.sh 

 "  
 Modify the configuration file (project-config.jam) to use the ARM toolchain   
 by replacing the line with 'using gcc' by:  
 using gcc : arm : arm-none-linux-gnueabi-g++ ;  
 "  
   
 "Install the python development package on host 
  yum install python-devel
  "
  
ZLIB_SOURCE_DIR=`pwd`/../zlib-1.2.11
BZIP2_SOURCE_DIR=`pwd`/../bzip2-1.0.6
   
   
PREFIX=`pwd`/../../faiv-facereg-d999101dd6ad/3rdparty

./bjam toolset=gcc-arm target-os=linux --prefix=$PREFIX \
-sZLIB_SOURCE=${ZLIB_SOURCE_DIR} \
-sBZIP2_SOURCE=${BZIP2_SOURCE_DIR} \
--without-python \
install  
