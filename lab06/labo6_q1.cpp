#include <iostream>
using namespace std;

int main(){

    int arr_in[20];
    int arr_out[20];
    int size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr_in[i];
    }
    int max;
    for(int i =0; i<size; i++){
        for (int j=i+1; j<size; j++){
            if (arr_in[j] < arr_in[i]){
                if(arr_in[j] > max){
                    max = arr_in[j];
                }
            }
        }
        arr_out[i]=max;
    }

    for (int i=0; i<size; i++){
        cout<<arr_out[i]<<endl;
    }
}
