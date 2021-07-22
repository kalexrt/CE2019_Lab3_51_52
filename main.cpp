#include <iostream>
#include "ArrayBST.h"
#include "LinkedlistBST.h"
using namespace std;
int main()
{
    ArrayBST BST;
    if(BST.isEmpty())
    {
        cout<<"BST is currently empty"<<endl;
    }

    BST.add(7,7);
    BST.add(8,8);
    int search=7;
    if(BST.search(search))
    {
        cout<<search<<" does exist"<<endl; 
    }
    else
    {
        cout<<search<<" doesn't exist"<<endl;
    }
    BST.add(9,9);
    BST.remove(7);
    if(BST.search(search))
    {
        cout<<search<<" does exist"<<endl; 
    }
    else
    {
        cout<<search<<" doesn't exist"<<endl;
    }
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
    return 0;
}
