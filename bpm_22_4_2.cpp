#include <iostream>

int main() {

	double x, y;
	int c, tr;
	std::cin >> n;
	for (int i = 1; i < n; i++) {
		std::cin >> x >> y;
	c++;
	if ((y >= x + 1) && (y <= x - 1) && (x * x + y * y <= 1)) {
		tr++;
	}
	}
	std::cout << tr / c * 100;

}