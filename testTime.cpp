#include <iostream>
#include <sstream>

using namespace std;

int main()
{
const char *time_details = "jan15";
stringstream ss;
struct tm tm;
strptime(time_details, "%b%y", &tm);
time_t t = mktime(&tm);



ss << t ;

cout << ss.str();

cout << "\nTime in string ::: " << ctime(&t) << endl ;

}
