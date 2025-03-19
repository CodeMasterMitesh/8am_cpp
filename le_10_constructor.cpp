#include<iostream>
// In C++, a constructor is a special member function used to initialize objects of a class, 
// sharing the same name as the class and without a return type (not even void).
using namespace std;

class Box{
    int l,b,h; // instanace member / property
    
    public:
    void setDimention(int x, int y , int z){
        l = x;
        b = y;
        h = z;
    }

    void showDimention(){
        cout << "L = " << l << " B = " << b << " H = " << h << endl;
    }
    // constructor
    // Box(){}
    // Box(){
    //   cout << "This is Box Class Constructor\n";
    // }
    // Parameterized constructor
    Box(int x = 0, int y =0, int z = 0){
        cout << "This is Box constructor\n";
        l = x;
        b = y;
        h = z;
    }

    // copy constructor
    Box(Box &x){
        cout << "This is Copy Box constructor\n";
        l = x.l;
        b = x.b;
        h = x.h;
    }

    //more than once constructor use in same class so its called constructor overloading 
};

int main()
{
    system("cls");
    
    Box b1(15,15,20),b2(10,20),b3(10),b4(b3),b5; // object is real life entity
    // b1.setDimention(15,20,25);
    b1.showDimention();
    b2.showDimention();
    b3.showDimention();
    b4.showDimention();
    b5.showDimention();
    return 0;
}