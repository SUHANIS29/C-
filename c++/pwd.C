// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
  int mypwd=1234;
  int pwd;
  cout<<"enter your password:\n";
  cin>>pwd;
  while(pwd>0){
      if(pwd!=mypwd){
          cout<<"enter again";
          cin>>pwd;
      }
      else{
          cout<<"unlocked";
          break;
      }
  }
    return 0;
}