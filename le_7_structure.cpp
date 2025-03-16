#include<iostream>
// structure
using namespace std;
// premetive data type -> int , float , double , char , void 
// non premetive data type -> struct
// 1) struct keyword is option while create variable 
struct Book{

    // in structure by default member function and variable is public 
    private:

    string name; // member variable
    int page; // member variable
    float price; // member variable
    string author; // member variable

    public:
    // member function / methods
    void input(){
        cout << "Enter Book Name,page and price " << endl; 
        cin >> name >>page >>price >>author;
    }

    // prototype
    void display();
    
};
// scope resolution
void Book::display (){
    cout << "Book Name : " << name << " And Page NO  " << page << " And Book Price is " << price << " and author name is " << author << endl;
}

int main(){
    system("cls");

    Book b1,b2,b3;
    // b1.name = "Harry Potter";
    // b1.page = 200;
    // b1.price =-352.65;
    b1.input();
    b1.display();

    b2.input();
    b2.display();

    b3.input();
    b3.display();
    return 0;
}