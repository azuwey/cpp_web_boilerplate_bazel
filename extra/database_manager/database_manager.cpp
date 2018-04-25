#include "database_manager.hpp"

namespace libs {
Database_manager::Database_manager(const char *database_uri) {
  extras::file_manager::create_folder(
      extras::file_manager::get_path_from_file_path(database_uri));
  if (sqlite3_open(database_uri, &_db)) {
    std::cout << "Can't open database: " << sqlite3_errmsg(_db) << std::endl;
    return;
  }
  std::cout << "Opened database successfully" << std::endl;
  sqlite3_close(_db);
}
} // namespace libs