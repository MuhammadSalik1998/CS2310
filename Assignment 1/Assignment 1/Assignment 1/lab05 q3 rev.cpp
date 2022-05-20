////
////  lab05 q3 rev.cpp
////  Assignment 1
////
////  Created by Muhammad Salik on 15/5/2022.
////
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int num, p=2;
//    cout<<"Enter the input positive number: ";
//    cin>>num;
//    cout<<"The prime factorization of "<< num<< " is: "<<endl;
//    
//    if (num == 1) {
//        cout<<num<<endl;
//    }
//    else{
//        while(num!=p){
//            if (num%p==0) { // main if
//                num = num /p;
//                cout<< p << " ";
//            }
//            else {
//                p++;
//                //to check p is prime or not
//                int div = 2; //e.g. p=4, if not prime new p would be found and lop would end and go to main if,
//                while (p!=div) {
//                    if (p%div == 0) {
//                        break;
//                    }
//                    else{
//                        div++;
//                    }
//                }
//            }
//        }
//        cout<< p <<endl; // this p becasue for last one num!=p so loop would end.
//    }
//}
