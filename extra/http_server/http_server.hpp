#ifndef EXTRAS_HTTP_SERVER_HPP
#define EXTRAS_HTTP_SERVER_HPP

#include "../../controller/default_get_controller/default_get_controller.hpp"
#include "../../controller/index_get_controller/index_get_controller.hpp"
#include "../../lib/simple_http_server/server_http.hpp"
#include <iostream>
#include <string>

using HttpServer = SimpleWeb::Server<SimpleWeb::HTTP>;

namespace extra {
class Http_server {
private:
  HttpServer _server;

public:
  Http_server(unsigned short);
  void set_routes();
};
} // namespace extra
#endif