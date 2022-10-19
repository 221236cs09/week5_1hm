/* Write C++ program to print English language alphabet from A to Z. Use while loop. */

//ID: 221236
//Full Name: Islombek Abdurahmonov

//Write your code here
#include <iostream>
using namespace std;

int main() {
    char alph = 'A';
    
    cout << "English language alphabet: \n";
    while(alph <= 'Z'){
        cout << alph << " ";
        alph ++;
    }
    return 0;
}