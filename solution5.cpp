/* Write C++ program to print the following triangle of numbers (see example below) where the
height depends on user input. In case 0 is entered, print that depth is 0. Use for loop. */

//ID: 221236
//Full Name: Islombek Abdurahmonov

//Write your code here
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if(number == 0){
        cout << "The depth is 0";
    }else{
        for(int i=number; i>=0; i--){
            for(int j=0; j<i; j++){
                cout << i << endl;
            }
            cout << endl;
        }
    }
    
    return 0;
}


