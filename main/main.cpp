#ifndef MAIN_CPP
#define MAIN_CPP
#define DB_FILE_URI "db/test.db"

#include "../extra/database_manager/database_manager.hpp"
#include "../extra/http_server/http_server.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  extra::Http_server http_server(34263);
  extra::Database_manager database_manager(DB_FILE_URI);
  return 0;
}
#endif