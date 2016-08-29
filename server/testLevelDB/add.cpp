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
  string value = "91985";
  cout << "Clave escrita:" << key << " Valor:" << value << endl;
  status = db->Put(leveldb::WriteOptions(), key, value);	
  delete db;
  return 0;
}
