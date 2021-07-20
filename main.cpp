#include <iostream>
#include "ArrayBST.h"
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
    return 0;
}