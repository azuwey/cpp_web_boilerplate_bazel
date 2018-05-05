#ifndef DEFAULT_GET_CONTROLLER_HPP
#define DEFAULT_GET_CONTROLLER_HPP

#include "../../lib/simple_http_server/server_http.hpp"
#include <thread>

using Response = std::shared_ptr<SimpleWeb::Server<SimpleWeb::HTTP>::Response>;
using Request = std::shared_ptr<SimpleWeb::Server<SimpleWeb::HTTP>::Request>;

namespace controller {
namespace get {
void default_controller(Response, Request);
void default_controller_worker(Response, Request);
} // namespace get
} // namespace controller
#endif