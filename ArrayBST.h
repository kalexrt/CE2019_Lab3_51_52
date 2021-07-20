#include <iostream>
#include "AbstractBST.h"
#define max_size 64

struct ArrayNode 
{
    int key;
    int value;
    
    ArrayNode(int key, int value) : key(key), value(value) {}
};
class ArrayBST : public AbstractBST
{
    private:
        ArrayNode* nodes[max_size]; 

    public:
        ArrayBST();
        ~ArrayBST();
        bool isEmpty();
        void add(int key, int value);
        void remove(int key);
        bool search(int targetkey);     
   
};
