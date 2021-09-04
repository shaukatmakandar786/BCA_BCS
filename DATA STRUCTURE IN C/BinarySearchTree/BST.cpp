
#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

void createTree(int);
void inorder(struct node*);
void preorder(struct node*);
struct node *root;
int main(int argc, char const *argv[])
{
    root=NULL;

    createTree(10);
    createTree(20);
    createTree(7);
    createTree(8);
    createTree(3);
    createTree(15);
    createTree(4);
     createTree(2);

    inorder(root);
    cout<<"\n\n\n";
    preorder(root);

    return 0;
}
void inorder(struct node *t)
{
   
    if(t!=NULL)
    {
        
        inorder(t->left);
        cout<<t->data<<"  ";
        inorder(t->right);
    }
}
void preorder(struct node *t)
{
    if(t!=NULL)
    {
        cout<<t->data<<" ";
        preorder(t->left);
        preorder(t->right);
    }
}
void createTree(int no)
{
    struct node *t,*r;
    r=t=NULL;
    if(root==NULL)
    {
        root=new node;
        root->data=no;
        root->left=NULL;
        root->right=NULL;
        
    }
    else
    {
        t=new node;
        t->data=no;
        t->left=NULL;
        t->right=NULL;

        r=root;
        while(r!=NULL)
        {
            if(r->data<no)
            {
                if(r->right==NULL)
                {
                    r->right=t;
                    break;
                }
                else{
                    r=r->right;
                }
                
            }
            else{

                if(r->left==NULL)
                {
                    r->left=t;
                    break;
                }
                else{
                    r=r->left;
                }
            }
        }

    }
}