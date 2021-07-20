#include <iostream>
#include "LinkedlistBST.h"
using namespace std;


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

void inorder(struct node *root) {
  if (root != NULL) {
    
    inorder(root->left);

    cout << root->key << " -> ";
    
    inorder(root->right);
  }
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

void LinkedlistBST ::removeBST(int key){
    root= deleteNode(root , key);
}

struct node *deleteNode(struct node *root, int key) {

  if (root == NULL) return root;

  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
  else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    struct node *temp = minValueNode(root->right);

    root->key = temp->key;

    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}