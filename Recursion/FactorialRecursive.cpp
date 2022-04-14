/*
Write a program in C to find the Factorial of a number using recursion. Go to the editor
Test Data : 
Input a number : 5
Expected Output:

The Factorial of 5 is : 120
*/

#include<iostream>
using namespace std;

int fac(int n){
    if(n==1 || n==0){
        return 1;
    }

    return (n * fac(n-1));
}

int main(){
    int n;
    cout<<"enter the number whose factorial you need : ";
    cin>>n;
    cout<<fac(n);
    return 0;
}

