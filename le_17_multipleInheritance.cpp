// 2.multiple in heritance  -> Multiple inheritance is a feature in C++ where a class can inherit from more than one base class. This allows the derived class to acquire properties and behaviors from multiple parent classes.

#include<iostream>

using namespace std;

// multiple inheritance 
class Person{
    int age;
    string name;
    public:
    void showData(int a, string n){
        age = a;
        name = n;
        cout<<"Name is " << name << " and age is " << age <<endl;
    }

   
};

class Employee{
    int empid;
    float salary;
    public:
    void showData(int e, float s){
        empid = e;
        salary = s;
        cout<<"Emp id " << empid << " and Salary is " << salary <<endl;
    }
};

class Intern :public Person,public Employee{
    public:
    void showData(){
        cout << "I am Intern\n";
    }
};

int main(){

    Intern i1;
    i1.showData();
    i1.Person::showData(20,"Rohan");
    i1.Employee::showData(101,50000.65);

    return 0;
}