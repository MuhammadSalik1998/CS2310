#include <iostream>
using namespace std;

int main1(){

    cout<<"Enter the input positive number: "<<endl;
    int num; //input from the user
    int p=2; //prime number initialized from 2
    cin>>num;
    
    cout<<"The prime factorization of " <<num<< " is: ";
    
    //code to check prime number and do factorization
    while(num!=p){  //e.g. num=68 and p=2; (68!=2)--> T so loop works;
        if(num%p==0){ // checking that num is divisible by prime number (p) //main if
            num=num/p; // reducing that number
            cout<<p<<" "; //printing p
        }
        else {      // else, the p is no longer divisible then seeing other prime number
            p++;    // incrementing the prime number from, e.g. 2 to 3
            int div=2; //division is to check the prime number
            while(div!=p){ //loop will run until div is not equals to p, as prime number
                if(p%div ==0) //if p is divisible by div, then it is not a prime number, and
                    break;    //if p is divisble then loop will break and will check "main if" and then will come to else
                else          // ...and then loop will increment the division to check the prime number
                    div++;
            }
        }
    }
    cout<<p<<endl;
}
