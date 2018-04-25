#ifndef LIB_DATABASE_MANAGER_HPP
#define LIB_DATABASE_MANAGER_HPP

#include "../../lib/sqlite3/sqlite3.h"
#include "../file_manager/file_manager.hpp"
#include <iostream>
#include <string>

namespace libs {
class Database_manager {
private:
  sqlite3 *_db;

public:
  Database_manager(const char *);
};
} // namespace libs
#endif