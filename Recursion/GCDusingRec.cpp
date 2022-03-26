/*
7. Write a program in C to find GCD of two numbers using recursion. Go to the editor
Test Data : 
Input 1st number: 10 
Input 2nd number: 50 
Expected Output :

The GCD of 10 and 50 is: 10 
*/
#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a!=b){
        if(a>b){
            return gcd(a-b,b);
        }
        else{
            return gcd(a,b-a);
        }
    }

    return a;
}

int main(){
    int a,b;
    cout<<"enter two numbers whose GCD you want to find out : ";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}