//============================================================================
// Name        : Allocator-Container-STL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

template<typename type>
struct MyAlloc : allocator<type>
{

	template <class U>
	    struct rebind
	    {
	        typedef std::allocator<U> other;
	    };
type* allocate(size_t size)
{
	cout<<"size-"<<size<<endl;
	return new type[size];
}


};

int main() {

	vector<int, MyAlloc<int> >container;
	container.push_back(20);
	//container.push_back(30);
	//container.push_back(40);
//	container.push_back(50);



	for(auto var : container)
			cout<<var<<endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
