#include<iostream>

using namespace std;

class Test
{
	public:
		Test()
		{
			cout << "Construtor "<< endl ;
		}
		
		~Test()
		{
			cout << "Destructor "<< endl ;
		}

};

void f()
{
	 Test t;
}

int main()
{
	f();
	cout << "In MAIN" << endl ;	
	return 0;
}
