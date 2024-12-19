// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
 //table;
int a,b;
char opr;
cout<<"enter two numbers\n";
cin>>a>>b;
cout<<"enter operator:\n";
cin>>opr;
switch(opr)
{
    case '+':
    cout<<"addition is:\n"<<a<<"+"<<b<<"="<<a+b<<endl;
    break;
    case'-':
    cout<<"subtraction is:\n"<<a<<"-"<<b<<"-"<<a-b;
    break;
default:
    cout<<"invalid";
}


    return 0;
}