/*
Write a program in C to calculate the power of any number using recursion. Go to the editor
Test Data : 
Input the base value : 2
Input the value of power : 6
Expected Output :

The value of 2 to the power of 6 is : 64   
*/
#include<iostream>
using namespace std;
int power(int n, int p,int result=1){
    if(p==0){
        return result;
    }
    result=n*power(n,p-1);
}
int main(){
    int n,p,result;
    cout<<"enter the number and its power : ";
    cin>>n;
    cin>>p;
    cout<<"\n answer : ";
    cout<<power(n,p,result);

    return 0;
}