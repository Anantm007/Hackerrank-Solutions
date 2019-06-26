/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
    bool checkBST(Node *root, int min=-100000, int max=100000)
{
    if(root==NULL)
    return true;
    
    if(root->data>min && root->data<max && checkBST(root->left,min,root->data) && checkBST(root->right,root->data,max))
    return true;
    
    return false;
    
}
