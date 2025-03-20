#include<iostream>
// static variable and static function
using namespace std;

class Box{
    int l,b,h; // instanace member / property
    static float price; // static member variable
    public:
    void setDimention(int x, int y , int z){
        l = x;
        b = y;
        h = z;
    }

    void showDimention(){
        cout << "L = " << l << " B = " << b << " H = " << h << endl;
    }

    static void setPrice(float p){ // static member function / method
        price = p;
    }
    static void showPrice(){ // static member function / method
        cout << "Price = " << price << endl;
    }

};
float Box::price;
int main()
{
    system("cls");
    Box b1,b2;
    // b1.setDimention(15,25,35);
    // b1.showDimention();
    // Box::price = 200.25;
    // cin >> Box::price;
    // cout << Box::price;
    Box::setPrice(150.25);
    Box::showPrice();
    return 0;
}