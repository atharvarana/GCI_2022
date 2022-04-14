/*
Write a program in C to copy One string to another using recursion. Go to the editor
Test Data : 
Input the string to copy : w3resource 
Expected Output :

 The string successfully copied.                                                                              
                                                                                                              
 The first string is : w3resource                                                                             
 The copied string is : w3resource

*/
#include<iostream>
using namespace std;
void copyString(string str1,string str2,int ctr){
    if(str1[ctr]=='\0'){
        return;
    }

    str2[ctr]=str1[ctr];

    copyString(str1,str2,ctr+1);
}
int main(){
    string str1,str2;
    int ctr;
    cout<<"enter the first string : ";
    cin>>str1;
    cout<<"\nThe first string is : "<<str1;
    cout<<"\nNow that we have copied this string using recursion the second string is : ";
    copyString(str1,str2,0);
    cout<<str2;

    return 0;
}