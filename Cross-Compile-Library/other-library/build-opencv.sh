cd opencv-2.4.13


mkdir release  
cd release

PREFIX=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty_x86_new  
cmake -DWITH_FFMPEG=ON -DENABLE_PRECOMPILED_HEADERS=OFF -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=$PREFIX ..  #chu y hai dau cham  
   
make  
make install  
