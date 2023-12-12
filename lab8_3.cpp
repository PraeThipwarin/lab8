#include<iostream>
using namespace std;

int main(){
double age,heig,bout;
cout << "Enter your age: ";
cin >> age;
if(age > 0 && age <= 25){
    cout << "Enter your height: ";
    cin >> heig;
    if (heig < 100 && heig > 0){
        cout << "Your character = Chopper";
    }else if (heig < 180 && heig >= 100){
        cout << "Your character = Usopp";
    }else if (heig >= 180){
            cout << "Enter your bounty: ";
            cin >> bout;
            if (bout > 1100000000)
                cout << "Your character = Zoro";
            else
                cout << "Your character = Sanji";
    }else{
        cout << "error";
    }
}else if (age > 25 && age <= 60){
    cout << "Enter your bounty: ";
    cin >> bout;
    if (bout > 500000000)
        cout << "Your character = Jinbe";
    else
        cout << "Your character = Franky";
}else
    cout << "Your character = Brook";
}