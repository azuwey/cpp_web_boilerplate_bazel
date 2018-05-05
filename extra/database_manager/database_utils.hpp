#ifndef EXTRAS_DATABASE_UTILS_HPP
#define EXTRAS_DATABASE_UTILS_HPP

#include <list>

namespace extra {
struct s_table {
  const char *table_name;
  std::list<const char *> columns;
};
} // namespace extra
#endif