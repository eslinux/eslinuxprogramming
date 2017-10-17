ROOTDIR=$(pwd)
SRC_DIR=${ROOTDIR}/srcdir
INFO_DIR=${ROOTDIR}/buid
SCRIPT_DIR=${ROOTDIR}/script
PATCHES_DIR=${ROOTDIR}/patches


NUM_DL_RETRIES=3
URL_SOURCE_DL=http://source.ipfire.org/source-2.x
CROSS=arm-xilinx-linux-gnueabi



uncompress(){
	echo "uncompress $2"
	local file_ext=$(echo $2 |awk -F . '{if (NF>1) {print $NF}}')
	
	#echo ${file_ext}
	case "${file_ext}" in
		x86_64|i686|i586)
			echo "i586"
			;;

		tar)
			tar xf $1/$2 -C $1
			;;
		zip)
			unzip xf $1/$2 -d $1
			;;

		gz)
			tar xzf $1/$2 -C $1
			;;

		bz2)
			tar xjf $1/$2 -C $1
			;;

		*)
			echo "Cannot guess build architecture"
			;;
	esac
}


download_file(){
	local ret=0
	if [ ! -f "${SRC_DIR}/${2}.flag" ]; then
		echo "===== Downloading ${2} ======="
		wget -T 60 -t 1 -nv ${1}/${2} -O ${SRC_DIR}/${2} && touch "${SRC_DIR}/${2}.flag" && ret=1
	fi
	
	if [ "$ret" = "1" ]; then
		uncompress ${SRC_DIR} ${2}
	fi
	
	return $ret
	
#download_file $1 $2
#retval=$?  => get return value
}



