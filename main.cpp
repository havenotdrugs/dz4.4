#include <iostream>
using namespace std;

double degree(double one, double two);

int main() {
	double one, two;
	cin >> one >> two;
	cout << degree(one, two);
}

double degree(double one, double two) {
	return one / two;
}
