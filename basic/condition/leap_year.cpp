#include<iostream>
using namespace std;

int main()
{
	while (true)
	{
		int n;
		cin >> n;
		if ((n % 4 == 0 && n % 100 !=0) || (n % 400 == 0))
			cout << "leap year"<<endl;
		else
			cout << "not"<<endl;
	}
		return 0;
	
}
