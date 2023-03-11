#include "SimpleSocket.hpp"

// Default constructor
HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)
{
    // Define address structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);

    // Establish socket
    sock = socket(domain, service, protocol);
    test_connection(sock);
}

// Test connection virtual function
void HDE::SimpleSocket::test_connection(int item_to_test)
{
    // Confirm that the socket or connection has been properly established
    if (item_to_test < 0)
    {
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }
}

// Getter functions
struct socketaddr_in HDE::SimpleSocket::get_address()
{
    return address;
}

int HDE::SimpleSocket::get_sock()
{
    return sock;
}

int HDE::SimpleSocket::get_connection()
{
    return connection;
}

// Setter functions

void HDE::SimpleSocket::set_connection(int con)
{
    connection = con;
}