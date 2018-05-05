#include "default_get_controller.hpp"

/**
 * Default page
 * Method: GET
 */
namespace controller {
namespace get {
void default_controller_worker(Response res, Request req) {
  res->write("Default");
}
void default_controller(Response res, Request req) {
  std::thread work_thread([res, req] { default_controller_worker(res, req); });
  work_thread.detach();
}
} // namespace get
} // namespace controller