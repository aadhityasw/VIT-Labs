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

        void insertNode()
        {
            temp d;
            cout<<"Enter the data to be inserted into the tree : ";
            cin>>d;

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
                            cout<<"The entered element has been inserted into the tree."<<endl;
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
                            cout<<"The entered element has been inserted into the tree."<<endl;
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

        bool search(Node<temp> *ptr, temp d)
        {
            if(ptr==NULL)
            {
                return(false);
            }
            else
            {
                if(ptr->data == d)
                {
                    return(true);
                }
                else if(ptr->data > d)
                {
                    return(search(ptr->left, d));
                }
                else
                {
                    return(search(ptr->right, d));
                }
            }
        }

        void deleteNode(Node<temp> *ptr, temp d)
        {
            if(ptr==NULL)
            {
                cout<<"The entered element cannot be found."<<endl;
                return;
            }
            else
            {
                if(ptr->data > d)
                {
                    deleteNode(ptr->left, d);
                    return;
                }
                else if(ptr->data < d)
                {
                    deleteNode(ptr->right, d);
                    return;
                }
                else
                {
                    Node<temp> *ptr1;
                    if(ptr->right!=NULL)
                    {
                        ptr1 = ptr->right;
                        while(ptr1->left!=NULL)
                        {
                            ptr1 = ptr1->left;
                        }
                        ptr->data = ptr1->data;
                        deleteNode(ptr->right, ptr->data);
                        return;
                    }
                    else if(ptr->left!=NULL)
                    {
                        ptr1 = ptr->left;
                        while(ptr1->right!=NULL)
                        {
                            ptr1 = ptr1->right;
                        }
                        ptr->data = ptr1->data;
                        deleteNode(ptr->left, ptr->data);
                        return;
                    }
                    else
                    {
                        cout<<"Reached the place !!!!!!!!"<<endl;
                        ptr1 = ptr;
                        ptr = ptr->parent;
                        if(ptr->left == ptr1)
                        {
                            ptr->left = NULL;
                        }
                        else
                        {
                            ptr->right = NULL;
                        }
                        cout<<"The entered element has been deleted from the tree."<<endl;
                        free(ptr1);
                    }
                }
            }
        }

        void printOptions()
        {
            cout<<"The avalible options are : "<<endl;
            cout<<"1) Insert a node into the tree."<<endl;
            cout<<"2) Delete a node from the tree."<<endl;
            cout<<"3) In-Order traversal of the tree."<<endl;
            cout<<"4) Pre-Order traversal of the tree."<<endl;
            cout<<"5) Post-Order traversal of the tree."<<endl;
            cout<<"6) Search for an element in the tree."<<endl;
            cout<<"7) Exit"<<endl;
        }
};

int main()
{
    cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\tWelcome\n";
    cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    
    BinarySearchTree<int> tree;
    int cho, num;
    do
    {
        tree.printOptions();
        cout<<"Enter your option : ";
        cin>>cho;
        switch(cho)
        {
            case 1 :
                tree.insertNode();
                break;
            case 2 :
                cout<<"Enter the element to be deleted : ";
                cin>>num;
                tree.deleteNode(tree.root, num);
                break;
            case 3 :
                tree.inorder(tree.root);
                cout<<endl;
                break;
            case 4 :
                tree.preorder(tree.root);
                cout<<endl;
                break;
            case 5 :
                tree.postorder(tree.root);
                cout<<endl;
                break;
            case 6 :
                cout<<"Enter the element to be searched : ";
                cin>>num;
                if(tree.search(tree.root, num))
                {
                    cout<<"The entered element is present in the tree."<<endl;
                }
                else
                {
                    cout<<"The entered element is not present in the tree."<<endl;
                }
                break;
            case 7 :
                cout<<"End of program."<<endl;
                break;
            default :
                cout<<"Invalid Option"<<endl;
        }
        cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    } while (cho!=7);
}
