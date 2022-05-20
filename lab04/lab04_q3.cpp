#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c,r,roots,roots2a,roots2b,root3,real,im;
    cout<<"Enter the value of a, b and c for quadratic equation: "<<endl;
    cin>>a>>b>>c;

    r = (b*b)-(4*a*c);

    if (r==0){
        roots=(-b)/(2*a);
        cout << fixed << setprecision(1);
        cout<<"The Quadratic Equation has two equal real roots: "<<roots<<endl;;
    }
    else if (r>0){
        roots2a= ((-b)+sqrt(r))/(2*a);
        roots2b= ((-b)-sqrt(r))/(2*a);
        cout << fixed << setprecision(1);
        cout<<"The Quadratic Equation has two real roots: " <<roots2a << " and " <<  roots2b;

    }
    else{
        real=(-b)/(2*a);
        im = (sqrt(-r))/(2*a);
        cout << fixed << setprecision(1);
        cout<<"The Quadratic Equation has two Complex roots: "<<endl;
        cout << real << '+' << im << "i" << endl;
        cout << real << '-' << im << 'i' << endl;

    }

}