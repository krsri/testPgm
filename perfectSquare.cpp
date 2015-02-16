#include <iostream>

using namespace std;

int main()
{
	int n = 36; 
	for(int i=0 ; i< n; i++){
		if(i*i == n)
		{
			cout << "Number is Square number.." << endl;
			return 0;
		}
	}
	cout << "Not a square number ..." << endl;
	return 0;
}
