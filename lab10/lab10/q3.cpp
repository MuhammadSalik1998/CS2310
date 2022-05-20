//
//  q3.cpp
//  lab10
//
//  Created by Muhammad Salik on 17/3/2022.
//

#include <iostream>
using namespace std;

int stringCompare(char s1[], char s2[]){
    long int len1 = strlen(s1);
    long int len2 = strlen(s2);

    int i=0;
    while (i<len1 || i<len2) {
        if (i>=len1 && i<len2) { //e.g. i is 4 len1 =4, len2= 5; len1 is shorter as i reached to the end of it.
            return -1;
        }
        else if(i<=len1 && i>=len2){ //e.g. i is 4  and len1 =5, len2= 4; len2 is shorter as i reached to the end of it.
            return 1;
        }
        else{ //general case
            if (s1[i] < s2[i]) {
                return -1;
            } else if (s1[i]>s2[i]){
                return 1;
            }
            else{
                i++;
            }
        }
    }
    return 0;
}

void sortStrings(char strArr[][20], int n) {
    
}

int main(){
    char strArr[20][20];
    int n;
    
    cout<<"Enter the number of the strings: "<<endl;
    cin>>n;
    
    cout<<"Enter the contents of each string:"<<endl;
    for (int i=0; i<n; i++) {
        cin>>strArr[i];
    }
    
    sortStrings(strArr, n);
    cout<<"The sorted strings are:"<<endl;
    for (int i=0; i<n; i++) {
        cin>>strArr[i];
    }
    return 0;
}
