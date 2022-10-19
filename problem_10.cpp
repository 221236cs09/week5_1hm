/* Write C++ program to compute any power of any number given by user. */

//ID: 221236
//Full Name: Islombek Abdurahmonov

//Write your code here
#include <iostream>
using namespace std;

int main() {
    int power, base, result = 1;
    cin >> base >> power;
    
    cout <<"The number "<< base <<" in the power of " << power <<" is equal to ";
    while (power != 0) {
        result *= base;
        --power;
    }
    
    cout << result;
    
    return 0;
}