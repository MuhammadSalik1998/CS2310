//
//  main.cpp
//  lab10
//
//  Created by Muhammad Salik on 16/3/2022.
//
//
//#include <iostream>
//using namespace std;
//
//void findWord(char str[], int *ind, int *count){
//    int charNum=0; //to calculate number of words for that word
//    (*count)++; // whenever enter to this function, means one word ++.
//    
//    while(str[*ind]!=' ' && str[*ind] !='\0') {
//        charNum++;
//        (*ind)++;
//    }
//    cout<<"Word " <<*count<< " has " << charNum<< " characters." <<endl;
//}
//
//int main() {
//    char str[100];
//    int ind=0, count=0; //ind to go through the entire string and count to cal # of words in a sentence.
//    
//    cout << "Enter the content of the string:"<<endl;
//    cin.getline(str,100);
//    long int len = strlen(str);
//    
//    while(ind<len){
//        if (str[ind] != ' ') {
//            findWord(str, &ind, &count);
//        }
//        ind++;
//    }
//    cout<<"The number of words in the string is: " <<count<<endl;
//    return 0;
//}
