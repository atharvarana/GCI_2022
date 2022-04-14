/*
Write a program in C to check a number is a prime number or not using recursion. Go to the editor
Test Data : 
Input any positive number : 7 
Expected Output :

The number 7 is a prime number.   
*/

#include<iostream>
using namespace std;

bool isPrime(int n, int i = 2)
{

	if (n <= 2)
		return (n == 2) ? true : false;
	if (n % i == 0)
		return false;
	if (i * i > n)
		return true;

	return isPrime(n, i + 1);
}

int main()
{
	int n;
    cout<<"enter number to check prime or not: ";
    cin>>n;
	if (isPrime(n))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}


