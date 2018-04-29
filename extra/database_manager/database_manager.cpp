#include "database_manager.hpp"
#include <algorithm>

namespace extras {
Database_manager::Database_manager(const char *database_uri) {
  // We try to create our path
  // for the database file
  extras::file_manager::create_folder(
      extras::file_manager::get_path_from_file_path(database_uri));

  // We just set our class varibale
  _database_uri = database_uri;
}
int Database_manager::open_database() {
  return sqlite3_open(_database_uri, &_db);
}
int Database_manager::close_database() { return sqlite3_close(_db); }
int Database_manager::set_scheme(std::list<s_table> &scheme, bool force_new) {
  // Open database, cause it could be closed
  int return_code = open_database();
  if (return_code != SQLITE_OK)
    // If cannot open the databse
    // return with some error code.
    // You can find this codes in
    // the "lib/sqlite3/sqlite3.h".
    return return_code;

  // If you have successfully opened
  // the database, then we have to
  // create a statements list
  std::list<std::string> statements;

  // After we have to create an
  // iterator, which iterate our
  // scheme list.
  std::list<s_table>::iterator it;
  for (it = scheme.begin(); it != scheme.end(); it++) {
    // We create a local statement varible
    std::ostringstream statement;

    // We join all the columns
    std::string columns =
        extras::string_join(it->columns.begin(), it->columns.end());

    // After the we prepare our statement,
    // and then push into our statements array
    if (force_new)
      statement << "DROP TABLE IF EXISTS " << it->table_name << ";";
    statement << "CREATE TABLE IF NOT EXISTS " << it->table_name << "("
              << columns << ");";
    statements.push_back(statement.str());
  }

  // We join all the statements
  std::string s_statements =
      extras::string_join(statements.begin(), statements.end(), "");

  // After we execute our statements
  return sqlite3_exec(_db, s_statements.c_str(), NULL, NULL, NULL);
}
} // namespace extras