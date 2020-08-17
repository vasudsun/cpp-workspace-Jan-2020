//============================================================================
// Name        : RValue-sample1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


	std::string s1 = "hello ";
	std::string s2 = "world";
	std::string s3 = s1 + s2;
	s3 +="sunil";
	cout<<s3<<endl;


	int k=600;
	int&& ref=500;
	ref++;
	cout<<ref<<endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
