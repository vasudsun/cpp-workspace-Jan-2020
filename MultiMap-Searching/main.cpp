/*
 * main.cpp
 *
 *  Created on: 05-Mar-2020
 *      Author: in0suv
 */


#include<iostream>
#include<map>

using namespace std;
int main() {


	multimap<int,string>item;
	 item.insert(std::pair< const int, string>(10,"sunil"));
	 item.insert(std::pair< const int, string>(20,"suchith"));
	 item.insert(std::pair< const int, string>(30,"saas"));
	 item.insert(std::pair< const int, string>(40,"rad"));

cout<<item.find(10)->second<<endl;
for(multimap<int,string>::iterator it=item.find(30);it!=item.end();it++)
{

	cout<<it->second<<endl;
}


	return 0;

}
