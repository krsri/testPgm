#include <iostream>
using namespace std;


int  main()
{

int a[] = {3,6,7,2,5,90};

int large = a[0];

for( int i=0 ; i < sizeof(a)/sizeof(a[0]); i++){
	if(a[i] > large){
		large = a[i];
	}
}


cout << large;

}
