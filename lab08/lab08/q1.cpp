//
//  q1.cpp
//  lab08
//
//  Created by Muhammad Salik on 17/2/2022.
//
//
//#include <iostream>
//using namespace std;
//
//void getNameAndId(char arr[]){
//    int index = strlen(arr)-1; //to start from last index as SID length is known than name which can be many
//    
//    while (arr[index] != ' '){ //to get index from SID end until first space i.e, SID start
//        index --;
//    }
//    cout<<"Student name is: "; //from index 0 until index (i.e., last space then SID will begin
//    for (int i=0; i<index; i++) {
//        cout<<arr[i];
//    }
//    cout<<endl;
//    
//    cout<<"Student ID is: "; //from index+1 as index is space. until \0 because here array ends.
//    for (int i = index+1; arr[i]!='\0'; i++) {
//        cout<<arr[i];
//    }
//    cout<<endl;
//}
//
//int main(){
//    char arr[50];
//    
//    cout<<"Enter the student info: "<<endl;
//    cin.getline(arr, 50);
//    getNameAndId(arr);
//    return 0;
//}
