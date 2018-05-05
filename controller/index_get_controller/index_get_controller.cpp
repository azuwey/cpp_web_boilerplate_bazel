#include "index_get_controller.hpp"

/**
 * Index page
 * Path: "/"
 * Method: GET
 */
namespace controller {
namespace get {
void index_controller_worker(Response res, Request req) {
  try {
    std::string index_page_template =
        extra::file_content_to_string("template/index_page.html");
    res->write(inja::render(index_page_template, NULL));
  } catch (std::string msg) {
    std::cout << msg << std::endl;
    res->write(SimpleWeb::StatusCode::server_error_internal_server_error);
  }
}
void index_controller(Response res, Request req) {
  std::thread work_thread([res, req] { index_controller_worker(res, req); });
  work_thread.detach();
}
} // namespace get
} // namespace controller