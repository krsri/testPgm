#include <iostream>

using namespace std;

class Base
{
	public:
		Base(){
			cout << "Base Ctor " << endl ;
		}
		virtual ~Base(){
			cout << "Base Dtor "<< endl ;
		}
};

class Dervied : public Base
{
	public:
		Dervied(){
                        cout << "Dervied Ctor " << endl ;
		}
		~Dervied(){
                        cout << "Dtor Ctor " << endl ;
		}
};


int main()
{

	Base *b = new Dervied;
	delete b;
	

	return 0;
}
			
