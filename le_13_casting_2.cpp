#include<iostream>
// class to class type conversion

using namespace std;
class Dummy{
    int a;
    public:
    void setData(int x){
        a = x;
    }

    void showData(){
        cout << "a = " << a << endl;
    }

    int getData(){
        return a;
    }
  
};

class Yummy{
    int b;
    public:
    void setData(int x){
        b = x;
    }

    void showData(){
        cout << "b = " << b << endl;
    }

    // Yummy(){}
    // Yummy(Dummy d){
    //     b = d.getData();
    // }

    // void operator=(Dummy d){
    //     b = d.getData();
    // }

    void operator*=(Dummy d){
        b *= d.getData();
    }
  
};

int main(){
    
    int b;
    Dummy d1;
    d1.setData(15);
    d1.showData();

    Yummy y1;
    y1.setData(25); 
    //y1 = d1;  // y1 is caller object, d1 is argument object
    y1 *= d1;
    y1.showData();
    return 0;
}