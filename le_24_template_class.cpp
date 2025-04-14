#include<iostream>
// template class in c++  In C++, a template class is a blueprint for creating a family of classes that can operate on different data types without needing to write separate code for each type
using namespace std;

template <class T>
class Example{
    T a,b;
    int c;

    public:
    void setValue(T x, T y,int z){
        a = x;
        b = y;
        c = z;
    }

    void printValue(){
        cout << "a = " << a << " b = " << b << " c = " << c <<endl;
    }
};

int main(){
    system("cls");
    Example <int>e1;
    Example <float>e2;
    Example <string>e3;

    e1.setValue(20,22,24);
    e1.printValue();

    e2.setValue(20.25f,22.65f,25);
    e2.printValue();

    e3.setValue("James ","Bond",19);
    e3.printValue();


    return 0;
}