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

    Box(){
        cout << "Default constructor called" << endl;
    }

    ~Box(){
        cout << "Default destructor called" << endl;
    }
    
};

int main()
{
    system("cls");
    Box *p; // Static memory allocation

    p = new Box; // Dynamic Memory Allocation

    p->setDimention(10,20,30);
    p->showDimention();

    delete p; // Freeing the memory allocated to the object

    return 0;
}


