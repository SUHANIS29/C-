#include<iostream>
using namespace std;
namespace one{void surname(){
cout<<"suryawanshi";
}}
namespace two{
  void surname(){
    cout<<"suhani";
  }
}
int main(){
  
  one::surname();
  two::surname();
  return 0;
}