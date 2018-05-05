#ifndef EXTRAS_FILE_CONTENT_TO_STRING_HPP
#define EXTRAS_FILE_CONTENT_TO_STRING_HPP

#ifdef _WIN32
#include <io.h>
#define access _access_s
#else
#include <unistd.h>
#endif

#include <fstream>
#include <streambuf>
#include <string>

namespace extra {
std::string file_content_to_string(std::string file_url);
} // namespace extra
#endif