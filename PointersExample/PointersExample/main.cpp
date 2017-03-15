#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int* intPointer;
	int a = 1337;
	intPointer = &a;
	cout << "not dereferenced: " << endl;
	cout << "intPointer addr: " << intPointer << endl;
	cout << "a addr: " << &a << endl;
	cout << "deref intPointer: " << *intPointer << endl;
	cout << "a value: " << a << endl;

	return 0;
}