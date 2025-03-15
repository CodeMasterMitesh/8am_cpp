#include<iostream>
// function call by refrence
using namespace std;

int sum(int,int);

int sum(int x,int y){

    return x + y;
}


int sub(int *,int *);

int sub(int *x,int *y){

    return *x - *y;
}

int mul(int &,int &);

int mul(int &x,int &y){

    return x * y;
}

int changeValue(int &x){
    x = 10;
    return x;
}



int main(){

    int a;
    int b;
    cin >> a;
    cin >> b;
    // printf("%d",sum(a,b));
    cout << sum(a,b) << endl; // call by value 
    cout << sub(&a,&b) << endl; // call by address
    cout << mul(a,b) << endl; // call by refrence
    changeValue(a);
    cout << a << endl;
    return 0;
}