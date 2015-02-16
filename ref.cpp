#include<iostream>
#include <stdio.h>
using namespace std;
int  i;

int& refFun()
{
	i = 10;
	return i;
}

int main()
{
	refFun() = 20;
	cout << i << endl ; 
	return 0;
}


