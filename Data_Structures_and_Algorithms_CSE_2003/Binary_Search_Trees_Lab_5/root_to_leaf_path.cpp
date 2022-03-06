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
                    if(d == ptr->data)
                    {
                        cout<<"The element entered is already present in the tree."<<endl;
                        flag = false;
                        break;
                    }
                    else if(d > ptr->data)
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

        void printPaths(Node<temp> *root, temp *arr, int itr)
        {
            if(root->left!=NULL)
            {
                arr[itr] = root->data;
                printPaths(root->left, arr, itr+1);
                arr[itr] = 0;
            }
            if (root->right!=NULL)
            {
                arr[itr] = root->data;
                printPaths(root->right, arr, itr+1);
                arr[itr] = 0;
            }
            if(root->right==NULL && root->left==NULL)
            {
                int i = 0;
                cout<<"Path : ";
                arr[itr] = root->data;
                for(i=0;i<=itr;i++)
                {
                    cout<<arr[i]<<'\t';
                }
                cout<<endl;
                arr[itr] = 0;
            }
            return;
        }

        bool pathFinder(Node<temp> *root, temp k, temp sum)
        {
            bool flag;
            if(root->left!=NULL)
            {
                flag = pathFinder(root->left, k, sum+root->data);
                if(flag)
                {
                    return(flag);
                }
            }
            if (root->right!=NULL)
            {
                flag = pathFinder(root->right, k, sum+root->data);
                if(flag)
                {
                    return(flag);
                }
            }
            if(root->right==NULL && root->left==NULL)
            {
                if((sum+root->data)==k)
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }
            return(flag);
        }        
};

int main()
{
    BinarySearchTree<int> tree;
    int num, k, i, n;
    cout<<"Enter the number of elements to be entered : ";
    cin>>n;
    cout<<"Enter the value of k : ";
    cin>>k;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++)
    {
        cin>>num;
        tree.insertNode(num);
    }
    int *arr = new int[50];
    cout<<"The various paths are : "<<endl;
    tree.printPaths(tree.root, arr, 0);
    bool flag = tree.pathFinder(tree.root, k, 0);
    if(flag)
    {
        cout<<"There exists a root to leaf path with the specfied conditions."<<endl;
    }
    else
    {
        cout<<"There does not exist a root to leaf path with the specfied conditions."<<endl;
    }
}
