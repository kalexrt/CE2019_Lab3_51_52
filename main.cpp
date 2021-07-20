#include <iostream>
#include "LinkedlistBST.h"
using namespace std;

int main() {
  LinkedlistBST l;
  l.addBST(1);
  l.addBST(3);
  l.addBST(10);
  l.addBST(4);
  l.addBST(5);
  l.addBST(3);
  l.addBST(2);
  l.addBST(8);
  cout << "Traverse";
  l.inorder();
  cout << l.searchBST(2);
}