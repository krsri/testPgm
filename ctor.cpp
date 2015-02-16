#include <iostream>
using namespace std;


class foo
{
	public:
		foo()
		{
			x = 10;
		}

		void print();
	private:
		int x;

};

void foo :: print() 
{
	cout << "value for x:" << x << endl ;
}

int main()
{
	foo f;
	
	f.print();
	return 0;
}
