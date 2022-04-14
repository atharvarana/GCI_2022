/*
Write a program in C to print even or odd numbers in given range using recursion. Go to the editor
Test Data : 
Input the range to print starting from 1 : 10 
Expected Output :

All even numbers from 1 to 10 are : 2  4  6  8  10                              
All odd numbers from 1 to 10 are : 1  3  5  7  9   
*/
//going to solve this by recursively adding + 2

#include<iostream>
using namespace std;

void evenOdd(int start ,int n){
    if(start>n){
        return;
    }

    cout<<start<<" ";

    evenOdd(start+2,n);

}

int main(){
    int n;
    cout<<"enter the range for finding odd and even beginng from and to  1 : ";
    cin>>n;
    cout<<"\n the even numbers are ";
    evenOdd(2,n);
    cout<<"\n the odd numbers are ";
    evenOdd(1,n);
    return 0;
}
