#ifndef LIB_HTTP_SERVER_HPP
#define LIB_HTTP_SERVER_HPP

#include "../../lib/simple_http_server/server_http.hpp"
#include <iostream>
#include <string>

using HttpServer = SimpleWeb::Server<SimpleWeb::HTTP>;

namespace libs {
class Http_server {
private:
  HttpServer _server;

public:
  Http_server(unsigned short);
};
} // namespace libs
#endif