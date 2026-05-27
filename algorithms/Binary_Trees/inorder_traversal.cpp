# include <bits/stdc++.h>
# include "tree_construction.hpp"

void inorderTraversal(TreeNode* root)
{
    //base case: empty root
    if(!root) return;

    inorderTraversal(root->left); //going left

    cout<<root->data<<" ";

    inorderTraversal(root->right); //going right
}

//Iterative Approach:

/*

1. The iterative approach uses stack data structure hence avoiding recursion. Recursion internally uses call stack. In this method it is manually implemented

2. Algorithm:
            1. Keep going left and push nodes into stack
            2. When null is reached:
                                    - Pop the node
                                    - process the node
                                    - move to right subtree
*/

void inorderTraversal_iterative(TreeNode* root)
{
    stack<TreeNode*>st;
    TreeNode* current= root;

    while(!current||!st.empty())
    {
        //Push all left nodes
        while(!current)
        {
            st.push(current);
            current=current->left;
        }

        //process the top node as now current is null
        current= st.top();
        st.pop();

        cout<<current->data<<" ";

        current=current->right; //move to right subtree

    }

}


int main()
{
    //Build sample BST
    TreeNode* root= buildSampleBST();
    cout<<"Inorder traversal:\n";
    inorderTraversal(root);

    cout<<"Inorder traversal iterative";
    inorderTraversal_iterative(root);

    return 0;
    
}

/*

----------------------------------------------------------------------------------------------------------------------------------------------

1. Traversal Logic: Left-->root-->right

2. Use: In BST it gives sorted order

3. Time complexity: O(n)

4. Space complexity: O(h) due to stack




*/