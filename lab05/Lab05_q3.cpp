#include <iostream>
using namespace std;

int main (){

    cout<<"Enter the input positive number: "<<endl;
    int num;
    double cNum;
    int p=2;

    cin>>num>>endl;

    while(num==p){
        if(num%p==0){
            num=num/p;
            cout<<p;
        }
    }
    cout<<p;
  
}