#include <iostream>
#pragma once

class AbstractBST
{
    public:
    virtual void addBST(int value) = 0;
    virtual bool searchBST(int targetkey) = 0;
    virtual void removeBST(int key, int value) = 0;
};
