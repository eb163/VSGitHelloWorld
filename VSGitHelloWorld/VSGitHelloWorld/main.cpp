#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void pause()
{
	char ch;
	string str = "Press any key to continue...";
	cout << str;
	cin >> ch;
}

int main()
{
	cout << "Hello world!" << endl;
	pause();

	return 0;
}