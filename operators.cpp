// arithmetic operator ( + , * , - , / )
#include <iostream>
using namespace std;

int main(){
    int  a = 10;
    int b = 2;
   
   cout<< "add = "<<(a+b)<<endl;
   cout<< "sub = "<<(a-b)<<endl;
   cout<< "mul = "<<(a*b)<<endl;
   cout<< "div = "<<(a/b)<<endl;
   cout<< "modulo = "<<(a%b)<<endl;

    //  RELATIONAL OPERATORS (>=, <= ,< , > )
    // = (assignment op,) , ==(equals op)

     cout<< "greater than = "<<(a>b)<<endl;
     cout<< "less than = "<<(a<b)<<endl;
     cout<< "greater than equal to = "<<(a>=b)<<endl;
     cout<< "less than equal to = "<<(a<=b)<<endl;
     cout<< "equals = "<<(a==b)<<endl;
     cout<< "not equal to = "<<(a!=b)<<endl;

    //  LOGICAL OPERATOR (OR  || , NOT ! , AND &&)
    
    cout<< "or = "<< ((3>4) || (5<1)) <<endl;
    cout<< "and = "<<(a && b)<<endl;
    cout<< "not = "<<(!b)<<endl; // if false than true if true than make false

 return 0;
}
