#include<iostream>
using namespace std;

int sumList(int a, int b, int c, int d) {
	int array[4] = { a, b, c, d };

	int result = 0;

	for (int i = 0; i < 4; i++) {
		result = result + array[i];
	}

	return result;
}

int main() {
	cout << sumList(1, 2, 3, 4) << "\n";

	return 0;
}