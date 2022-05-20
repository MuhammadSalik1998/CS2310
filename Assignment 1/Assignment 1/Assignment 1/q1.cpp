////
////  q1.cpp
////  Assignment 1
////
////  Created by Muhammad Salik on 10/5/2022.
////
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int num;
//    do {
//        cout<<"Please input a positive number: ";
//        cin>>num;
//        if (num<0) {
//            cout<<"Invalid input!" <<endl;
//        }
//    } while (num<0);
////method 1.. if %9==0; then the DR is 9 else num%9 is DR.
////    if (num%9==0) {
////        cout<<"The digital root is: 9"<<endl;
////        //break;
////    }
////    else{
////       cout<<"The digital root is: "<<num%9<<endl;
////    }
////Method 2:
////    int count=0, sum=0, length;
////    length=num;
////    while(length!=0){
////        length = length/10;
////        count++;
////    }
////    do {
////        if (num<10) { //987
////            cout<<"The digital root is: "<<num<<endl;
////        }
////        else{
////            while (num>0) {
////                for (int i=0; i<count; i++) {
////                    sum += num%10;
////                    num= num/10;
////                }
////                num=sum;
////            }
////
////            cout<<"The digital root is: "<<sum<<endl;
////        }
////    } while (num<10);
//
////Method 3:
//    if (num<10) {
//        cout<<"The digital root is: "<<num<<endl;
//    }
//    while (num>10) {
//        int sum=0;
//        while (num>10) {
//            sum +=num%10;
//            num /=num;
//        }
//        num=sum;
//    }
////    cout<<"The digital root is: "<<num<<endl;
//
//}
