#include<iostream>
#include<algorithm>
#include <array> 
#include <vector> 

using namespace std;



template <typename T> int isItPlus(T y)
{
if(y>0)
  return 1;
 else
  return 0;

}


// Also can be done like down but has to change  
//  all_of(Vec1.begin(), Vec1.end(), isItPlus); 
// 
//

/*
int isItPlus(int y)
{

 return  y>0;
}
*/

int main()
{

std::cout<<"testing  algorithm stl \n";


std::array<int,8> foo = {3,5,7,11,13,17,19,23};


std::vector<int> Vec1 = {3,5,7,11,13,17,19,23};

std::vector<int> Vec2 = {3,-5,7,11,13,17,19,23};

/////////////////////////////
// Lambda inside all_of


bool ret1 = std::all_of(foo.begin(), foo.end(), [](int i){return i%2;}); 
 if(ret1==true)
    std::cout << "All the elements are odd numbers.\n";
  else
      std::cout << "Not all the elements are odd numbers.\n";


bool ret2 = std::all_of(Vec1.begin(), Vec1.end(), [](int i){return i>0;}); 
 if(ret2==true)
    std::cout << "All the elements are +++.\n";
  else
      std::cout << "Not all the elements are +++ some are ---.\n";


bool ret3 = std::all_of(Vec2.begin(), Vec2.end(), [](int i){return i>0;}); 
 if(ret3==true)
    std::cout << "All the elements are +++.\n";
  else
      std::cout << "Not all the elements are +++ some are ---.\n";

/////////////////////////////
// normal method  inside all_of

bool ret4 = std::all_of(Vec1.begin(), Vec1.end(), isItPlus<int>); 
 if(ret4==true)
    std::cout << "All the elements are +++.\n";
  else
      std::cout << "Not all the elements are +++ some are ---.\n";


bool ret5 = std::all_of(Vec2.begin(), Vec2.end(), isItPlus<int>); 
 if(ret5==true)
    std::cout << "All the elements are +++.\n";
  else
      std::cout << "Not all the elements are +++ some are ---.\n";


return 0;
}
