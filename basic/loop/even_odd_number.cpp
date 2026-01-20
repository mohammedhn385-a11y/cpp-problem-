#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	cout << "even number"<<endl;
	for (int i = 0;i < n;i++)
	{
		if (i % 2 == 0)
			cout << i<<endl;
	}
	cout << "odd number"<<endl;
	for (int i = 0;i < n;i++)
	{
		if (i % 2 == 1)
			cout << i<<endl;
	}
	

}
