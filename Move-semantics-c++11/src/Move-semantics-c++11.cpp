//============================================================================
// Name        : Move-semantics-c++11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;
class Holder{


private:
	int* m_data;
	int m_size;

public:
	Holder(int size)
{
		m_data=new int[size];
		m_size=size;

	}

	Holder(const Holder& other)
	{

		m_data=new int[other.m_size];
		std::copy(other.m_data,other.m_data+other.m_size,m_data);
		m_size=other.m_size;



	}
	Holder& operator=(const Holder& other)
	{
		delete []m_data;
		m_data=new int[other.m_size];
		std::copy(other.m_data,other.m_data+other.m_size,m_data);
		m_size=other.m_size;

		return *this;



	}

	Holder(Holder&& other)     // <-- rvalue reference in input
	{
	  m_data = other.m_data;   // (1)
	  m_size = other.m_size;
	  other.m_data = nullptr;  // (2)
	  other.m_size = 0;
	}
~Holder(){
	delete []m_data;

}



};
Holder createHolder(int size)
{
  return Holder(size);
}
int main() {


	Holder h1(1000);                // regular constructor
	  Holder h2(h1);                  // copy constructor (lvalue in input)
	  Holder h3 = createHolder(2000);




	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
