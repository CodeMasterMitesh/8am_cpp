#include<iostream>

using namespace std;

int main(){

    try{
        int num;
        int fact = 1;
        string errors;
    
       cout << "Enter Any Number :";
       cin>>num;
       
       if (num<1)
       {
        errors = "Number is Less Than 1 is Not Allowed";
        throw errors;
       }

       if (num >= 10)
       {
        errors = "NUmber is Greter Than 10";
        throw num;
       }

       while (num>0)
       {
        fact *= num;
        num--;
       }
       
       cout << fact <<endl;
    
    }
    // catch(string errors){
    //     cout << errors;
    // }catch(int n){
    //     cout << "Number is Greter Than 10 and your entered " << n;
    // }  
    
    catch(...){
        cout << "Number is Less Than 1 and your entered";
    }  
    
    return 0;
}