#ifndef socket_hpp
#define socket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace HDE
{
    class SimpleSocket
    {
        private:
            struct socketaddr_in address;
            int sock;
            int connection;
        public:
            SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
            virtual int connect_to_network(int sock, struct socketaddr_in address) = 0;
            void test_connection(int );

    };
}

#endif