/*
Write a program in C to count the digits of a given number using recursion. Go to the editor
Test Data : 
Input a number : 50 
Expected Output :

The number of digits in the number is :  2
*/
#include<iostream>
using namespace std;

int countdig(int n){
    int static count=0;
    
    if(n!=0){
        n=n/10;
        count++;
        countdig(n);
    }

    return count;
}

int main(){

    int n;
    cout<<"enter the number : ";
    cin>>n;
    
    cout<<"\n number of digits : ";
    cout<<countdig(n);
    return 0;
}