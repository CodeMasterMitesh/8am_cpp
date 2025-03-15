#include <iostream>

using namespace std;
inline void message();
void message(){
    cout << "Good Morning" << endl;
}

inline int sum(int ,int);

int sum(int a,int b){
    return a+b;
}
int main(){

    system("cls");
    message();
    cout<< "Sum is " << sum(10,20) << ".\n";
    
    return 0;
}