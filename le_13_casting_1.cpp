#include<iostream>
// class to int type conversion
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
    
    operator int(){
        cout << "Conversion operator" << endl;
        return a;
    }
};

int main(){
    
    int b;
    Dummy d1;
    d1.setData(15);
    d1.showData();
    b = d1; // casting help of conversion operator
    cout << "b = " << b << endl;
    
    return 0;
}