#include <iostream>
#include "LinkedlistAbstractBST.h"
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
   void order(node *root);
   void In_order();
   void addBST(int value);
   bool searchBST(int targetkey);
	 node* deletenode(node *root,int key);
   void removeBST(int key);

};

bool LinkedlistBST :: isEmpty(){
    if (root != NULL){
      cout << "Is empty";
      return true;
    }
    else{
        return false;
    }
}

void LinkedlistBST :: addBST(int value) 
{
    node* newnode;
    newnode = new node();
    newnode->key = value;

    node *temp = root;
    node *parent;

    if (root == NULL) 
        root = newnode;
    else 
    {
        while(temp != NULL)
        {
            parent = temp;
            if (temp->key > value)
                temp = temp->left;
            else if (temp->key < value)
                temp = temp->right;
        }
        if (parent->key > value)
            parent->left = newnode;
        else if(parent->key < value)
            parent->right = newnode;
    }
}

void LinkedlistBST :: order(node *node) {
  if (node != NULL) {
    
    order(node->left);

    cout << node->key << " -> ";
    
    order(node->right);
  }
}

void LinkedlistBST :: In_order(){
    order(root);
}

bool LinkedlistBST :: searchBST(int targetkey){
	node *node;
	node = root;
	while(node!=NULL){
		if(node->key == targetkey){
			return true;
		}
		else if (targetkey<node->key){
			node= node->left;
		}
		else if (targetkey>node->key){
			node= node->right;
		}
	}
	return false;
}

struct node *minValueNode(struct node *node) {
  struct node *current = node;

  while (current && current->left != NULL)
    current = current->left;

  return current;
}
 


node* LinkedlistBST::deletenode(node* root, int key){
	if(root==NULL){
		return root;
	}
	if(key<root->key){
		return deletenode(root->left,key);
	}
	else if(key>root->key){
		return deletenode(root->right,key);
	}
	else{
		if(root->left==NULL){
			struct node *temp = root->right;
      free(root);
      return temp;
		}
		else if(root->right==NULL){
			struct node *temp = root->left;
      free(root);
      return temp;
		}
	  else{
		struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    return deletenode(root->right,temp->key);
		}
	}
	return root;
}

void LinkedlistBST :: removeBST(int key){
  deletenode(root ,key);
}
