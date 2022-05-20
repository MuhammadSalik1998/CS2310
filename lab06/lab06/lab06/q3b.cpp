//
//  q3b.cpp
//  lab06
//
//  Created by Muhammad Salik on 20/1/2022.
// MOST IMP
#include <iostream>
using namespace std;

int main(){
    //to record the occurrence of the sum i+j e.g. 0+0, 0+1...5+5
    int pos[11] = {0};
    for (int i=0; i<6; i++){
        for (int j=0; j<6; j++) {
            pos[i+j]++;
        }
    }
    
    //to declare 2D array
    int sum[11][2];
    for (int i=0; i<11; i++) {
        sum[i][0] = pos[i]; //coulmn 1 showing occurence
        sum[i][1] = i+1; //coulmn 2 showing value of the sum like 2,3...12.
    }
    
    //sorting the occurrence
    int temp[2]; // since 2 variables occurrence and sum digit would be chandes
    for (int i=0; i<11-1; i++) { //inner loop, for bubble sort passes -1;
        for (int j=11-1; j>i; j--) { //outer loop will start from last index hence size -1 (initial value)
            if (sum[j-1] [0] >sum[j] [0]) {
                for (int i=0; i<2; i++) {
                    temp[i] = sum [j-1] [i];
                    sum [j-1] [i] = sum [j] [i];
                    sum [j] [i] = temp[i];
                }
            }
        }
    }
    
    //printing the 2D array
    for (int i=0; i<11; i++) {
        cout<<sum[i][0] << " occurrence(s) of the sum " << sum[i][1] << endl;
    }
}

