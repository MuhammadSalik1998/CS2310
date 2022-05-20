#include <iostream>
using namespace std;

int main(){
    double a,b,c,d,sum,max,min;
    double median;
    cout<<"Enter 4 integer values:"<<endl;
    cin>>a>>b>>c>>d;
    sum = a+b+c+d;


    if((a>b && a>c && a>d)){
        max = a;
    }
    else if ((b>a && b>c && b>d)){
        max = b;
    }
    else if ((c>a && c>b && c>d)){
        max = c;
    }
    else if ((d>a && d>c && d>b)){
        max = d;
    }

    if((a<b && a<c && a<d)){
        min = a;
    }
    else if ((b<a && b<c && b<d)){
        min = b;
    }
    else if ((c<a && c<b && c<d)){
        min = c;
    }
    else if ((d<a && d<c && d<b)){
        min = d;
    }

    median = (sum - (max+min))/2;
    cout<<"The median of 4 values is: "<<median<<endl;
}