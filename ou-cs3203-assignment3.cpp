#include<iostream>
using namespace std;

int sumList(int size, int* array) { //use pointer of array to grab array from main
	//int* array = new int[size];

	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum = sum + array[i];
	}

	return sum;
}

int productList(int size, int* array){ //use pointer of array to grab array from main
    //int* array = new int[size];

    int product = 1;

    for(int i = 0; i < size; i++){
        product = product * array[i];
    }

    return product;

}

int* reverseList(int size, int* array){
    int* reverse = new int[size];

    for(int i = 0; i < size; i++){
        reverse[i] = array[size - 1 - i];
    }

    return reverse;
}

int main() {
	int size = 3;
    //int* array = new int[size];
    //int num1, num2, num3;

    int* array = new int[size]; //sets the arrays size equal to the user input

    for(int i = 0; i < size; i++){
        cout << "Enter number " << i + 1 << ": ";   
        cin >> array[i];    //grabs the value entered by the user and sets it to array[i]
    }
    
    cout << "\n\nThe sum of the array is: " << sumList(size, array) << "\n";
    cout << "The product of the array is: " << productList(size, array) << "\n";
    
    int* reverse = reverseList(size, array);

    cout << "\nThe array is as follows: \n";
    for(int i = 0; i < size; i++){
        cout << "Index " << i << ": " << array[i] << endl;
    }
    cout << "\nThe reverse of the array is as follows: \n";
    for(int i = 0; i < size; i++){
        cout << "Index " << i << ": " << reverse[i] << endl;
    }

	return 0;
}