/*
Write a program in C to find the sum of digits of a number using recursion. Go to the editor
Test Data : 
Input any number to find sum of digits: 25 
Expected Output:

The Sum of digits of 25 = 7 
*/
#include<iostream>
using namespace std;

int sumdig(int n){
    int rem;
    int static sum=0;
    
    if(n!=0){
        rem=n%10;
        n=n/10;
        sum = sum +rem;
        sumdig(n);
    }

    return sum;
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    
    cout<<"\n number of digits : ";
    cout<<sumdig(n);
    return 0;
}