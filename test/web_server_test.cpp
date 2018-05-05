#include "../extra/http_server/http_server.hpp"
#include "../lib/sqlite3/sqlite3.h"
#include "gtest/gtest.h"
#include <stdio.h>

#define DB_FILE_URI "db/test.db"

extra::Http_server http_server(8081);

TEST(database_manager, routes_response) {
  // EXPECT_EQ(open with client, response 200);
}