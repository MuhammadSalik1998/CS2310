////
////  q2.cpp
////  lab07
////
////  Created by Muhammad Salik on 29/1/2022.
////
////
//#include <iostream>
//using namespace std;
//
//int gcd (int n1, int n2);
//int lcm (int n1, int n2);
//
//int main(){
//    int n1,n2;
//    cout<<"Enter the two integers: ";
//    cin>>n1;
//    cin>>n2;
//    
//    int result1 = gcd(n1,n2);
//    cout <<"The GCD of "<< n1 <<" and "<< n2 <<" is: "<<result1<< endl;
//    
//    int result2 = lcm(n1, n2);
//    cout <<"The LCM of "<< n1 <<" and "<< n2 <<" is: "<<result2<< endl;
//    
//    return 0;
//}
//
//int gcd(int n1, int n2){
//    
//    if (n1 == 0)
//    {
//        return n2;
//    }
//    else if (n2 == 0)
//    {
//        return n1;
//    }
//    else {
//        return gcd(n2, n1%n2);
//    }
//}
//
//int lcm (int n1, int n2) {
//    int n;
//    n = (n1*n2) / gcd(n1,n2);
//    return n;
//}
