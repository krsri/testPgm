#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


int main()
{
	char *str;
	str = (char *) malloc (15);
 	str = "sridharan";
	cout << "Size of string ::: " << sizeof(str) << endl ;
	*str[1] = 's';
	cout << "Sample String ::: " << str << endl ;
	
        cout << "Sample String ::: " << str << endl ;


	return 0;
}
