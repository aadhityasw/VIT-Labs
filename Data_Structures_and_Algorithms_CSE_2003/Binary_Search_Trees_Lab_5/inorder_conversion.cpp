#include<iostream>
#include<stdlib.h>
using namespace std;

template <class temp>
class Node
{
    public :
        temp data;
        Node *left, *right;

        Node(temp d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
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

        void formTree()
        {
            root = new Node<temp>('-');

            root->left = new Node<temp>('-');
            root->left->left = new Node<temp>('+');
            root->left->left->left = new Node<temp>('x');
            root->left->left->right = new Node<temp>('y');
            root->left->right = new Node<temp>('*');
            root->left->right->left = new Node<temp>('2');
            root->left->right->right = new Node<temp>('x');

            root->right = new Node<temp>('+');
            root->right->left = new Node<temp>('*');
            root->right->right = new Node<temp>('/');
            root->right->left->left = new Node<temp>('x');
            root->right->left->right = new Node<temp>('z');
            root->right->right->left = new Node<temp>('y');
            root->right->right->right = new Node<temp>('z');
        }

        void preorder(Node<temp> *ptr)
        {
            if(ptr!=NULL)
            {
                cout<<ptr->data<<'\t';
                preorder(ptr->left);
                preorder(ptr->right);
            }
            return;
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

        void postorder(Node<temp> *ptr)
        {
            if(ptr!=NULL)
            {
                postorder(ptr->left);
                postorder(ptr->right);
                cout<<ptr->data<<'\t';
            }
            return;
        }
};

int main()
{
    BinarySearchTree<char> tree;
    tree.formTree();
    
    cout<<"In-Order traversal : ";
    tree.inorder(tree.root);
    cout<<endl;

    cout<<"Pre-Order traversal : ";
    tree.preorder(tree.root);
    cout<<endl;

    cout<<"Post-Order traversal : ";
    tree.postorder(tree.root);
    cout<<endl;
}
