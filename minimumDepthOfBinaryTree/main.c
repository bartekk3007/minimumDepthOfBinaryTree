#include <stdio.h>
#include <limits.h>

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int min(int a, int b)
{
    if (a <= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int DFS(struct TreeNode* root)
{
    if (root == NULL)
    {
        return INT_MAX;
    }
    else if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        return 1 + min(DFS(root->left), DFS(root->right));
    }
}

int minDepth(struct TreeNode* root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return DFS(root);
    }
}

int main(void)
{


    return 0;
}