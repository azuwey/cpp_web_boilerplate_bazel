#include "main.hpp"

int main(int argc, char **argv) {
  libs::Http_server http_server(8080);
  libs::Database_manager database_manager(DB_FILE_URI);
  return 0;
}