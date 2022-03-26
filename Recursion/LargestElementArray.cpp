/*
Write a program in C to get the largest element of an array using recursion. Go to the editor
Test Data : 
Input the number of elements to be stored in the array :5 
Input 5 elements in the array :
element - 0 : 5 
element - 1 : 10 
element - 2 : 15 
element - 3 : 20 
element - 4 : 25 
Expected Output :

Largest element of an array is: 25  */
#include<iostream>
using namespace std;
int largestno(int arr[]){
    static int i=0;
    int largest=arr[i];
    
    if(i<n){
        if(arr[i+1]>largest){
            largest=arr[i+1];
        }
        i++;
    }
    
    largestno(arr);
}

int main(){
    int n;
    cout<<"number of elements in the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter array element"<<i<<" : ";
        cin>>arr[i];
    }

    cout<<"entered array is :";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n the largest element in the array is : ";
    cout<<largestno(arr);
    return 0;
}
    
