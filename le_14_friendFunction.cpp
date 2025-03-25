#include<iostream>

using namespace std;

class Box{
    int l,b,h; // instanace member / property
    
    public:
    // member function / method
    void setDimention(int x, int y , int z){
        l = x;
        b = y;
        h = z;
    }

    void showDimention(){
        cout << "L = " << l << " B = " << b << " H = " << h << endl;
    }

    friend void f1();
    
};
// non member function
void f1(){
    Box b;
    
    b.l = 10;
    b.b = 20;
    b.h = 30;
    cout << "L = " << b.l << " B = " << b.b << " H = " << b.h << endl;
    // b.setDimention(10,20,30);
    // b.showDimention();
    cout << "This is f1 function\n";

}

int main()
{
    system("cls");
    
    // Box b1;
    // f1(b1);
    f1();
    return 0;
}