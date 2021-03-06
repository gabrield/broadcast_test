#ifndef communication_h
#define communication_h

#include <string>

#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>




using namespace std;


#define MSG_LEN 1024


class Communication {
    struct sockaddr_in my_addr, cli_addr, send_addr;
    int sockfd, i; 
    socklen_t slen;
    char buf[MSG_LEN];
    
    int bcast_sock;
    int broadcastEnable;
    int ret;

    
    
  public:
    Communication(int);
    ~Communication();
    char *Listen();
    void Send(const char *);
    void Close();
    int MaxMsgLength() { return MSG_LEN; }
    
};


#endif
