#include<iostream>
using namespace std;

int main()
{
	while (true)
	{
		int n;
		cin >> n;
		if (n % 5 == 0 && n % 3 == 0)
			cout << "5,3"<<endl;
		else if (n % 5 == 0)
			cout << "5"<<endl;
		else if (n % 3 == 0)
			cout << "3"<<endl;
		else
			cout << "no"<<endl;
	}
		return 0;
	
}
