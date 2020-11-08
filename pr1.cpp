#include <iostream>
using namespace std;
int main()
{
	cout << "Hello, World!" << endl;
	int p = 1;
	int i = 1;
	while (i <= 10)
	{
		i += p;
		cout << "Now i: " << i << " and p is: " << p << endl;
	};
	cout << "p = " << p << " i = " << i << endl;
	return 0;
	}

