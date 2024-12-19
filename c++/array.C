
#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"enter elements:\n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<ends;
    }
    cout<<endl;
    //to print in reverse orde
    for(int i=4;i>=0;i--){
        cout<<a[i]<<ends;
    }
    return 0;
}