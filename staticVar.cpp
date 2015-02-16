#include<iostream>

using namespace std;

void print()
{
	static int count = 0;
	count ++;
	cout << count << '\t' ;
}


int main()
{

	for(int i=0 ; i< 5 ; i++)
	{
		print();
	}
	return 0 ;
}
