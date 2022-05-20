#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the value of A, B and C: "<<endl;
    cin>>a>>b>>c;

    if (a<0 || b<0 || c<0){
        cout<<"Impossible";
    }
    else if ((a+b<c)||(a+c<b)||(b+c<a)){
        cout<<"Impossible";
    }
    else if ((a==b) && (a==c) && (b==c)){
        cout<<"Equilateral";
    }
    else if ((a==b) || (c==b) || (a==c) ){
        cout<<"Isosceles";
    }
    else if ((a!=b) && (a!=c) && (b!=c)){
        cout<<"Scalene";
    }
}