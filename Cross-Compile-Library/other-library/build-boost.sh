
cd boost_1_58_0

./bootstrap.sh 


ZLIB_SOURCE_DIR=`pwd`/../zlib-1.2.11
BZIP2_SOURCE_DIR=`pwd`/../bzip2-1.0.6
   
   
PREFIX=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty

./bjam --prefix=$PREFIX \
-sZLIB_SOURCE=${ZLIB_SOURCE_DIR} \
-sBZIP2_SOURCE=${BZIP2_SOURCE_DIR} \
--without-python \
install  
