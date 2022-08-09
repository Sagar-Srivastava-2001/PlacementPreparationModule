/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int floorInBST(TreeNode<int> * root, int x)
{
    int floor = -1;
    while(root)
    {
        if(root->val == x){
            floor = x;
            return floor;
        }
        
        if(root->val > x){
            root = root->left;
        }
        else{
            floor = root->val;
            root = root->right;
        }
    }
    return floor;
}
