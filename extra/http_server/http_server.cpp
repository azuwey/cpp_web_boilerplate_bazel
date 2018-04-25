#include "http_server.hpp"

namespace libs {
Http_server::Http_server(unsigned short port) {
  _server.config.port = 8080;
  std::thread server_thread([&]() {
    // Start server
    _server.start();
  });
  // server_thread.detach();
  server_thread.join();
  std::cout << "Server is 'started'..." << std::endl;
}
} // namespace libs