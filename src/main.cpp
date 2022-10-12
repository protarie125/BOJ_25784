#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	if (a == b + c ||
		b == a + c ||
		c == a + b) {
		cout << 1;
	}
	else if (a == b * c ||
		b == a * c ||
		c == a * b) {
		cout << 2;
	}
	else {
		cout << 3;
	}

	return 0;
}