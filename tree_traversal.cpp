#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

node *create(int val){
	node *temp=new node();
	temp->data=val;
	temp->left=temp->right=NULL;
	return temp;
}

node *insert(struct node *node,int val){
	if(node==NULL) return create(val);
	if(val<node->data)
		node->left=insert(node->left,val);
	if(val>node->data)
		node->right=insert(node->right,val);
	return node;
}

void preorder(struct node *head){
	if(head==NULL)
		return;
	cout<<head->data<<" ";
	preorder(head->left);
	preorder(head->right);
}

void inorder(struct node *head){
	if(head==NULL)
		return;
	inorder(head->left);
	cout<<head->data<<" ";
	inorder(head->right);
}

void postorder(struct node *head){
	if(head==NULL)
		return;
	postorder(head->left);
	postorder(head->right);
	cout<<head->data<<" ";
}

int main(){
	int r,n;
	node *head=new node();
	cout<<"Enter root node: ";
	cin>>r;
	head=create(r);
	cout<<"Enter number of sub-nodes to be inserted:";
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++){
		cout<<"Enter "<<i<<"th node value:";
		cin>>arr[i];
		insert(head,arr[i]);
	}
	cout<<"Preorder: ";
	preorder(head);
	cout<<endl;
	cout<<"Postorder: ";
	postorder(head);
	cout<<endl;
	cout<<"Inorder: ";
	inorder(head);
	cout<<endl;
	return 0;
}
