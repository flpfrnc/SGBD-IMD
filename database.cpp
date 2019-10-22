#include "database.hpp"

Table::Table(){
    cout << "Digite o nome da tabela a ser criada: ";
    cin >> TableName;
    TableName = TableName + ".csv";
    this->initializeTable();
    this->primarySet();
}

Table::~Table(){
    
}

void Table::initializeTable(){

    ofstream NewT(TableName,ios::app);
    this->file_is_Empty();
}

void Table::file_is_Empty(){
    int qtCat;

    ifstream NewT;
    string line;
    NewT.open(TableName, ios::in);
    getline(NewT, line);
        
    if(NewT.eof()){
        cout << "Digite a quantidade de categorias" << endl;
        cin >> qtCat;
        this->addCategories(qtCat);
    }


}

void Table::addCategories(int qt){
    string Cat, inputCat;
    cout << "Criando tabela!" << endl;
        ofstream NewT(TableName, ios::app);
        

        for(int i = 0; i < qt; i++){
            cout << "Digite a " << i+1 <<"a categoria: ";
            cin >> Cat;
            columnData.colName.push_back(Cat);
            if(i < qt-1)
            NewT << columnData.colName.at(i) << ",";
            else if(i = qt - 1)
            NewT << columnData.colName.at(i) << endl;
        }
}

void Table::primarySet(){
    /*string pkCol;
    cin >> pkCol;
    for() //infos about the table to the definition of a primary key
    if(pkCol = columnData.colName.)
    */
}   