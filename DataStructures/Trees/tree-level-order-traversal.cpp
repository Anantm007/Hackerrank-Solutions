
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/
int height(Node *root)
{
    if(root==NULL)
    return 0;
    
    int ls=height(root->left);
    int rs=height(root->right);
    
    return max(ls,rs)+1;
}


void printLevel(Node *root,int k)
{
    if(root==NULL)
    return;
    
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    
    printLevel(root->left,k-1);
    printLevel(root->right,k-1);
}

void levelOrder(Node *root)
{
    int h=height(root);
    
    for(int i=1;i<=h;i++)
    {
        printLevel(root,i);
    
    }
        
}



