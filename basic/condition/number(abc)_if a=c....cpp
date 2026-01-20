#include<iostream>
using namespace std;

int main()
{
	while (true)
	{
		int n,a,b;
		cin >> n;
		a = n / 100;
		b = n % 10;
		if (a == b)
			cout << "a=b"<<endl;
		else
			cout << "a!=b"<<endl;
	}
		return 0;
	
}
