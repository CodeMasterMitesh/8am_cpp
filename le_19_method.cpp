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

    void Gear(int x){
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
    void Gear(int x){  // method overriding
        cout << "Auto Gear " << x <<" changed\n";
    }

    void windowOpen(int n){
        cout << "Open " << n << " Th Window\n";
    }

};
int main(){

    sportsCar s1;
    Car c1;
    s1.spd();
    s1.brk();
    
    s1.Car::Gear(1);
    c1.Gear(2); // method overriding
    s1.Gear(1); // method overriding

    s1.musicSystem("Garbo Ma No Garbo"); // method overloading

    s1.windowOpen(2); // method hiding
    return 0;
}