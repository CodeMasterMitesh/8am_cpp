#include<iostream>
// In C++, inheritance is a mechanism where a new class (derived class) inherits properties and methods from an existing class (base class), 
// enabling code reuse and establishing a hierarchical relationship between classes. 
using namespace std;

// base class / parent class / main class
class Car{
    int a,b,c;

    public:
    void spd(){
        cout << "Speed Increase\n";
    }

    void brk(){
        cout << "Break applied and Speed Decreased\n";
    }

};

// this is child class / sub class / derived class
class sportsCar :public Car{



};

int main(){
    
    Car c1;
    c1.spd();
    c1.brk();

    sportsCar s1;
    s1.spd();
    s1.brk();

}