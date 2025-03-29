#include<iostream>
// complex number
using namespace std;

class Complex{
    int a,b; // instantnce member variable / property

    public:
    // member function / methods
    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout << "a = "<< a << " b = " << b <<endl;
    }

    Complex add(Complex e){
       Complex T;
       T.a = a + e.a;
       T.b = b + e.b;
       return T;
    }

   friend istream& operator >>(istream&,Complex&); // function prototype

   friend ostream& operator <<(ostream&,Complex&);

};


istream& operator >>(istream &in,Complex &c){
    cout <<"Operator Overloading" << endl;
    cout << "Enter a and b: ";
    in >> c.a >> c.b;
}

ostream& operator <<(ostream &out,Complex &c){
   
    out << "a = "<< c.a << " b = " << c.b <<endl;
}

int main(){
    system("cls");
    int a;
    Complex c1,c2,c3; // object / entity
    cin>>c1>>c2;
    cout << c1 << c2 << endl;
    // c1.setData(15,25); // c1 is caller object
    //c1.showData();

    // c2.setData(10,20); // c2 is caller object
    //c2.showData();

    return 0;
}