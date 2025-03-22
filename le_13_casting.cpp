#include<iostream>
// int to class type conversion
using namespace std;
class Dummy{
    int a;
    public:
    void setData(int x){
        a = x;
    }

    void showData(){
        cout << "a = " << a << endl;
    }
    Dummy(){}
    Dummy(int x){
        cout << "Conversion constructor" << endl;
        a = x;
    }
   
};

int main(){
    int a = 10;
    // int b;
    // float b = 10.5f;
    // a = b;
    // cout << "a = " << a << endl; 
    Dummy d1;
    d1 = a; // casting help of conversion constructor
    d1.showData();
   
    //d1(a); // constructor
    // d1.setData(10);
    // d1.showData();
    return 0;
}