#include "http_server.hpp"

namespace extra {
void Http_server::set_routes() {
  _server.resource["/"]["GET"] = controller::get::index_controller;
  _server.default_resource["GET"] = controller::get::default_controller;
}

Http_server::Http_server(unsigned short port) {
  _server.config.port = port;
  std::thread server_thread([&]() {
    set_routes();
    // Start server
    _server.start();
  });
  // server_thread.detach();
  server_thread.join();
  std::cout << "Server is 'started'..." << std::endl;
}
} // namespace extra