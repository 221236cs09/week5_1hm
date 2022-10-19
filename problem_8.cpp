/* Write C++ program that takes integers from user input and calculates their sum. Stop when
    user enters 0. Use while loop. */

//ID: 221236
//Full Name: Islombek Abdurahmonov

//Write your code here
#include <iostream>
using namespace std;

int main() {
    int num, sum=0;
    
    while(num != 0){
        cin >> num;
        sum += num;
    }
    
    cout << "Sum is equal to " << sum << endl;
    
    return 0;
}