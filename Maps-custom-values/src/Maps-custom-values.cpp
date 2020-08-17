

#include<iostream>
#include<map>
#include<iterator>
using namespace std;
class Person;
map<int,Person>people;
class Person{

private:
	string name;
	int age;

public:
	Person():name(" "),age(0){}
	Person(string nm,int ag):name(nm),age(ag)
{


}
	void print()
	{

		cout<<"name:"<<name<<"age: "<<age<<endl;
	}


friend void find(string str);
};

#if 1
	void find(string str)
		{
		for(map<int,Person>::iterator it=people.begin();it!=people.end();it++)
		{
			if (str==it->second.name)
			{

				cout<<"found"<<endl;
				cout<<"age:"<<it->second.age<<endl;
			}
		}
		}
#endif


int main() {



people[0]=Person("sunil",30);
people[1]=Person("rajesh",20);
people[2]=Person("rash",33);
people[3]=Person("bibin",25);

for(map<int,Person>::iterator it=people.begin();it!=people.end();it++)
{

cout<<it->first<<endl;
it->second.print();


}

find("rash");
	return 0;

}
