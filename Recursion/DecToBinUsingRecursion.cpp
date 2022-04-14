/*Write a program in C to convert a decimal number to binary using recursion. Go to the editor
Test Data : 
Input any decimal number : 66 
Expected Output :

The Binary value of decimal no. 66 is : 1000010    
*/

#include<iostream>
using namespace std;

void bin(int n){
    if(n<=0){
        return ;
    }

    bin(n/2);
    cout<<n%2;
    

}

int main(){
    int n;
    cout<<"enter the number whose binary you need : ";
    cin>>n;
    bin(n);
    return 0;
}

