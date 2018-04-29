#ifndef EXTRAS_UTILS_HPP
#define EXTRAS_UTILS_HPP

#include <sstream>
#include <string>

namespace extras {
template <typename InputIt>
std::string string_join(InputIt begin, InputIt end,
                        const std::string &separator = ", ",
                        const std::string &concluder = "") {
  std::ostringstream ss;
  if (begin != end) {
    ss << *begin++;
  }
  while (begin != end) {
    ss << separator;
    ss << *begin++;
  }
  ss << concluder;
  return ss.str();
};
} // namespace extras
#endif