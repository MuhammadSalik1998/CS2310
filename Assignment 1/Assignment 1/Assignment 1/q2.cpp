//
//  q2.cpp
//  Assignment 1
//
//  Created by Muhammad Salik on 17/5/2022.
//

#include <iostream>
using namespace std;

int main(){
    int S;
    char D; //if 'u' || 'U', else if 'r' || 'R'
    
    cout<<"Please input the width of the treetop: "<<endl;
    do {
        cin>>S;
        if (S<5 || (S%2==0)) {
            cout<<"Invalid input!"<<endl;
            cout<<"Please input the width of the treetop: "<<endl;
        }
    } while (S<5 || (S%2==0));
    cout<<"Please input the direction: "<<endl;
    cin>>D;
    
    if (D == 'u' || D == 'U') {
        
        int w = S-1;
        int space=w-1, stars=1;
        
        //treetop
        //row
        for (int i =0; i<w; i++) {
            //space
            for (int j=0; j<space; j++) {
                cout<<" ";
            }
            space -=1;
            //stars
            for (int k=0; k<stars; k++) {
                cout<<"*";
            }
            stars +=2;
            cout<<endl;
        }
        
        //trunk
        int width = S-4, h = (S/2)+1;
        
        if (width==1) {
            //space
            for (int i =0; i<h ; i++) {
                for (int j=0; j<h; j++) {
                    cout<<" ";
                }
                cout<<"*";
                cout<<endl;
            }

            }
        else{
            for (int i=0; i<h ; i++) { //first spaces would be printed which is till h for every case
                //space
                for (int j=0; j<h; j++) {
                    cout<<" ";
                }
                //stars for trunk - first and last most print. stars would print for width.
                for (int k=1; k<=width; k++){ //stars for left and right most column only.
                    if (k==1) { //leftmost
                        cout<<"*";
                    }
                    else if (k==width) { //rightmost
                        cout<<"*";
                    }
                    else {
                        cout<<" ";
                    }
                }
                cout<<endl;
            }

        }
    }
    else if (D == 'r' || D == 'R'){
        //TODO:
    }
}
