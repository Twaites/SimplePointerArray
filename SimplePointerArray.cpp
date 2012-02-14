/*
Kory Twaites
2-13-2012
A simple example of a int, char, or float array created at runtime, using dynamic allocation.
*/

#include <iostream>
using namespace std;
int main() {
	int arrayType, arraySize, index;
	do { // Asks user which type of array to create. Error checking is built in.
		cout << "1.) Integer Array" << endl << "2.) Character Array" << endl << "3.) Float Array" << endl << "Choose which type of an array you want: " ;
		cin >> arrayType;
	} while (arrayType != 1 && arrayType != 2 && arrayType != 3); 
	
	//Enter a size for the array
	cout << "How many items would you like in the array? ";
	cin >> arraySize;
	
	switch (arrayType) {
		case 1: // Creates array, prompts user for integers, then reads out the array.
			int *IntArray;
			IntArray = new int[arraySize];
			
			for(index=0; index < arraySize; index++){
				cout << "Enter an integer for the array: ";
				cin >> IntArray[index];
			}
			index=0; // Resets index back to zero
			
			cout << endl << "This is what's in the array." << endl;
			while (index < arraySize) {
				cout << "Array[" << index << "] - " << IntArray[index] << endl;
				index++;
			}
			break;
		
		case 2: // Creates array, prompts user for chars, then reads out the array.
			char *CharArray; 
			CharArray = new char[arraySize];
			
			for(index=0; index < arraySize; index++){
				cout << "Enter a character for the array: ";
				cin >> CharArray[index];
			}
			index=0; // Resets index back to zero
			
			cout << endl << "This is what's in the array." << endl;
			while (index < arraySize) {
				cout << "Array[" << index << "] - " << CharArray[index] << endl;
				index++;
			}
			break;

		default: // Creates array, prompts user for floats, then reads out the array.
			float *FloatArray; 
			FloatArray = new float[arraySize];
			
			for(index=0; index < arraySize; index++){
				cout << "Enter a decimal number for the array: ";
				cin >> FloatArray[index];
			}
			index=0; // Resets index back to zero
			
			cout << endl << "This is what's in the array." << endl;
			while (index < arraySize) {
				cout << "Array[" << index << "] - " << FloatArray[index] << endl;
				index++;
			}
			break;
			}
	
}