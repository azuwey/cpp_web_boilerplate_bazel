#ifndef INDEX_GET_CONTROLLER_HPP
#define INDEX_GET_CONTROLLER_HPP

#include "../../extra/utilities/file_content_to_string.hpp"
#include "../../lib/simple_http_server/server_http.hpp"
#include <inja.hpp>
#include <thread>

using Response = std::shared_ptr<SimpleWeb::Server<SimpleWeb::HTTP>::Response>;
using Request = std::shared_ptr<SimpleWeb::Server<SimpleWeb::HTTP>::Request>;

namespace controller {
namespace get {
void index_controller(Response, Request);
void index_controller_worker(Response, Request);
} // namespace get
} // namespace controller
#endif