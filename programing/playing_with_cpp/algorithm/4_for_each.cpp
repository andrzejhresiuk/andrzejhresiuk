#include <iostream>
#include <algorithm>
#include <vector>


void foo(int i)
{
	std::cout<<" "<<i;

}

/////////////////////////////
// change all values in vector:
int foo2(int &i)
{
return	i=i+5;

}

class Class1{
public:
	void operator() (int i) {std::cout << ' ' << i;}


}object1;

int main()
{
	std::vector<int> someVector;
	
  someVector.push_back(10);
  someVector.push_back(20);
  someVector.push_back(30);

  std::cout << "myvector contains:";
  for_each (someVector.begin(), someVector.end(), foo);
  std::cout << '\n';


  std::cout << "myvector after add:";
  for_each (someVector.begin(), someVector.end(), foo2);
	std::cout<<" "<<someVector[0];
	std::cout<<" "<<someVector[1];
	std::cout<<" "<<someVector[2];
	  std::cout << '\n';


   ////////////////////////////////////////////////////
  // or:
  std::cout << "myvector contains:";
  for_each (someVector.begin(), someVector.end(), object1);
  std::cout << '\n';
  
  
}



