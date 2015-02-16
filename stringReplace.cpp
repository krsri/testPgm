#include <iostream>

using namespace std;

int main()
{
	string str = "ABC***DEF";
	string mask = "aaa";
	cout << str.replace(mask,"#####") << endl ;
}
