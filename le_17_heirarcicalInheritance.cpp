// 4.Hierarchical Inheritance->Hierarchical inheritance occurs when multiple derived classes inherit from a single base class. This means one parent class has multiple child classes that inherit its properties and methods.

#include<iostream>

using namespace std;

// Hierarchical inheritance 
class animal{

    string name;
    string sound;

    public:
    void showData(string n, string s){
        name = n;
        sound = s;

     cout << "Name of Animal is " << name << endl;
     cout << sound << endl;
    }
};

class Dog :public animal {
    
};

class Cat :public animal {

};

class Cow :public animal {

};

class Lion :public animal {

};

int main(){

    Dog d1;
    d1.showData("Dog","Bark Bark");

    return 0;
}