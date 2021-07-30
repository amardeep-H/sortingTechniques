#include <bits/stdc++.h>
#include <stack>
using namespace std;

//data structure to store binary tree node
struct Node
{
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
// iterative function to perform in order traversal of the tree
void inorderIterative(Node *root)
{
    //create an empty stack
    stack<Node *> stack;
    // start from root node(set current node to root node)
    Node *curr = root;
    //if current node is null and stack is also empty, we're done here
    while (!stack.empty() || curr != NULL)
    {
        //if current node is not null push it to the stack
        //and move to its left child
        if (curr != NULL)
        {
            stack.push(curr);
            curr = curr->left;
        }
        else
        {
            //else if current nde is null, we pop an element from the stack
            //print it and finally set current node to its right child
            curr = stack.top();
            stack.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
    }
}

int main()
{ /*       1
          /  \
         2    3
        /    /  \
       4     5   6
            / \
           7    8
*/
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
    inorderIterative(root);
    return 0;
}