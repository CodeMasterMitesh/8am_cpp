// method overloading , method overriding, method hiding

#include <iostream>
using namespace std;

class Car{
    public:

    
    void spd(){
        cout << "Speed Increase\n";
    }
    
    void brk(){
        cout << "Break applied and Speed Decreased\n";
    }
    // virtual function
    // virtual function is a member function in base class that you expect to override in derived class.
    virtual void Gear(int x){
        cout << "Manually Gear " << x <<" changed\n";
    }

    void musicSystem(){
        cout << "Music System ON\n";
    }

    void musicSystem(string name){ // method overloading
        cout << "Music System ON and song play " << name << endl;
    }

    void windowOpen(){
        cout << "Window Open\n";
    }
    
};

class sportsCar :public Car{

    public:
    virtual void Gear(int x){  // method overriding
        cout << "Auto Gear " << x <<" changed\n";
    }

    void windowOpen(int n){
        cout << "Open " << n << " Th Window\n";
    }

};
int main(){
    Car *p;

    p = new sportsCar; //DMA

    p->Gear(5); //early binding  - late binding / run time binding

    return 0;
}