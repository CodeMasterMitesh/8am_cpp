#include <iostream>

using namespace std;

int main(){
    system("cls");
    float a , b;
    cout << "Enter the value of a and b\n";
    // scanf("%d %d", &a, &b);
    cin >> a >> b; // >> this is called extraction operator

    cout << "Value of a and b is " << a << " and " << b << "\n";

    return 0;
}