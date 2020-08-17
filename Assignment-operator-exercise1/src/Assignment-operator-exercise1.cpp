//============================================================================
// Name        : Assignment-operator-exercise1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;

class ABC
{

	char *array;
public:
	ABC();
	ABC(const ABC& ref);
	ABC(const char* arg);

	ABC& operator=( const  ABC& ptr);
	friend ostream& operator<<(const ostream& stream,ABC& ref3);


};


ostream& operator<<(const ostream& stream,ABC& ref3)
{

	cout<<ref3.array<<endl;


}
ABC::ABC():array(NULL)
{

}

ABC::ABC(const ABC& ref1)
{

	cout<<"copy constructor called"<<endl;
	int count=strlen(ref1.array);
	array=new char[count];
	memcpy(array,ref1.array,count+1);

}
/**Operator Overloading*********/
ABC& ABC ::operator=( const  ABC& ptr)
{
	cout<<"Assignment operator called"<<endl;
	int count=strlen(ptr.array);//ptr is for the already initialised object being passed on the RHS
	array=new char[count];//array for obj3
	memcpy(array,ptr.array,count+1);
		return *this;
}

ABC::ABC(const char* arg)
{
	int count=strlen(arg);
	array=new char[count];
	memcpy(array,arg,count+1);




}
int main() {

	ABC obj1("festo");
	ABC obj2("Bommasandra");
	ABC obj3;
	obj3=obj1;
	//obj1=obj2;
	//cout<<obj1;
	//cout<<obj2;

	cout<<obj3;

	cout<<obj1;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
