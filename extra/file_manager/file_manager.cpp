#include "file_manager.hpp"

namespace extra {
namespace file_manager {
int create_folder(std::string path) {
#if defined(_WIN32)
  return _mkdir(path.c_str());
#else
  mode_t nMode = 0733;
  return mkdir(path.c_str(), nMode);
#endif
}
std::string get_path_from_file_path(std::string file_path) {
#if defined(_WIN32)
  size_t slash = file_path.find_last_of("\\");
  return (slash != std::string::npos) ? file_path.substr(0, slash) : file_path;
#else
  size_t slash = file_path.find_last_of("/");
  return (slash != std::string::npos) ? file_path.substr(0, slash) : file_path;
#endif
}
} // namespace file_manager
} // namespace extra