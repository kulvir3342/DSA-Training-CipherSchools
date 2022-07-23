#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public :
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* root)
{

    if(root == NULL)
    {
        return;
    }

    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
}


void inorder(Node* root)
{

    if(root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postOrder(Node* root)
{

    if(root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}


int Height(Node *root)
{

    if(root == NULL)
    {
        return 0;
    }

    int LH = Height(root->left);
    int RH = Height(root->right);

    return 1 + max(LH, RH);

}



int getMax(Node *root)
{

    if(root == NULL)
    {
        return INT_MIN;
    }

    int LM = getMax(root->left);
    int RM = getMax(root->right);

    return max(root->data, max(LM, RM));
}




int main()
{
    Node *root = new Node(-4);
    Node* lcr = new Node(-8);
    root->left = lcr;
    root->right = new Node(-5);
    lcr->left = new Node(-1);
    lcr->right = new Node(-9);
    lcr->left->left = new Node(-2);
    lcr->left->right = new Node(-7);

    preorder(root);
    cout << '\n';
    inorder(root);
    cout << '\n';
    cout << Height(root);
    cout << '\n';
    cout << "Maximum value present in the tree is : "<< getMax(root);
    return 0;
}
