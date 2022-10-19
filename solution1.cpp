/*Write C++ program that allows to take user input five times and calculate the sum of the
numbers user has entered. Use while loop.*/

//ID: 221236
//Full Name: Islombek Abdurahmonov

//Write your code here
#include <iostream>
using namespace std;

int main(){
    float sum = 0, n;
    int i = 0;
    while(i<5){
        cout << "Enter number: ";
        cin >> n;
        sum = sum + n;
        i++;
    }
    
    cout << "Sum is " << sum << endl;
    
    return 0;
}