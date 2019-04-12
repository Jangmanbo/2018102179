#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 9; i++)
	{
		for (int j; j < 8; j++)
		{
			cout << i * j << '\t';
		}
		cout << endl;
	}

	return 0;
}