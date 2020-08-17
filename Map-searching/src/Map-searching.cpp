#include <iostream>
#include <map>

int main ()
{
  std::map<char,int> mymap;
  std::map<char,int>::iterator it;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;
  mymap['d']=200;


  // print content:
  std::cout << "elements in mymap:" << '\n';
  std::cout << "a => " << mymap.find('a')->second << '\n'<<std::endl;
  std::cout << "c => " << mymap.find('c')->second << '\n'<<std::endl;;
  std::cout << "d => " << mymap.find('d')->second << '\n'<<std::endl;;
  getchar();

  return 0;
}
