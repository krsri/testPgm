#include <iostream>

using namespace std;

void calc(int &x)
{
	x = x * x ;
}

int main()
{
	int x = 10;
	calc(x);
	cout<< "Value for X:"<< x << endl ;
}
