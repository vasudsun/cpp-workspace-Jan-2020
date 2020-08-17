//============================================================================
 // Name        : Function-template.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<typename T>
void print(T value)
{

	cout<<value<<endl;
}

int main() {

	print(5);
	print("festo");
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
