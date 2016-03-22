 PHONY:=

ifeq ($(strip $(XILINX_EDK)),)
$(error "Please setup ISE Building Environment")
endif

ifeq ($(strip $(ROOTFS_DIR)),)
$(error "Please specify rootfs directory")
endif

srctree=$(CURDIR)
ifeq ($(APPS_VERBOSE),1)
Q =
else
Q = @
endif

NUM_DL_RETRIES=3

URL_IPFIRE=http://source.ipfire.org/source-2.x

CROSS=arm-xilinx-linux-gnueabi

export srctree Q APPS_VERBOSE URL_IPFIRE NUM_DL_RETRIES CROSS ROOTFS_DIR

# perl-DBD-SQLite perl-DBD-mysql 
# XML-Parser
# cyrus-sasl cyrus-imapd krb5 htop iftop
# avahi gpgme
#  gnupg 
# liboping
# libnl swconfig
# strace
# squid

#ncurses

# squidclamav squidguard snort
 
BASE_APPLIST:=  calamaris   
	       
	      
# yum install git wget bison flex glib-devel glib2-devel perl-Text-CSV_XS perl-ExtUtils-MakeMaker intltool.noarch  
	      
	      
BASE_APPLIST_:= makescripts \
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
	      fix_somethings 
#ebtables keepalived    

buildlist:= $(addprefix _build_,$(BASE_APPLIST))

cleanlist:= $(addprefix _clean_,$(BASE_APPLIST))

include $(srctree)/scripts/Makefile.inc

PHONY+= all
all: $(buildlist)

PHONY+= clean
clean: $(cleanlist)

PHONY+=$(buildlist)
$(buildlist):
	$(Q)$(MAKE)  $(build)=$(srctree)/$(@:_build_%=scripts/appmks/%)
	
PHONY+=$(cleanlist)
$(cleanlist):
	$(Q)$(MAKE) $(clean)=$(srctree)/$(@:_clean_%=scripts/appmks/%)

%/: FORCE
	$(Q)$(MAKE) -C $(srctree)/$@ $(build)=$(srctree)/$@

PHONY+= FORCE
FORCE:

.PHONY: $(PHONY)

