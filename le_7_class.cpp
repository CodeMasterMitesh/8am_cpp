#include<iostream>
// class
using namespace std;

class Book{

    // in class by default member function and variable is private 

    string name; // member / properties / field / instantance variable
    int page; // member 
    float price; // member 
    string author; // member 

    public:
    // member methods / action / 
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

    Book b1,b2,b3; // this is object
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