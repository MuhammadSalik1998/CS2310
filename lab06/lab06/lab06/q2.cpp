/*
#include <iostream>
using namespace std;

int main(){
    int size = 6;
    int array [size];
    
    //Entering the elements for the array
    cout<<"Enter the element in the array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    
    //Sorting
    for(int i=0; i<size; i++){ //from start till end
        int j = i+1; //swapping uncertain, so while loop. Will start from i+1 until inorder.
        while(j>0){
            if(array[j-1] > array[j]){
                int temp;
                temp = array[j-1];
                array[j-1] = array[j];
                array[j]=temp;
            }
            else{
                break;
            }
            j--; from i+1, until start and inorder.
        }
    }
    //Printing the array
    cout<<"The sorted array is: "<<endl;
    for(int i=0; i<size-1; i++){
        cout<<array[i]<< ", ";
    }
    cout<<array[6-1]<<endl;
}
*/

/*  Bubble Sort array lecture
#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n];
    
    cout<<"Enter the elements in the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(arr[j-1]>arr[j]){
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    cout<<"Sorted array is: ";
    
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}
*/
