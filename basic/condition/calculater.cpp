#include<iostream>
using namespace std;

int main()
{
	while (true)
	{
		int a;
		int b;
		char c;
		cin >> a >> c >> b;
		switch (c)
		{
		case '+':cout << a + b<<endl;
			break;
		case '-':cout << a - b<<endl;
			break;
		case '*':cout << a * b<<endl;
			break;
		case '/':
			if (b != 0)
				cout << a / b<<endl;
			else
				cout << "no"<<endl;
			break;
		}
	}
	return 0;

}
