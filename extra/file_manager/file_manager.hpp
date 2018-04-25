#ifndef LIB_FILE_MANAGER_HPP
#define LIB_FILE_MANAGER_HPP

#include <string>
#include <sys/stat.h>
#include <sys/types.h>

namespace extras {
namespace file_manager {
int create_folder(std::string);
std::string get_path_from_file_path(std::string);
} // namespace file_manager
} // namespace extras
#endif