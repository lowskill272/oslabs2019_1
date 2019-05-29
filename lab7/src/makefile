mkCC=gcc
CFLAGS=-I.
CURRENT_DIR=$(notdir $(patsubst %/,%,$(dir $(mkfile_path))))

all: tcpserver tcpclient udpserver udpclient

udpclient :
	$(CC) -o udpclient udpclient.c $(CFLAGS)

tcpclient : 
	$(CC) -o tcpclient tcpclient.c $(CFLAGS)
	
udpserver :
	$(CC) -o udpserver udpserver.c $(CFLAGS)

tcpserver : 
	$(CC) -o tcpserver tcpserver.c $(CFLAGS)


clean_o:
	$(shell rm ./*.o)