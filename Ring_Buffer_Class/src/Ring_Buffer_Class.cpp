//============================================================================
// Name        : Ring_Buffer_Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
#include"ring.h"
#include<string>
using namespace std;



int main() {

Ring<string>ring_obj(3);
ring_obj.add("festo1");
ring_obj.add("festo2");
ring_obj.add("festo3");
for(int i=0;i<ring_obj.size();i++)
{
cout<<ring_obj.get(i)<<endl;
}





for(Ring<string>::iterator it=ring_obj.begin();it!= ring_obj.end();it++)
{

cout<<*it<<endl;

}
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
