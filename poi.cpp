#include<iostream>
#include <stdio.h>
using namespace std;


int main()
{
	int *p, i=10, j=20;
	p = &i;
	cout << "i value :::"<< *p << endl;
	p = &j;
	cout<< "Pointer reassigned :: j Value" << *p  << endl;
		
	return 0;
}
