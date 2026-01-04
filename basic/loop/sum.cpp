#include <iostream>
using namespace std;
int main() {
    int N, sum = 0;
    
    cout << "enter a number: ";
    cin >> N;
    
    if (N <= 0) {
        cout << "the number must be greater than 0" << endl;
        return 1;
    }
    
    for (int i = 1; i <= N; i++) {
        sum += i; 
    }
    
    cout << "sum = " << sum << endl;
    
    return 0;
}
