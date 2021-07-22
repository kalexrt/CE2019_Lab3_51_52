#include <iostream>
#include "ArrayBST.h"

using namespace std;

ArrayBST::ArrayBST()
{
    for(int i=0; i<max_size;i++)
    {
        nodes[i] = NULL;
    }
}

ArrayBST::~ArrayBST(){}

bool ArrayBST::isEmpty()
{
    return nodes[1] == NULL;
}

void ArrayBST::add(int value)
{
    ArrayNode* newData(new ArrayNode(value, value));

    for (int i = 1; i < max_size; i++) 
    {
        ArrayNode* node = this->nodes[i];
        
        if (node == NULL) 
        {
            this->nodes[i] = newData;
            break;
        } 
        else if (node->value < value) 
        {
            i = 2 * i + 1;
        } else 
        {
            i = 2 * i;
        }
    }    
}

bool ArrayBST::search(int targetKey)
{
    int i = 1;
    bool found = false;
    while (i < max_size)
    {
        ArrayNode *node = this->nodes[i];
        if (node == NULL)
        {
            break;
        }
        else if (node->key == targetKey)
        {
            found = true;
            break;
        }
        else if (node->key < targetKey)
        {
            i = 2 * i + 1;
        }
        else
        {
            i = 2 * i;
        }
    }
    return found;
}

void ArrayBST::remove(int keytobedeleted)
{
    if (!isEmpty())
    {
        int i = 1;
        while (i < max_size)
        {
            ArrayNode *node = this->nodes[i];
            if (node->key == keytobedeleted)
            {
                break;
            }
            else if (keytobedeleted < node->key)
            {
                i = 2 * i;
            }
            else if (keytobedeleted > node->key)
            {
                i = 2 * i + 1;
            }
        }
        if (keytobedeleted == nodes[i]->key)
        {
            if (nodes[2 * i] == nullptr && nodes[2 * i + 1] == nullptr)
            {
                nodes[i] = nullptr;
            }
            else if (nodes[2 * i] == nullptr && nodes[2 * i + 1] != nullptr)
            {
                nodes[i] = nodes[2 * i + 1];
                nodes[2 * i + 1] = nullptr;
            }
            else if (nodes[2 * i] != nullptr && nodes[2 * i + 1] == nullptr)
            {
                nodes[i] = nodes[2 * i];
                nodes[2 * i] = nullptr;
            }
            else if (nodes[2 * i] != nullptr && nodes[2 * i + 1] != nullptr)
            {
                int a;
                a = 2 * i;
                while (nodes[2 * a + 1] != nullptr)
                {
                    a = 2 * a + 1;
                }
                nodes[i] = nodes[a];
                nodes[a] == NULL;
            }
        }
        else
        {
            cout << "Node to be deleted is not found" <<endl;
        }
    }
    else
    {
        cout << "No Nodes found"<<endl;
    }
}


