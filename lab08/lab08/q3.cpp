////
////  q3.cpp
////  lab08
////
////  Created by Muhammad Salik on 9/3/2022.
////
//
//#include <iostream>
//using namespace std;
//
//void sortString(char str[]){ //to sort the string using bubble sort;
//    long int len = strlen(str);
//    int temp;
//    
//    for (long int i =0; i<len-1; i++) {
//        for (long int j=len-1; j>i; j--) {
//            if (str[j-1] > str[j]) {
//                temp = str[j-1];
//                str[j-1] = str[j];
//                str[j] = temp;
//            }
//        }
//    }
//}
//
//void mergeSort(char str1[], char str2[]){
//    
//    sortString(str1);
//    sortString(str2);
//    
//    long int len1 = strlen(str1);
//    long int len2 = strlen(str2);
//
//    cout<<"Merged string: " <<endl; //remove endl;
//    int i=0, j=0;
//    while (i<len1 || j<len2) {
//        if (i>=len1) {
//            cout<< str2[j];
//            j++;
//        }
//        else if (j>=len2){
//            cout<<str1[i];
//            i++;
//        }
//        else{
//            if (str1[i]<str2[j]) {
//                cout<<str1[i];
//                i++;
//            }
//            else{ //(str2[j]<str1[i])
//                cout<<str2[j];
//                j++;
//            }
//        }
//    }
//    cout<<endl;
//
//}
//
//
//int main(){
//    char str1[50];
//    char str2[50];
//    
//    cout<<"Input String 1: ";
//    cin>>str1;
//    
//    cout<<"Input String 2: ";
//    cin>>str2;
//    
//    mergeSort(str1,str2);
//    
//    return 0;
//}
