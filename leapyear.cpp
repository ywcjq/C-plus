#include <iostream>
#include <string>

using namespace std;

int main()
{
int year;
string str;

cout << "输入年份:"<< endl;
cin >> year;

str=( year % 400==0 || (year % 100 != 0 && year % 4 == 0 ))?"":"not ";

cout <<year<< " is " << str << "leap";

return 0;
}
