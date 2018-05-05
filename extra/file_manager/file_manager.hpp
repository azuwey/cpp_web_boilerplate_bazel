#ifndef EXTRAS_FILE_MANAGER_HPP
#define EXTRAS_FILE_MANAGER_HPP

#include <string>
#include <sys/stat.h>
#include <sys/types.h>

namespace extra {
namespace file_manager {
int create_folder(std::string);
std::string get_path_from_file_path(std::string);
} // namespace file_manager
} // namespace extra
#endif