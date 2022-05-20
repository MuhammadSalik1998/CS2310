#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the diagonal length:"<<endl;
    cin>>n;
    
    int star=1;
    int x = (n/2)+1;
    int space = n/2;
    
    for (int i=0; i<x; i++) {
        for (int k =0; k<space; k++) {
            cout<<" ";
        }
        space -=1;
        
        for(int j=0; j<star; j++) {
            cout<<"*";
        }
        star +=2;
        cout<<endl;
    }
    star = n-2;
    space=1;
    for (int i=0; i<x-1; i++) {
        for (int k =0; k<space; k++) {
            cout<<" ";
        }
        space +=1;
        for(int j=0; j<star; j++) {
            cout<<"*";
        }
        star -=2;
        cout<<endl;
    }
    
    return 0;
}

