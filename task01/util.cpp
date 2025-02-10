#include <iostream>
#include <string>

using namespace std;


string toString(int* vector, int size) {
	string stringVector = " ";

	for (int i = 0; i < size; i++) {
		stringVector += to_string(vector[i]);
	}

	return stringVector;
}
void randomNumber(int* vector, int size,int = 0,int = 100) {
	
	for (int i = 0; i < size; i++) {
		vector[i] = rand() % (100 - 0 + 1) + 0;
	}


}