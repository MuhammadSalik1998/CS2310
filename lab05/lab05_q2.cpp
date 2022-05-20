#include <iostream>
using namespace std;

int main (){
    char ch;
    int cntUp=0,cntLow=0,cntPlus=0,cntMin=0,cntProduct=0,cntDiv=0;
    cout<<"Enter the input chars: ";
    do
    {
        cin>>ch;

        if ('A'<=ch && ch<='Z'){
            cntUp++;
        }
        else if ('a'<=ch && ch<='z'){
            cntLow++;
        }
        else if(ch=='+'){
            cntPlus++;
        }
        else if (ch=='-'){
            cntMin++;
        }
        else if (ch=='*'){
            cntProduct++;
        }
        else if (ch=='/'){
            cntDiv++;
        }

    } while (ch!='0');

    if(cntUp==0 && cntLow==0 && cntPlus==0 && cntMin==0 && cntProduct==0 && cntDiv==0){
        cout<<"Cannot find any chars"<<endl;
    }
    else{
        if (cntUp>0){
            cout<<"The number of uppercase letters is: " <<cntUp<<endl;
        } 
        if (cntLow>0){ 
            cout<<"The number of lowercase letters is: " <<cntLow<<endl;
        }
        if (cntPlus){
            cout<<"The number of + is: " <<cntPlus<<endl;
        }
        if (cntMin){
            cout<<"The number of - is: " <<cntMin<<endl;
        }
        if (cntProduct){
            cout<<"The number of * is: " <<cntProduct<<endl;
        }
        if (cntDiv>0){
            cout<<"The number of / is: " <<cntDiv<<endl;
        }
    }
}