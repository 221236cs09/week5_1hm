/* Write C++ program that prints the given N numbers of Fibonacci sequence. N should be taken
    from user. Use for loop. */

//ID: 221236
//Full Name: Islombek Abdurahmonov

//Write your code here
#include <iostream>  
using namespace std; 

int main() {
    int num1=0, num2=1;
    int num3, number;    
    cout<<"Enter number: ";    
    cin>>number;    
    
    for(int i=2; i<number; ++i){
        num3 = num1 + num2;    
        cout << num3 << " ";    
        num1 = num2;    
        num2 = num3;    
    }
    
    cout<<num1<<" "<<num2<<" ";
    
    return 0;
}