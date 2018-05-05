#include "file_content_to_string.hpp"

namespace extra {
std::string file_content_to_string(std::string file_url) {
  if (access(file_url.c_str(), 0) != 0)
    throw "File is not exist: " + file_url;
  std::ifstream file(file_url.c_str(), std::ifstream::in);
  std::string file_content((std::istreambuf_iterator<char>(file)),
                           (std::istreambuf_iterator<char>()));
  return file_content;
};
} // namespace extra