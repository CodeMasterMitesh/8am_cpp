#include<iostream>
// refrence variable is an alias for another variable
using namespace std;

int main(){
    int x = 10;
    int &y = x;
    y++;
    cout << x << endl;
    return 0;
}