#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

struct Column{
    vector<string> colName;
    vector<string> colType;
};

class Table{
    private:
    unsigned int primaryKey = 1;
    int foreignKey;
    Column columnData;
    string TableName;

    public:
    Table();
    ~Table();
    void initializeTable();
    void addCategories(int qt);
    void inputData();
    void file_is_Empty();
    void primarySet();
};