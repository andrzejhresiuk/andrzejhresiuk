#include<iostream>
#include<algorithm>
#include <array> 
#include <vector> 

using namespace std;



template <typename T> int AnyIsMinus(T y)
{
if(y<0)
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


std::array<int,8> foo = {3,5,7,11,13,17,19,23}; // odd array 

std::array<int,8> fooEven = {2,4,4,8,14,18,20,22};  //  even array

std::vector<int> Vec1 = {3,5,7,11,13,17,19,23};

std::vector<int> Vec2 = {-3,-5,7,11,13,17,19,-23};

/////////////////////////////
// Lambda inside all_of





bool ret1 = std::any_of(fooEven.begin(), fooEven.end(), [](int i){return i%2;}); 
 if(ret1==true)
    std::cout << "some numbers are  odd\n";
  else
      std::cout << " Noo nnot any element  is odd numbers. ale are even\n";


bool ret2 = std::any_of(Vec1.begin(), Vec1.end(), [](int i){return i<0;}); 
 if(ret2==true)
    std::cout << "There are negative elements in the range.\n";
  else
      std::cout << "all elemens are positive.\n";


bool ret3 = std::any_of(Vec2.begin(), Vec2.end(), [](int i){return i<0;}); 
 if(ret3==true)
     std::cout << "There are negative elements in the range.\n";
  else
       std::cout << "all elemens are positive.\n";


std::cout<<"============================================================"<<std::endl;
/////////////////////////////
// normal method  inside all_of

bool ret4 = std::any_of(Vec1.begin(), Vec1.end(), AnyIsMinus<int>); 
 if(ret4==true)
    std::cout << "some lements re --\n";
  else
      std::cout << "all are ++.\n";


bool ret5 = std::any_of(Vec2.begin(), Vec2.end(), AnyIsMinus<int>); 
 if(ret5==true)
    std::cout << "some lements are minus.\n";
  else
      std::cout << " all are +++.\n";


return 0;
}
