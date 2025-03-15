#include<iostream>
// default argument
// default argument is a value provided in the function declaration that is automatically assigned by the compiler if the caller of the function does not provide a value for the argument with a default value.
using namespace std;

// function prototype
int sum(int = 0,int = 0,int = 0);

int sum(int a,int b,int c){
    return a+b+c;
}

int main()
{
    cout<<"Sum of two value is "<<sum(10,20)<<endl;
    cout<<"Sum of two value is "<<sum(10)<<endl;
    cout<<"Sum of two value is "<<sum(10,20,30)<<endl;
    cout<<"Sum of two value is "<<sum()<<endl;
    return 0;
}


