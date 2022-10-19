/* Write C++ program that takes the integer number from user and calculates factorial of the
    given number. */

//ID: 221236
//Full Name: Islombek Abdurahmonov

//Write your code here
#include <iostream>
using namespace std;

int main(){
    int num, facto=1;
    cout << "Enter a number: ";
    cin >> num;
    
    if(num<0){
        cout << "Please enter a positive number!\n";
    }else if(num==0){
        cout << "Factorial of 0 equals to 1";
    }else{
        for(int i=1; i<=num; i++){
            facto = i*facto;
        }
        cout << "Factorial of " << num << " equals to " << facto << endl;
    }
    
    return 0;
}