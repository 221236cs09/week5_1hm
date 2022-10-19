/* Write a program in C++ to compute the sum of the digits of an integer and find the average
    of them. */

//ID: 221236
//Full Name: Islombek Abdurahmonov

//Write your code here
#include <iostream>
using namespace std;

int main() {
    int nums, sum=0, count=0;
    float total=0;
    
    while(nums != 0){
        cin >> nums;
        sum = sum + nums;
        count ++;
    }
    total = sum/count;
    
    cout << "Average " << total << endl;
    
    return 0;
}

