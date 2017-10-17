#!/bin/bash

# make-ninhld.sh build
# make-ninhld.sh clean
# make-ninhld.sh download



BASE_APPLIST=(makescripts \
	      stage2 scripts configroot initscripts backup freefont  dejavu-fonts-ttf \
	      sed zlib openssl apache2 openssh jquery web-user-interface \
	      perl Digest Digest-SHA1 Digest-HMAC HTML-Parser Crypt-PasswdMD5 experimental \
	      HTML-Tagset HTML-Template perl-gettext URI IO-Socket-SSL IO-Stringy \
	      MIME-Tools libnet libwww-perl sqlite Locale-Country GeoIP flag-icons \
	      perl-TimeDate Net-IPv4Addr Net-Telnet perl-Sort-Naturally Net-DNS \
	      perl-Authen-SASL perl-Carp-Clan  perl-Date-Calc perl-Date-Manip \
	      perl-DBI perl-Net-SMTP-SSL perl-Device-Modem perl-Device-SerialPort  \
	      perl-File-ReadBackwards perl-File-Tail Net-Server Unix-Syslog Text-Tabs+Wrap swatch \
	      Archive-Tar Archive-Zip Net_SSLeay perl-Text-CSV_XS perl-PDF-API2 \
	      util-linux kmod udev \
	      popt libsmooth pciutils \
	      misc-progs setup \
	      libnl libmnl libnfnetlink libnetfilter_queue libnetfilter_cttimeout libnetfilter_cthelper libnetfilter_conntrack \
	      iptables xtables-addons iproute2 \
	      libffi pcre glib-2.36.4 \
	      flex pam monit  \
	      fcron ethtool  \
	      ntp lzma python libxml2 dbus  \
	      hostname pakfire \
	      freetype fontconfig libpng pixman \
	      cairo pango rrdtool \
	      gmp netsnmpd curl intltool libgpg-error libgcrypt strongswan \
	      ddns libtool db BerkeleyDB openldap dhcpcd \
	      libpcap arping \
	      lzo openvpn \
	      libdnet daq netcat \
	      nettle libidn dnsmasq \
	      libtiff libgd perl-GD GD-TextUtil GD-Graph  \
	      ca-certificates \
	      sysvinit \
	      bind dhcp sysklogd  \
	      whatmask vnstat tzdata logrotate logwatch \
	      coreutils liboping collectd \
	      bash tcpdump \
	      quagga \
	      vlan \
	      squid squid-accounting calamaris \
	      fix_somethings)
BASE_APPLIST=(dhcp)



ROOTDIR=$(pwd)
SRC_DIR=${ROOTDIR}/srcdir
INFO_DIR=${ROOTDIR}/buid
SCRIPT_DIR=${ROOTDIR}/script
PATCHES_DIR=${ROOTDIR}/patches

export ROOTDIR SRC_DIR
#. ./tools/make-functions

if [ "$1" == "build" ]; then
	for buildfile in "${BASE_APPLIST[@]}"
	do
		if [ -f "${INFO_DIR}/${buildfile}.flag" ]; then
			echo continue
		fi
		make -f ${SCRIPT_DIR}/${buildfile} _build && touch "${INFO_DIR}/${buildfile}.flag"
	done
elif [ "$1" == "clean" ]; then
	echo "clean app"

elif [ "$1" == "cleanall" ]; then
	echo "clean all app"
	rm -rf 
else
	echo "other"
fi




