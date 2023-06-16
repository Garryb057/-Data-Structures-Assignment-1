//Name: Gurekpal Bhullar
//Email: gsbzm8@umsystem.edu

#include <iostream>
#include "function.h"
using namespace std;

int main() {
	//initialize array
	int arr[200] = {0};	
	string fileName;

	//Get the file name from the user and call the function readFile with the given fileName
	cout << "Enter file name: ";
	cin >> fileName;
	readFile(fileName, arr);

	//Loops until the user quits out of the program
	while (true) {
		//Calls the menu function and sets the value returned to choice
		int choice;
		choice = menu();

		//This block of code runs if the user inputs 1 from the menu function
		if (choice == 1) {
			//Takes imput from user about what integer they would like to find in the array
			int numToFind;
			cout << "What integer would you like to find in the array?" << endl;
			cin >> numToFind;

			//Sets foundIndex to the integer returned from the findNum function
			int foundIndex;
			foundIndex = findNum(numToFind, arr);

			//This block of codes runs if the value returned from findNum is -1
			if (foundIndex == -1) {
				cout << "The integer " << numToFind << " is not found in the array" << endl;
				continue;
			}

			//This line of code runs if the value returned from findNum is anything other than -1
			cout << "The integer " << numToFind << " is found at the index " << foundIndex << endl;
		}

		//This block of code runs if the user inputs 2 from the menu function
		else if (choice == 2) {
			//Takes input from user about what index in the array they would like to modify
			int newNum;
			int indexMod;
			cout << "What index would you like to modify?" << endl;
			cin >> indexMod;

			//Takes input from the user about what integer the new number will be
			cout << "What integer would you like to change to?" << endl;
			cin >> newNum;

			//Calls function changeNum with the user given inputs
			changeNum(indexMod, newNum, arr);
		}

		//This block of code runs if the user inputs 3 from the menu function
		else if (choice == 3) {
			//Takes input from user for what integer they would like to add to the array
			int numToAdd;
			cout << "What integer would you like to add?" << endl;
			cin >> numToAdd;

			//Calls function addNum with the user given input
			addNum(numToAdd, arr);
		}

		//This block of code runs if the user inputs 4 from the menu function
		else if (choice == 4) {
			//Takes input from the user for what index in the array that the user wants to remove
			int indexToRemove;
			cout << "What index would you like to remove?" << endl;
			cin >> indexToRemove;

			//Calls function removeNum with the user given input
			removeNum(indexToRemove, arr);
		}

		//This block of code runs if the user inputs 5 from the menu function
		else if (choice == 5) {
			//Calls printArr function with the array and prints the array
			printArr(arr);
		}

		//This block of code runs if the user inputs 6 from the menu function and stops the program
		else if (choice == 6) {
			break;
		}
		//This block of code runs if the user inputs anything other than the numbers 1-6 and restarts the loop
		else {
			cout << "Invalid Input" << endl;
			continue;
		}
	}
}