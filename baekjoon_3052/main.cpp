#include <iostream>
using namespace std;

int i1, n[42], c;
int main() {
	for (int i = 0; i < 10; i++) {
		cin >> i1;
		if (n[i1 % 42] == 0) c++;
		n[i1 % 42]++;
	}
	cout << c;
	return 0;
}