#include <iostream>
using namespace std;


int main()
{
	int i = 10;
	const	 int &j = i;
	
	cout << i << j << endl ;
	
	i = 20 ;
	cout << i << j << endl ;
	j = 25 ;
	cout << i << j << endl ;
	
	
	return 0;
}
