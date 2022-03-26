/*
1. Write a program in C to print first 50 natural numbers using recursion
*/

#include<iostream>
using namespace std;

void printNatural(int n){
    if(n==0){
        return;
    }

    printNatural(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"enter n to print natural numbers upto n : ";
    cin>>n;
    printNatural(n);
    return 0;
}

