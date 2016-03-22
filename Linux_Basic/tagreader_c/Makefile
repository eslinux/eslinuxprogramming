.PHONY: all, install, clean  

TARGET:=tagreader
HDRS+=
CSRCS+= tagreader_c.c
CPPSRCS+=  

OBJSDIR=./build
OBJS:= $(patsubst %.cpp, $(OBJSDIR)/%.o, $(CPPSRCS))  
OBJS+= $(patsubst %.c, $(OBJSDIR)/%.o, $(CSRCS))  


INCDIR+= -I/home/ninhld/Documents/taglib_install_target/include \
         -I/home/ninhld/Documents/taglib_install_target/include/taglib
  
CFLAGS += -DDEBUG -Wall -g  
LDFLAGS += -L/home/ninhld/Documents/taglib_install_target/lib -ltag -ltag_c  

CC=${CROSS_COMPILE}gcc  
CXX=${CROSS_COMPILE}g++  

all: ${TARGET}  
${TARGET} : $(OBJS)
	@echo " [LINK] $@"  
	@mkdir -p $(shell dirname $@)  
	@$(CXX) $(OBJS) -o $@ $(LDFLAGS)
	
$(OBJSDIR)/%.o: %.c $(HDRS)
	@echo " [CC]  $@"  
	@mkdir -p $(shell dirname $@)  
	@$(CC) -c $< -o $@ $(CFLAGS) ${INCDIR}  

$(OBJSDIR)/%.o: %.cpp $(HDRS)  
	@echo " [CXX] $@"  
	@mkdir -p $(shell dirname $@)  
	@$(CXX) -c $< -o $@ $(CFLAGS) ${INCDIR}  

install:  
	cp -rf ${TARGET} /usr/local/bin  
		 
clean:  
	rm -rf ${OBJSDIR}  
	rm -rf ${TARGET}  
