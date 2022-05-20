//
//  q1.cpp
//  lab07
//
//  Created by Muhammad Salik on 20/1/2022.
//
// did with two method. 2 is the best.
//#include <iostream>
//using namespace std;

//void print20to99(int num){
//    if (num>=20 &&num<=99) {
//
//        int num1 = num/10;
//        int num2 = num%10;
//
//        switch (num1) {
//            case 2:
//              cout << "Twenty ";
//              break;
//            case 3:
//              cout << "Thirty ";
//              break;
//            case 4:
//              cout << "Forty ";
//              break;
//            case 5:
//              cout << "Fifty ";
//              break;
//            case 6:
//              cout << "Sixty ";
//              break;
//            case 7:
//              cout << "Seventy ";
//              break;
//            case 8:
//              cout << "Eighty ";
//              break;
//            case 9:
//              cout << "Ninty ";
//              break;
//        }
//        switch (num2) {
//            case 0:
//              break;
//            case 1:
//              cout << "One";
//              break;
//            case 2:
//              cout << "Two";
//              break;
//            case 3:
//              cout << "Three";
//              break;
//            case 4:
//              cout << "Four";
//              break;
//            case 5:
//              cout << "Five";
//              break;
//            case 6:
//              cout << "Six";
//              break;
//            case 7:
//              cout << "Seven";
//              break;
//            case 8:
//              cout << "Eight";
//              break;
//            case 9:
//              cout << "Nine";
//              break;
//        }
//    }
//}

// 2nd METHOD
//void print20to99(int num){
//
//    int num1 = num/10; //55 so 5
//    int num2 = num%10; //68 so 8
//
//    string stringTens [9] = {"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninty"};
//    string stringOnes [10] = {"" ,"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//
//    string digit1 = stringTens[num1-2];
//    string digit2 = stringOnes[num2];
//
//    cout<<digit1 << " " <<digit2<<endl;
//
//}
//
//int main(){
//    int num;
//    cout<<"Enter the integer number: ";
//    cin>>num;
//    print20to99(num);
//}
