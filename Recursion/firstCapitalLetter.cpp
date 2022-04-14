/*
Write a program in C to find the first capital letter in a string using recursion.
Test Data : 
Input a string to including one or more capital letters : testString 
Expected Output :

 The first capital letter appears in the string testString is S. 
*/

#include<iostream>
using namespace std;
 
char first(string str, int i=0)
{
    if (str[i] == '\0')
         return 0;
    if (isupper(str[i]))
            return str[i];
    return first(str, i+1);
}
 
int main()
{
    string str;
    cout<<"enter string : ";
    cin>>str;
    char res = first(str);
    if (res == 0)
        cout << "No uppercase letter";
    else
        cout << res << "\n";
    return 0;
}