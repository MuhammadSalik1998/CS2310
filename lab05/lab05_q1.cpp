#include<iostream>
using namespace std;

int main(){
    int num1,num2,sum;
    cout<<"All output numbers are: "<<endl;
    for (int i= 1000; i<10000; i++){
        num1 = i%100;
        num2 = i/100;
        sum =num1+num2;
        if((sum*sum)==i) {
            cout<<i<<endl;;
        }
    }
}