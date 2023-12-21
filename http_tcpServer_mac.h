#ifndef INCLUDED_HTTP_TCPSERVER_MAC
#define INCLUDED_HTTP_TCPSERVER_MAC

#include<stdio.h>
#include <stdlib.h>
#include<string>
#include<sys/socket.h>
#include<arpa/inet.h>

namespace http {
    class TcpServer {
        public:
            TcpServer(std::string ip_address, int port);
            ~TcpServer();
            void startListen();
        private:
            std::string m_ip_address;
            int m_port;
            int m_socket;
            int m_new_socket;
            long m_incomingMessage;
            struct sockaddr_in m_socketAddress;
            unsigned int m_socketAddress_len;
            std::string m_serverMessage;

            int startServer();
            void closeServer();
            void acceptConnection(int &new_socket);
            std::string buildResponse();
            void sendResponse();
    };
} 
#endif
