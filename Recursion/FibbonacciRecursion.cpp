/*
Write a program in C to Print Fibonacci Series using recursion.

Test Data : 
Input number of terms for the Series (< 20) : 10
Expected Output:

 Input number of terms for the Series (< 20) : 10                                
 The Series are :                                                                
 1  1  2  3  5  8  13  21  34  55  
*/

#include<iostream>
using namespace std;

void fib(int terms){
    if(terms==0){
        return;
    }

    static int n1=0,n2=1,n; //static is important here
    n=n1+n2;
    cout<<n<<" ";
    n1=n2;
    n2=n;
    fib(terms-1);//kitni baar aur chalega
}

int main(){
    int terms;
    cout<<"enter number of terms you want : ";
    cin>>terms;
    cout<<"0 1 ";
    fib(terms-2);
    return 0;
}

