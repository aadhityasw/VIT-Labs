#include<iostream>
#include<stdlib.h>
using namespace std;

template <class temp>
class Node
{
    public :
        temp data;
        Node *parent, *left, *right;
};

template <class temp>
class BinarySearchTree
{
    public :
        Node<temp> *root, *ptr;

        BinarySearchTree()
        {
            root = NULL;
        }

        void insertNode(temp d)
        {
            if(root==NULL)
            {
                root = new Node<temp>();
                root->data = d;
                root->parent = NULL;
                root->left = NULL;
                root->right = NULL;
            }
            else
            {
                ptr = root;
                bool flag = true;

                Node<temp> *newnode = new Node<temp>();
                newnode->data = d;
                newnode->left = NULL;
                newnode->right = NULL;

                while(ptr!=NULL && flag==true)
                {
                    if(d > ptr->data)
                    {
                        if(ptr->right == NULL)
                        {
                            ptr->right = newnode;
                            newnode->parent = ptr;
                            flag = false;
                        }
                        else
                        {
                            ptr = ptr->right;
                        }
                    }
                    else
                    {
                        if(ptr->left == NULL)
                        {
                            ptr->left = newnode;
                            newnode->parent = ptr;
                            flag = false;
                        }
                        else
                        {
                            ptr = ptr->left;
                        }
                    }
                    
                }
            }
        }

        void inorder(Node<temp> *ptr)
        {
            if(ptr!=NULL)
            {
                inorder(ptr->left);
                cout<<ptr->data<<'\t';
                inorder(ptr->right);
            }
            return;
        }

        void mirrorTree(Node<temp> *node)
        {
            if(node->left==NULL && node->right==NULL)
            {
                return;
            }
            else
            {
                ptr = node->left;
                node->left = node->right;
                node->right = ptr;
                if(node->left!=NULL)
                {
                    mirrorTree(node->left);
                }
                if(node->right!=NULL)
                {
                    mirrorTree(node->right);
                }
            }
        }
};

int main()
{
    BinarySearchTree<int> tree;
    int num, i, n;
    cout<<"Enter the number of elements to be entered : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++)
    {
        cin>>num;
        tree.insertNode(num);
    }
    cout<<"The in-order traversal of the entered tree is as follows : ";
    tree.inorder(tree.root);
    cout<<endl;
    tree.mirrorTree(tree.root);
    cout<<"The in-order traversal of the mirror tree is as follows : ";
    tree.inorder(tree.root);
    cout<<endl;
}
