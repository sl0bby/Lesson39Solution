#include <iostream>
#include <ctime>
using namespace std;
	
string toString(int* vector, int size);
void randomNumber(int* vector, int size, int = 0,int = 100);

int main() {
	srand(time(NULL));
	int vector[]{ 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(vector)/sizeof(int);

	cout << toString(vector,size) << endl;

	randomNumber(vector,size, 0, 100);

	cout << toString(vector, size) << endl;


	return 0;
}