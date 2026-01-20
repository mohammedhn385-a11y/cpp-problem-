#include <iostream>
using namespace std;
int main() {
	int n = 1,a;
	cin >> a;
	for (int i = 1;i <=a;i++)
	{
		n *= i;
	}
	cout << n;
}
