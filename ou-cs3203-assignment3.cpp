#include<iostream>
using namespace std;

int sumList(int a, int b, int c, int d) {
	int array[4] = { a, b, c, d };

	int sum = 0;

	for (int i = 0; i < 4; i++) {
		sum = sum + array[i];
	}

	return sum;
}

int productList(int a, int b, int c, int d){
    int array[4] = {a, b, c, d};

    int product = 1;

    for(int i = 0; i < 4; i++){
        product = product * array[i];
    }

    return product;

}

int main() {
	cout << sumList(1, 2, 3, 4) << "\n";
    cout << productList(1, 2, 3, 4) << "\n";

	return 0;
}