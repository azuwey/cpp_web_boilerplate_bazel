#include "../extra/database_manager/database_manager.hpp"
#include "../lib/sqlite3/sqlite3.h"
#include "gtest/gtest.h"
#include <stdio.h>

#define DB_FILE_URI "db/test.db"

extra::Database_manager db_manager(DB_FILE_URI);

TEST(database_manager, open_database) {
  EXPECT_EQ(db_manager.open_database(), SQLITE_OK);
}

TEST(database_manager, close_database) {
  EXPECT_EQ(db_manager.close_database(), SQLITE_OK);
}

TEST(database_manager, set_scheme) {
  std::list<extra::s_table> scheme;
  extra::s_table test_table;
  test_table.table_name = "test_users";
  test_table.columns.push_back("ID NOT NULL INTEGER PRIMARY KEY");
  test_table.columns.push_back("name text NOT NULL");
  test_table.columns.push_back("password text NOT NULL");
  EXPECT_EQ(db_manager.set_scheme(scheme, true), SQLITE_OK);
}