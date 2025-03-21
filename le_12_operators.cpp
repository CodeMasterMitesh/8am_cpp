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

    // operator overloading
    Complex operator+(Complex e){
    //    Complex T;
        e.a += a;
        e.b += b ;
       return e;
    }

    // Complex add(Complex e){
    //     Complex T;
    //     T.a = a + e.a;
    //     T.b = b + e.b;
    //     return T;
    //  }

};
// c1.a + c2.a 
// c1.b + c2.b
int main(){
    Complex c1,c2,c3; // object / entity
    c1.setData(15,25); // c1 is caller object
    c1.showData();

    c2.setData(10,20); // c2 is caller object
    c2.showData();

    c3 = c1 + c2; // c1 is caller object and + is operator and + is function and as agrugument we pass object c2 
    // and watever return this function we assign to c3
    // c3 = c1.operator+(c2);
    //c3 = c1.add(c2); // c1 is caller object and function and as argument pass object c2
    // and we receive object T and assign to c3
    c3.showData();
    return 0;
}