// pure virtual function and abstract class

#include <iostream>
using namespace std;
class Person{
    string name;
    int age;
    float height;

    public:

    virtual string getName(string n) = 0;
    int getAge(int a){
        age = a;
        return age;
    }

    float getHeight(float h){
        height = h;
        return height;
    }

    virtual void f1() = 0; // pure virtual function
};

class Student : public Person{
    string name;
    string getName(string n){
        name = n;
        return name;
    }
    void f1(){
        cout << "This is a pure virtual function" << endl;
    }
    
};

int main(){
    system("cls");
    // Person p1;
    Person *p1 = new Student;
    p1->f1(); // calling pure virtual function
    // p1->getAge(20);
    // p1->getHeight(5.8); 
    // p1->getName("Ritesh");
    // p1.getName("Ritesh");
    // p1.getAge(20);
    // p1.getHeight(5.8);

    cout << "Name: " << p1->getName("Ritesh") << endl;
    cout << "Age: " << p1->getAge(20) << endl;
    cout << "Height: " << p1->getHeight(5.8) << endl;

    return 0;
}