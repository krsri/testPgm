#include <iostream>

using namespace std;

class Animal
{
	public:
		virtual void eat()
		{
			cout << " Animal eat" << endl;
		}
};
class Cat : public Animal 
{
	public:
		virtual void eat()
		{
			cout << " Cat eat " << endl ;
		}
};

void func(Animal *obj)
{
	obj->eat();
}

int main()
{
	Animal *a = new Animal();
	Cat *c = new Cat();
	func(a);
	func(c);
}

