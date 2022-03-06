# Binary Search Trees (Lab 5)


### 1. [BST](./Binary_Search_Trees_Lab_5/bst.cpp)

Implement all the major operations involved in a Binary Search Tree


### 2. [Inorder Conversions](./Binary_Search_Trees_Lab_5/inorder_conversion.cpp)

Consider the following mathematical expression given in Inorder form, `(x+y) -2x -x*y +y/z` . Output the Pre-Order and the Post-Order form of the expression using BST.


### 3. [Root to Leaf Path](./Binary_Search_Trees_Lab_5/root_to_leaf_path.cpp)

We'll define a "root-to-leaf path" to be a sequence of nodes in a tree starting with the root node and proceeding downward to a leaf (a node with no children). We'll say that an empty tree contains no root-to-leaf paths. So for example, the following tree has exactly four root-to-leaf paths: 

            5
           / \
          4   8 
         / \   \
        11 13   4
       /  \      \
      7    2      1

For this problem, we will be concerned with the sum of the values of such a path -- for example, the sum of the values on the 5-4-11-7 path is 5 + 4 + 11 + 7 = 27. Now, given a binary search tree and a value `k` return true if the tree has a root-to-leaf path such that adding up all the values along the path equals the given value `k`. Return false if no such path can be found.  Given a Binary Search Tree, print all of its Root-to-leaf paths using a recursive function.


### 4. [BST Mirror](./Binary_Search_Trees_Lab_5/bst_mirror.cpp)

Given a BST T’, the mirror of a T’, denoted by m(T’); is also a Binary Search tree where for all nodes x and y, if y belongs to the left subtree of x, then the key at y is greater than the key at x, and if y belongs to the right subtree of x, then the key at y is lesser than the key at x. In short, the roles of the left subtree and right subtree are swapped.  Implement such a BST. 

