//============================================================================
// Name        : Class-Templates.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<int N>
class ABC{

private:
	int m_Array[N];

	int getsize()const{ return N;}

};


int main() {

	ABC<5>obj;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
