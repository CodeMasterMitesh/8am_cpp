#include<iostream>
// In C++, a destructor is a special member function, denoted by a tilde (~) followed by the class name, 
// that is automatically called when an object of that class is destroyed, 
// ensuring proper cleanup and resource release.
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
    // destructor
    ~Box(){
        cout << "This is Box Class destructor\n";
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