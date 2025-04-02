#include<iostream>
// constructor and destructor in inheritance
using namespace std;

class Temp{
    int a,b;

    public:

    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout << "A = " << a << " And B = " << b <<endl;
    }
    Temp(){}
    Temp(int ab,int bc){ // this is parametrized constructor
        // cout << "This is Temp Class Default Constructor"<<endl;
        a = ab;
        b = bc;
        cout << "A = " << a << " And B = " << b <<endl;
    }
    ~Temp(){
        cout << "This is Temp Class Destructor"<<endl;
    }
};

class Jemp :public Temp{
    public:
    Jemp(){}
    Jemp(int x , int y):Temp(x,y)
    {
        cout << "This is Jemp Class Default Constructor"<<endl;
    }
    ~Jemp(){
        cout << "This is Jemp Class Destructor"<<endl;
    }
};

int main(){
    system("cls");
    Jemp j1(15,25),j2;
    // j1.setData(15,20);
    // j1.showData();

    return 0;
}