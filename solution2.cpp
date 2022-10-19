/* Write C++ program to print EVEN values from 0 to N using a for loop. N should be a user
    input. */

//ID: 221236
//Full Name: Islombek Abdurahmonov

//Write your code here
#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter a number: ";
    cin >> N;

    for(int i=0; i<N; i++){
        if(i % 2 == 0){
            cout << i;
        }else{
            cout << " " << endl;;
        }
    }
    
    return 0;
}