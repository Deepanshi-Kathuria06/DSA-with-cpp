// Variable are the container to store the data 

#include<iostream>
using namespace std;

int main(){
    
    int age = 18;

    string name = "Hello";

    char grade = 'A';

    float pi = 3.14;

    bool issafe = true;


    cout<<age<<endl;
     cout<<name<<endl;
     cout<<grade<<endl;
    cout<<pi<<endl;
    cout<<issafe<<endl;


    // typecasting in cpp change one datatype to other 

    double price = 1000.0;


    int newprice = (int)price;

    cout<<newprice <<endl;


     return 0;
    
    
}