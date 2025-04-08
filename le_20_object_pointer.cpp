#include<iostream>

using namespace std;
class Box{
    int l,b,h; // instanace member / property
    
    public:
    // member function / method
    void setDimention(int l, int b , int h){
       this-> l = l;
       this-> b = b;
       this-> h = h;
    }

    void showDimention(){
        cout << "L = " << l << " B = " << b << " H = " << h << endl;
    }
    
};

int main()
{
    system("cls");
    Box b1;
    Box *p = &b1; // object pointer
    
    p->setDimention(10,20,30);
    p->showDimention();
    // (*p).showDimention();
    return 0;
}


