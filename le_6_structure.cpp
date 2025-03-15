#include<iostream>
// structure
using namespace std;
// premetive data type -> int , float , double , char , void 
// non premetive data type -> struct
// 1) struct keyword is option while create variable 
struct Book{
    // char name[10];
    string name;
    int page;
    float price;
};

Book input(){
    Book e;
    cout << "Enter Book Name,page and price " << endl; 
    cin >> e.name >>e.page >>e.price;
    display(e);
    return e;
}

void display(Book e){
    cout << "Book Name : " << e.name << " And Page NO  " << e.page << " And Book Price is " << e.price << endl;
}

int main(){
    system("cls");

    Book b1,b2,b3;
    b1.name = "Harry Potter";
    b1.page = 200;
    b1.price = 352.65;
    display(b1);

    b2 = input();
    display(b2);

    b3 = input();
    display(b3);
    return 0;
}