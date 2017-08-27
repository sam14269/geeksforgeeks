#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
void reverseLevelOrder(struct node *root)
{
    stack<node*> s;
    queue<node*> q;
    if(root==NULL) return;
    q.push(root);
    while(!q.empty())
    {
        root=q.front();
        q.pop();
        s.push(root);
        if(root->right)
            q.push(root->right);
        if(root->left)
            q.push(root->left);
    }
    while(!s.empty())
    {
        cout<<s.top()->data<<" ";
        s.pop();
    }
}
void LevelOrder(struct node *root)
{
    queue<node*> q;
    if(root==NULL) return;
    q.push(root);
    while(!q.empty())
    {
        root=q.front();
        q.pop();
        cout<<root->data<<" ";
        if(root->right)
            q.push(root->right);
        if(root->left)
            q.push(root->left);
    }
}
node* newNode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
 
    return (temp);
}
int main()
{
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    root->right->left  = newNode(6);
    root->right->right = newNode(7);
    cout << "Level Order traversal of binary tree is \n";
    LevelOrder(root);
    cout << "\nLevel Order traversal of binary tree is \n";
    reverseLevelOrder(root);
 
    return 0;
}
