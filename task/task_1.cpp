#include<iostream>

using namespace std;

class FoodZone{

    int item;
    float price;
    string name;
    long long int mobile;
    float cgstper = 9;
    float sgstper= 9;
    float igstper = 18;
    float cgstamt;
    float sgstamt;
    float famount;

    public:
    FoodZone(){
        cout << "*******FoodZone Menu List********"<< endl;
        cout << "Select 1 For - Vadapav - Price : 25"<< endl;
        cout << "Select 2 For - Dabeli - Price : 30"<< endl;
        cout << "Select 3 For - Sandvich - Price : 40"<< endl;
        cout << "Select 4 For - Pizza - Price : 100"<< endl;
        cout << "Select 5 For - Burger - Price : 45"<< endl;
        cout << "*******End Menu List********"<< endl;

        cout << "Kindy Select Any Item :"<< endl;
        cin >> item;
        if(item == 1){
            cout << "You Ordered Vadapav - Kindly Pay Rs.25 :";
            cin >> price;
            cout << "Enter Your Name :";
            cin >> name;
            cout << "Enter Your Mobile :";
            cin >> mobile;
        }else if(item == 2){
            cout << "You Ordered Dabeli - Kindly Pay Rs.30 :";
            cin >> price;
            cout << "Enter Your Name :";
            cin >> name;
            cout << "Enter Your Mobile :";
            cin >> mobile;
        }else if(item == 3){
            cout << "You Ordered Sandvich - Kindly Pay Rs.40 :";
            cin >> price;
            cout << "Enter Your Name :";
            cin >> name;
            cout << "Enter Your Mobile :";
            cin >> mobile;
        }else if(item == 4){
            cout << "You Ordered Pizza - Kindly Pay Rs.100 :";
            cin >> price;
            cout << "Enter Your Name :";
            cin >> name;
            cout << "Enter Your Mobile :";
            cin >> mobile;
        }else if(item == 5){
            cout << "You Ordered Burger - Kindly Pay Rs.45 :";
            cin >> price;
            cout << "Enter Your Name :";
            cin >> name;
            cout << "Enter Your Mobile :";
            cin >> mobile;
        }else{
            cout << "No Item Found\n";
        }

    }
    ~FoodZone(){    
        cout << "*******You Order Details*******"<< endl;
        if(item == 1){
            cout << "Name :  "<< name <<endl;
            cout << "Mobile No :  "<< mobile <<endl;
            cout << "Item Name :  Vadapav"<<endl;
            cout << "CGST 9% : " << (cgstamt = price * cgstper / 100)<<endl;
            cout << "SGST 9% : " << (sgstamt = price * sgstper / 100)<< endl;
            famount = price + cgstamt + sgstamt;
            cout << "Amount :  "<< famount <<endl;

        }else if(item == 2){
            cout << "Name :  "<< name <<endl;
            cout << "Mobile No :  "<< mobile <<endl;
            cout << "CGST 9% :" << (cgstamt = price * cgstper / 100)<<endl;
            cout << "SGST 9% :" << (sgstamt = price * sgstper / 100)<< endl;
            famount = price + cgstamt + sgstamt;
            cout << "Amount :  "<< famount <<endl;
        }else if(item == 3){
            cout << "Name :  "<< name <<endl;
            cout << "Mobile No :  "<< mobile <<endl;
            cout << "Item Name :  Sandvich"<<endl;
            cout << "CGST 9% :" << (cgstamt = price * cgstper / 100)<<endl;
            cout << "SGST 9% :" << (sgstamt = price * sgstper / 100)<< endl;
            famount = price + cgstamt + sgstamt;
            cout << "Amount :  "<< famount <<endl;
        }else if(item == 4){
            cout << "Name :  "<< name <<endl;
            cout << "Mobile No :  "<< mobile <<endl;
            cout << "Item Name :  Pizza"<<endl;
            cout << "CGST 9% :" << (cgstamt = price * cgstper / 100)<<endl;
            cout << "SGST 9% :" << (sgstamt = price * sgstper / 100)<< endl;
            famount = price + cgstamt + sgstamt;
            cout << "Amount :  "<< famount <<endl;
        }else if(item == 5){
            cout << "Name :  "<< name <<endl;
            cout << "Mobile No :  "<< mobile <<endl;
            cout << "Item Name :  Burger"<<endl;
            cout << "CGST 9% : " << (cgstamt = price * cgstper / 100)<<endl;
            cout << "SGST 9% : " << (sgstamt = price * sgstper / 100)<< endl;
            famount = price + cgstamt + sgstamt;
            cout << "Amount :  "<< famount <<endl;
        }
        cout << "*******Thank You For Order*******"<< endl;
    }

};

int main(){

    FoodZone f1;
    return 0;
}