#pragma once 
#include <iostream>
#include "AbstractBST.h"

struct ArrayNode {
    int key;
    int value;
    
    ArrayNode(int key, int value) : key(key), value(value) {}
};

class ArrayBST : public AbstractBST
{
    public:

};
