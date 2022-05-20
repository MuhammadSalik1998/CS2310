////
////  q2.cpp
////  lab08
////
////  Created by Muhammad Salik on 17/2/2022.
////
//#include <iostream>
//using namespace std;
//
//int findChar(char str[], char pat[]){
//
//    long int len1 = strlen(str);
//    long int len2 = strlen(pat);
//
//    int pos= -1;
//
//    for (int i =0; i<len1; i++) { //outer loop to check each letter of the work
//        int count = 0; //to check pat==count
//        for (int j=0; j<len2; j++) { //inner loop to check pat and work
//            if (str[i+j]==pat[j]) {
//                count++;
//            }
//            else break; //if first word != so exit
//        }
//        if (count == len2){ //if count == len2, then that i will be return
//            pos = i;
//        }
//    }
//    return pos;
//}
//
//int main(){
//    char str[50], pat[50];
//
//    cout<<"The word and chars are: ";
//    cin>>str>>pat;
//    cout<<"The last position of " << pat <<  " is: "<<findChar(str, pat) <<endl;
//
//}
