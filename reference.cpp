#include <iostream>
using namespace std;
int main()
{
	int i =10 , j=20;
	int &ref = i;

	int &tempRef =  i;
	cout << "Value Of I :: "<< ref << endl ;
	cout << "Value Of j :: "<< tempRef << endl ;
	

	return 0;
}
