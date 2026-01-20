#include<iostream>
using namespace std;

int main()
{
	while (true)
	{
		int n, a, b, c;
		cin >> n;
		a = n / 100;
		c = n % 10;
		b = (n % 100) / 10;
			if (a+c == b)
				cout << "a+c=b" << endl;
			else
				cout << "a+c!=b" << endl;
	}
	return 0;

}
