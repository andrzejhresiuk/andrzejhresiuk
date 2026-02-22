#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
 int tab[]= {10,20,30,40,50,67};
 int *ptr;
 ptr = std::find(tab,tab+4,30);
/////////////////////////////////////
 if(ptr != tab+4)
   std::cout << "Element found in myints: " << *ptr << '\n';
  else
    std::cout << "Element not found in myints\n";
/////////////////////////////////////


  // using std::find with vector and iterator:
  std::vector<int> myvector (tab,tab+4);
  std::vector<int>::iterator it;

  it = find (myvector.begin(), myvector.end(), 30);
  if (it != myvector.end())
    std::cout << "Element found in myvector: " << *it << '\n';
  else
    std::cout << "Element not found in myvector\n";

  return 0;
}
