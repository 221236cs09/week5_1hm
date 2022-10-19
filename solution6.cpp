/* Write C++ program that finds the number and the sum of all integers between 450 and 500
    which are divisible by 8. Use while loop. */

//ID: 221236
//Full Name: Islombek Abdurahmonov

//Write your code here
#include <iostream>
using namespace std;

int main() {
    int num1=450, num2=500, sum=0, count=0;
    
    cout << "The numbers are: \n";
    while(num1 <= num2){
        if(num1%8==0){
            cout << " " << num1;
            count ++;
            sum = sum+num1;
        }
        num1 ++;
    }
    
    cout << "\nNumber of integers divisible by 8 is " << count << endl;
    cout << "Sum of integers divisible by 8 is " << sum << endl;
    
    return 0;
}


