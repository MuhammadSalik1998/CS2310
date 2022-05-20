// to print sum and marks program 1/5
#include <iostream>
#include <string>
using namespace std; 

int main(){
    int mark[10];
    
    cout<<"Input marks for the 10 students"<<endl;
    
    for(int i=0;i<10;i++){
        cin>>mark[i];
        }
        
    cout<<"The marks for the 10 students and their sum is: "<<endl;
    
    int sum=0;
    for(int i=0;i<10;i++){
        cout<<"Student " << i+1 <<" marks are " <<mark[i]<<endl;
        sum+=mark[i];
        }
    
    cout<<"The sum of the students' marks are: " <<sum<<endl;
    
    }
/*
// to count the occurence of the digits entered. 2/5
// Example program
#include <iostream>
#include <string>
using namespace std; 

int main(){
    int count[10];
    int digit;
    
    //to initialize the array elements to 0;
    for(int i=0; i<10; i++){
        count[i]=0;
        }
    //input digit and if lies b/w 1-10, record the occurence;
    do{
        cin>>digit;
        if(digit>=0 && digit<=10){
            count[digit]++;
            }
        }while(digit!=-1); //terminate on -1;
    
    //to print the array
    
    for(int i=0; i<10; i++){
        cout<<"Digit "<<i<<" occurence is "<<count[i] << " times!"<<endl;
        }
    
    }
*/

/*

// equal arrays program 3/5
#include <iostream>
#include <string>
using namespace std; 

int main(){
    int array1[5]={1,2,4,5,7};
    int array2[5];
    
    //print Array1
    for(int i=0; i<5; i++){
        cout<<array1[i];
        }
        
    //Input array2
    for(int i=0; i<5; i++){
        cin>>array2[i];
        }
    //Compare and print equal or not
    bool isEqual=true;
    
    for(int i=0; i<5; i++){
        if(array1[i]!=array2[i]){
            isEqual=false;  //we compared if not equal instead checking every element is equal, which is difficult to implement
            break;
            }
        }
    if(isEqual){
        cout<<"Array is equal";
        }
    else
        cout<<"Not equal!";
    }
*/

/*

// array search program  4/5
#include <iostream>
#include <string>
using namespace std; 

int main(){
     //Input array elements and store
     int const n=6;
     int target,position=-1;
     int num[n];
     
     for(int i=0; i<n; i++){
         cin>>num[i];
        }
    //Input the target number
    cout<<"Enter the targeted number to search: "<<endl;
    cin>>target;
    
     //Search the target number in the array and prints its index number else print -1
    for(int i=0; i<n; i++){
         if(num[i]==target){
             position =i;
             break;
             }
         }
    if(position == -1){
        cout<<"Number not found, so position is " <<position<<endl;
        }
    else
        cout<<"The target number " <<target<< " is at position " <<position<<endl;
     
    }
*/

