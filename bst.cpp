#include <iostream>
using namespace std;
class nodeBST
{
   int key;
    nodeBST *lft, *rgt;
 public:
    nodeBST();
     nodeBST(int);
     nodeBST* insertFunc(nodeBST*, int);
  void traverseInOrder(nodeBST*);
};
nodeBST ::nodeBST()
 : key(0)
, lft(NULL)
, rgt(NULL)
{
}
nodeBST ::nodeBST(int value)
{
   key = value;
   lft = rgt = NULL;
}
nodeBST* nodeBST ::insertFunc(nodeBST* root, int value)
{
if (!root)
{
return new nodeBST(value);
}
if (value > root->key)
{
root->rgt = insertFunc(root->rgt, value);
}
else
{
root->lft = insertFunc(root->lft, value);
}
return root;
}
void nodeBST ::traverseInOrder(nodeBST* root)
{
   if (!root) {
return;
}
    traverseInOrder(root->lft);
   cout << root->key << endl;
   traverseInOrder(root->rgt);
}
int main()
{
nodeBST node, *root = NULL;
root = node.insertFunc(root, 0);
node.insertFunc(root, 5);
node.insertFunc(root, 10);
node.insertFunc(root, 2);
node.insertFunc(root, 1);
node.insertFunc(root, 6);
node.insertFunc(root, 9);
node.insertFunc(root, 8);
node.insertFunc(root, 11);
node.insertFunc(root, 15);
cout<<"\nThe sorted binary search tree is  "<< endl;
node.traverseInOrder(root);
return 0;
}
