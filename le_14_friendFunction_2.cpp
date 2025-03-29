#include<iostream>

using namespace std;
class LunchBox; // forward declaration
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

    friend void f1(Box, LunchBox);
    
};

class LunchBox{
    int a,b,c; // instanace member / property
    
    public:
    // member function / method
    void setDimention(int x, int y , int z){
        a = x;
        b = y;
        c = z;
    }

    void showDimention(){
        cout << "A = " << a << " B = " << b << " C = " << c << endl;
    }

    friend void f1(Box, LunchBox);

    // friend int main();
    
};
// friend function
void f1(Box b, LunchBox lb){
    cout << b.l + b.b + b.h + lb.a + lb.b + lb.c << endl;
}

int main()
{
    system("cls");
    Box b1;
    // b1.l = 10;
    // b1.b = 20;
    // b1.h = 30;
    // cout << b1.l << " " << b1.b << " " << b1.h << endl;
    b1.setDimention(10,20,30);
    b1.showDimention();

    LunchBox lb1;
    lb1.setDimention(100,200,300);
    lb1.showDimention();
    
    f1(b1,lb1);
    return 0;
}