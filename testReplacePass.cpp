#include <iostream>


using namespace std;

int main()
{
	string url = "/accountservice/account.asmx/GetOxSessionWithSource?sUserName=string&sPassword=string&sSessionID=string&sSource=string";
	string str = "sPassword=";
	int start , end;
	
	start = url.find_first_of('=', url.find(str));
	end = url.find_first_of('&', start);

	url.replace (start+1, (end-(start+1)) , "*****");
	cout << url << endl ;


}
