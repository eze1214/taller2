/*Programa de ejemplo de leveldb
Compilar con g++ -o add add.cpp -lleveldb
*/
#include <leveldb/db.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  leveldb::Status status = leveldb::DB::Open(options, "testdb", &db);
  string key = "padron";
  string value;
  status = db->Get(leveldb::ReadOptions(), key, &value);
  cout << "Valor leido:" << value << endl;
  delete db;
  return 0;
}
