////
////  q2.cpp
////  lab10
////
////  Created by Muhammad Salik on 16/3/2022.
////
//
//#include <iostream>
//using namespace std;
//
//int stringCompare(char s1[], char s2[]){
//    long int len1 = strlen(s1);
//    long int len2 = strlen(s2);
//
//    int i=0;
//    while (i<len1 || i<len2) {
//        if (i>=len1 && i<len2) { //e.g. i is 4 len1 =4, len2= 5; len1 is shorter as i reached to the end of it.
//            return -1;
//        }
//        else if(i<=len1 && i>=len2){ //e.g. i is 4  and len1 =5, len2= 4; len2 is shorter as i reached to the end of it.
//            return 1;
//        }
//        else{ //general case
//            if (s1[i] < s2[i]) {
//                return -1;
//            } else if (s1[i]>s2[i]){
//                return 1;
//            }
//            else{
//                i++;
//            }
//        }
//    }
//    return 0;
//}
//
//int main(){
//    char s1[20],s2[20];
//    cout<<"Enter the first string:"<<endl;
//    cin>>s1;
//    
//    cout<<"Enter the second string:"<<endl;
//    cin>>s2;
//    
//    int res = stringCompare(s1, s2);
//    
//    switch (res) {
//        case 1:
//            cout<<"The first string is larger."<<endl;
//            break;
//        case -1:
//            cout<<"The second string is larger."<<endl;
//            break;
//        case 0:
//            cout<<"The two strings are equal."<<endl;
//            break;
//    }
//    
//    return 0;
//}
