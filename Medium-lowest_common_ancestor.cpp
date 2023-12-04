#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int data)
  {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *buildTree(Node *root)
{
  cout << "Enter the data" << endl;
  int data;
  cin >> data;
  root = new Node(data);

  if (data == -1)
  {
    return NULL;
  }

  cout << "Enter the data for inserting in left of " << data << endl;
  root->left = buildTree(root->left);
  cout << "Enter the data for inserting in right of " << data << endl;
  root->right = buildTree(root->right);
  return root;
}

Node *lowestCommonAncestor(Node *root, int p, int q)
{
  if (root == NULL)
  {
    return nullptr;
  }
  if (root->data == p || root->data == q)
  {
    return root;
  }

  Node *leftAns = lowestCommonAncestor(root->left, p, q);
  Node *rightAns = lowestCommonAncestor(root->right, p, q);

  if (leftAns != NULL && rightAns != NULL)
  {
    return root;
  }
  else if (leftAns != NULL && rightAns == NULL)
  {
    return leftAns;
  }
  else if (leftAns == NULL && rightAns != NULL)
  {
    return rightAns;
  }
  else
  {
    return NULL;
  }
}

int main()
{

  Node *root;
  root = buildTree(root);
  int a = 10, b = 20;
  cout << lowestCommonAncestor(root, a, b)->data << endl;

  return 0;
}