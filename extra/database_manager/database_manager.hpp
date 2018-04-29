#ifndef EXTRAS_DATABASE_MANAGER_HPP
#define EXTRAS_DATABASE_MANAGER_HPP

#include "../../lib/sqlite3/sqlite3.h"
#include "../file_manager/file_manager.hpp"
#include "../utilities/string_join.hpp"
#include "database_utils.hpp"
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>

namespace extras {
class Database_manager {
private:
  sqlite3 *_db;
  const char *_database_uri;

public:
  Database_manager(const char *);
  int open_database();
  int close_database();
  int set_scheme(std::list<s_table> &, bool);
};
} // namespace extras
#endif