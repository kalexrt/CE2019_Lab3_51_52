#include <iostream>

class AbstractBST
{
    public:
    virtual bool isEmpty()=0;
    virtual void add( int value) = 0;
    virtual void remove(int key)=0;
    virtual bool search(int targetkey)=0; 
};

