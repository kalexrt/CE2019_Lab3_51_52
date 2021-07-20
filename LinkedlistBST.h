#include <iostream>
#include "AbstractBST.h"
#pragma once 
using namespace std;

struct node {
  int key;
  struct node *left, *right;
};

class LinkedlistBST : public AbstractBST{
   private:
   node *root = NULL;
   public:
   bool isEmpty();
   void inorder();
   void addBST(int value);
   bool searchBST(int targetkey);
   void removeBST(int key);

};



