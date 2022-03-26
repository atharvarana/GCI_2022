/*
Write a program in C to print the array elements using recursion. Go to the editor
Test Data : 
Input the number of elements to be stored in the array :6 
Input 6 elements in the array : 
element - 0 : 2 
element - 1 : 4 
element - 2 : 6 
element - 3 : 8 
element - 4 : 10
element - 5 : 12
Expected Output :

The elements in the array are : 2  4  6  8  10  12 
*/
#include<iostream>
using namespace std;

void printarr(int arr[],int start,int last){
    if(start>last){
        return;
    }
    
    cout<<arr[start]<<" ";
    printarr(arr,start+1,last);
}

int main(){
    int n;
    cout<<"enter the number elements in array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"input elements "<<i<<": ";
        cin>>arr[i];
    }

    printarr(arr,0 ,n-1);
    return 0;
}