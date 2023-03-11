Personal project to create a web server in C++. Creating the sockets for the communication between host/cliens and server.

I followed the post in Medium from Skrew Everything https://medium.com/from-the-scratch/http-server-what-do-you-need-to-know-to-build-a-simple-http-server-from-scratch-d1ef8945e4fa. I highly recommend to read it to understand the basics of an HTTP Server.

| Port Number | Service Name | Transport Protocol | Description |
| --- | --- | --- | --- |
|21|FTP|TCP,UDP,SCTP|File Transfer Protocol (FTP) control connection|
|23|Telnet|TCP|Telnet protocol-unencrypted text communications|
|53|DNS|TCP,UDP|Domain Name System name resolver|
|80|HTTP|TCP,UPD,SCTP|Hypertext Transfer Protocol (HTTP) uses TCP in versions 1.x and 2. HTTP/3 uses QUIC, a transport protocol on top of UDP|
|443|HTTP over SSL|TCP,UDP,SCTP|Hypertext Transfer Protocol Secure (HTTPS) uses TCP in versions 1.x and 2. HTTP/3 uses QUIC, a transport protocol on top of UDP|
|989|FTP over SSL|TCP,UDP| FTPS Protocol (data), FTP over TLS/SSL|
|990|FTP over SSL|TCP,UDP| FTPS Protocol (control), FTP over TLS/SSL|