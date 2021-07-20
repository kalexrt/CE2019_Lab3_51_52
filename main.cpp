#include <iostream>
#include "LinkedlistBST.h"
using namespace std;

int main() {
  LinkedlistBST l;
  l.addBST(5);
  l.addBST(3);
  l.addBST(10);
  l.addBST(4);
  l.addBST(2);
  l.addBST(6);
  
  cout << "Traverse\n";
  l.In_order();
  cout << "\n"<<l.searchBST(3)<<"\n";
  l.removeBST(2);
  cout << "\n"<<l.searchBST(2)<<"\n";
}
