//Name: Gurekpal Bhullar
//Email: gsbzm8@umsystem.edu

#include "function.h"
using namespace std;

//Function reads the input file and adds the numbers to the array
void readFile(string fileName, int arr[]) {
	ifstream inFile;
	inFile.open(fileName);
	if (!inFile.is_open()) {
		cout << "Error Opening File" << endl;
		return;
	}

	for (int i = 0; i < 101; i++) {
		inFile >> arr[i];
	}

	inFile.close();
}

//Function to find a number from the user in the array and return the index
int findNum(int numToFind, int arr[]) {
	for (int i = 0; i < 200; i++) {
		if (numToFind == arr[i]) {
			return i;
		}
	}
	return -1;
}

//Function to change a number in the array given an index and what to change the number to from the user
void changeNum(int userIndex, int numToChange, int arr[]) {
	try {
		if (userIndex < 0 || userIndex >= 200) {
			throw std::out_of_range("Invalid index"); // Throw an exception if the index is out of range
		}
		cout << "The old value is " << arr[userIndex] << endl;
		arr[userIndex] = numToChange;
		cout << "The new value is " << arr[userIndex] << endl;
	}
	catch (const std::exception& e) {
		cout << "Error: " << e.what() << endl; // Print error message
	}
}

//Function to add a number from the user to the array
void addNum(int numToAdd, int arr[]) {
	try {
		for (int i = 0; i < 200; i++) {
			if (arr[i] == 0) {
				arr[i] = numToAdd;
				return;
			}
		}
		throw std::overflow_error("Array is full"); // Throw an exception if the array is full
	}
	catch (const std::exception& e) {
		cout << "Error: " << e.what() << endl; // Print error message
	}
}

//Function to remove an integer from the array given an index
void removeNum(int userIndex, int arr[]) {
	arr[userIndex] = 0;
}

//Function to print the array
void printArr(int arr[]) {
	for (int i = 0; i < 200; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//Function to print menu and take input from user
int menu() {
	int choice;
	cout << endl;
	cout << "What would you like to do?" << endl;
	cout << "1. Find an integer in the array" << endl;
	cout << "2. Modify the array" << endl;
	cout << "3. Add an integer to the array" << endl;
	cout << "4. Delete an integer from the array" << endl;
	cout << "5. Print array" << endl;
	cout << "6. Quit" << endl;
	cin >> choice;
	return choice;
}