#include "ListeningSocket.hpp"

HDE::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long, int bklg) : BindingSocket(domain, service, protocol, port, interface)
{
    backlog = bklg;
    start_listening();
    test_connection(listening);
}

HDE::ListeningSocket::start_listening()
{
    listening = listen(get_connection(), backlog);
}