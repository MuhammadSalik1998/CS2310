////
////  lab05 q4 rev.cpp
////  Assignment 1
////
////  Created by Muhammad Salik on 15/5/2022.
////
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int num, stars = 1;
//    
//    cout<<"Enter the diagonal length: "<<endl;
//    do {
//        cin>>num;
//        if (num<1 ||num%2==0) {
//            cout<<"Please enter an odd positive number!" <<endl;
//        }
//    } while (num<1 || num%2==0);
//    
//    int x = (num/2)+1; //(5/2)+1=3, (7/2)+1=4...
//    int space = x-1;
//    //tree top
//    for (int i=0; i<x; i++) { //Row. e.g. if num 5, so 3 times, if 7 so 4. times loop run dep on x.
//        
//        //space
//        for (int i=1; i<=space; i++) { //space in the start is 1-x, so decrease by 1 every time start prints.
//            cout<<" "; //so for 5, start space is 2, which is x-1, and for next star its 1, so i.e space-=1,
//        }
//        space -=1;
//        
//        //stars
//        for (int j=0; j<stars; j++) { //everytime time stars inc by 2, if num 5, so
//            cout<<"*"; //loop will run 3 times, 1--1star; +2, newLine; 2--3stars;+2, NL; 3--5stars,loop ends,
//                    // +2stars, NL.
//        }
//        stars +=2;
//        cout<<endl;
//    }
//    
//    //treeBottom
//    stars=num-2;
//    space = 1;
//
//    for (int i=0; i<x-1; i++) { //down part is 1-x always.
//        
//        //spaces
//        for (int i=1; i<=space; i++) { //space in the start is 1, and inc by 1 every time start prints.
//            cout<<" ";
//        }
//        space +=1;
//        
//        //stars
//        for (int j =0; j<stars; j++) { //stars for bottom is dec 2, if num 5, so 3, then 1...
//            cout<<"*";
//        }
//        stars -=2;
//        cout<<endl;
//    }
//}
