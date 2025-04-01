// 3.multi-leval inheritance -> Multilevel inheritance is a type of inheritance where a derived class inherits from a base class, and another class further inherits from that derived class. It forms a chain of inheritance where
// ex.Class A (Base Class) → Class B (Derived from A) → Class C (Derived from B)

#include<iostream>

using namespace std;

// multi leval inheritance 
class Person{
    int age;
    string name;
    public:

    Person(){
        cout << "I am Person Class Constructor\n";
    }
    void showData(int a, string n){
        age = a;
        name = n;
        cout<<"Name is " << name << " and age is " << age <<endl;
    }
};

class Employee : public Person{
    int empid;
    float salary;
    public:
    Employee(){
        cout << "I am Employee Class Constructor\n";
    }
    void showData(int e, float s){
        empid = e;
        salary = s;
        cout<<"Emp id " << empid << " and Salary is " << salary <<endl;
    }
};

class Intern :public Employee{
    public:
    Intern(){
        cout << "I am Intern Class Constructor\n";
    }
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