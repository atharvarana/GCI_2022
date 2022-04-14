/* Write a program in C to find the LCM of two numbers using recursion. Go to the editor
Test Data : 
Input 1st number for LCM : 4 
Input 2nd number for LCM : 6 
Expected Output :

The LCM of 4 and 6 :  12 
*/

#include<iostream>
using namespace std;

int lcm(int a,int b){
    static int m=0;

    m=m+b;

    if((m%a==0)&&(m%b==0)){
        return m;
    }

    else{
        lcm(a,b);
    }

}

int main(){
    int a,b,ans;
    cout<<"enter the numbers to find their lcm : ";
    cin>>a;
    cin>>b;
    if(a>b){
        ans=lcm(b,a);
    }
    else{
        ans=lcm(a,b);
    }
    
    cout<<ans;
    return 0;
}

