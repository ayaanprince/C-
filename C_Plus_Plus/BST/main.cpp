#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
node * _insert(node *root, int key)
{
    node *currentNode=root;

    node *newNode=new node;
    newNode->data=key;
    newNode->left=NULL;
    newNode->right=NULL;

    if(root==NULL)
    {
        return newNode;
    }
    else
    {
        while(true)
        {
            if(currentNode->data>key)
            {
                if(currentNode->left==NULL)
                {
                    currentNode->left=newNode;
                    break;
                }
                else
                {
                    currentNode=currentNode->left;
                }
            }
            else
            {
                if(currentNode->right==NULL)
                {
                    currentNode->right=newNode;
                    break;
                }
                else
                {
                    currentNode=currentNode->right;
                }
            }
        }
    }
    return root;
}
node * preorder(node *n)
{
    if(n==NULL)
    {
        return NULL;
    }
    cout<<n->data<<", ";
    preorder(n->left);
    preorder(n->right);

}
bool searching(node *n, int key)
{
    if(n==NULL)
    {
        cout<<"Value not found\n";
        return false;
    }
    if(n->data==key)
    {
        cout<<"Value found\n";
        return true;
    }
    else if(n->data>key)
        return searching(n->left,key);
    else
        return searching(n->right,key);
}
node * findMin(node *n)
{
    if(n->left==NULL)
        return n;
    else
        return findMin(n->left);
}
node * findMax(node *n)
{
    if(n->right==NULL)
        return n;
    else
        return findMax(n->right);
}
node * _delete(node *n,int key)
{
    if(n==NULL)
        return n;

    if(n->data==key)
    {
        if(n->left==NULL && n->right==NULL)
        {
            delete n;
            return NULL;
        }
        else if(n->left==NULL)
        {
            node *temp=n->right;
            delete n;
            return temp;
        }
        else if(n->right==NULL)
        {
            node *temp=n->left;
            delete n;
            return temp;
        }
        else
        {
            node *temp1 = findMin(n->right);
            n->data=temp1->data;
            n->right=_delete(n->right,temp1->data);
        }
    }
    else if(n->data>key)
        n->left=_delete(n->left,key);
    else
        n->right=_delete(n->right,key);

    return n;
}
int main()
{
    node *root=NULL;
    root=_insert(root,8);
    root=_insert(root,3);
    root=_insert(root,10);
    root=_insert(root,1);
    root=_insert(root,6);
    root=_insert(root,14);
    root=_insert(root,4);
    root=_insert(root,7);
    root=_insert(root,13);
    searching(root,7);
    preorder(root);
    root=_delete(root,14);
    cout<<endl;
    preorder(root);
    return 0;
}
