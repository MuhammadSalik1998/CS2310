////
////  q1 (simple).cpp
////  Assignment 1
////
////  Created by Muhammad Salik on 11/5/2022.
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
//
//    if (num<10) {
//        cout<<"The digital root is: "<<num<<endl;
//    }
//    else {
//        //if num is >10, run the while loop
//        int length, counter=0;
//        while (num>=10) {
//            //calculate the length
//            length = num;
//            while(length!=0){
//                length = length /10;
//                counter++;
//            }
//            int sum=0,j=1,k;
//            for (int i=1; i<=counter; i++) {
//                //e.g. num = 8943, k=((8943%10)/1) = 3 ... 9 and sum will generate.
//                k = (num%(j*10))/j;
//                j*=10;
//                sum+=k;
//            }
//            //if sum >10, loop will execute again
//            num=sum;
//        }
//        cout<<"The digital root is: "<<num<<endl;
//    }
//    return 0;
//}
