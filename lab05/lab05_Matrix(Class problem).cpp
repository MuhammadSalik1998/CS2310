#include <iostream>
using namespace std;

int main (){

    int len;
    cout<<"Enter the lenght:"<<endl;
    cin>>len;

    for(int i=1; i<=len; i++){
        for(int j=1; j<=i;j++){
            if (i==j){
                cout<<"x";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}