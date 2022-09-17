#include<iostream>
#define SPACE 10
using namespace std;
class treenode{
  public:
  int value;
  treenode *left;
  treenode *right;
  treenode()
   {
     value=0;
     left=NULL;
     right=NULL;
   }
   treenode(int v)
   {
    value=v;
    left=NULL;
    right=NULL;
    }
  };
 class BST{
  public:
  treenode *root;
BST() {
root=NULL;
};
  bool isTreeempty()
 {
   if(root==NULL){
   return true;
   }else{
   return false;
 }
}
void insertnode(treenode * new_node)
{
	if(root == NULL)
	{
		root = new_node;
		cout<<"Value inserted at root node! "<<endl;
	}
	else
	{
	treenode *temp=root;
	while (temp != NULL)
	{
		if(new_node->value==temp->value)
		{
 			cout<<"Value allready exist "<<"  insert another value ! "<<endl;
 			return;
		}
		else if((new_node->value<temp->value) && (temp->left==NULL))
		{
 			temp->left=new_node;
 			cout<<"Value inserted at the left "<<endl;
 			break;
		}
		else if(new_node->value<temp->value)
		{
			temp=temp->left;
		}
		else if((new_node->value>temp->value) && (temp->right==NULL))
		{
			temp->right=new_node;
			cout<<"value inserted at to the right ! "<<endl;
 			break;
		}
		else
		{
			temp=temp->right;
		}
	}
  }
}
treenode* insertrecursive(treenode *r,treenode *new_node)
{
if(r==NULL)
{
r=new_node;
cout<<"insertion successful"<<endl;
return r;
}
if(new_node->value <r->value)
{
r->left=insertrecursive(r->left,new_node);
}
else if(new_node->value>r->value)
{
r->right=insertrecursive(r->right,new_node);
}
else
{
cout<<"no duplicate values allowed!"<<endl;
return r;
}
return r;
}
void print2D(treenode *r,int space){
if(r==NULL)
return;
space+=SPACE;
print2D(r->right,space);
cout<<endl;
for(int i=SPACE;i<space;i++)
cout<<" ";
cout<<r->value<<"\n";
print2D(r->left,space);
}
void printpreorder(treenode *r)
{
if (r==NULL)
return;
cout<<r->value<<" ";
printpreorder(r->left);
printpreorder(r->right);
}
void printinorder(treenode *r)
{
if(r==NULL)
return;
printinorder(r->left);
cout<<r->value<<" ";
printinorder(r->right);
}
void printpostorder(treenode *r)
{
if(r==NULL)
return;
printpostorder(r->left);
printpostorder(r->right);
cout<<r->value<<" ";
}
treenode *interativesearch(int v)
{
if(root==NULL)
{
return root;
}
else
{
treenode *temp=root;
while(temp!=NULL)
{
if(v==temp->value)
{
return temp;
}
else if(v<temp->value)
{
temp=temp->left;
}
else
{
temp=temp->right;
}
}
return NULL;
}
}
treenode *recursivesearch(treenode *r,int val){
if(r==NULL || r->value==val)
return r;
else if(val<r->value)
return recursivesearch(r->left,val);
else
return recursivesearch(r->right,val);
}
int height(treenode *r){
if(r==NULL)
return -1;
else {
int lheight=height(r->left);
int rheight=height(r->right);
if(lheight>rheight)
return(lheight +1);
else return(rheight +1);
}
}
void printgivenlevel(treenode *r,int level){
if(r==NULL)
return;
else if(level==0)
cout<<r->value<<" ";
else
{
printgivenlevel(r->left,level -1);
printgivenlevel(r->right,level -1);
}
}
void printgivenorderBFS(treenode *r){
int h=height(r);
for(int i=0;i<=h;i++)
printgivenlevel(r,i);
}
treenode *minvaluenode(treenode *node){
treenode *current=node;
while(current->left!=NULL){
current=current->left;
}
return current;
}
treenode *deletenode(treenode *r,int v){
if(r==NULL){
return NULL;
}
else if(v<r->value){
r->left=deletenode(r->left,v);
}
else if(v>r->value){
r->right=deletenode(r->right,v);
}
else{
if(r->left==NULL){
treenode *temp=r->right;
delete r;
return temp;
}
else if(r->right==NULL){
treenode *temp=r->left;
delete r;
return temp;
}
else
{
treenode *temp=minvaluenode(r->right);
r->value=temp->value;
r->right=deletenode(r->right,temp->value);
}
}
return r;
}
};

 int main()
 {
BST obj;
  int option,val;
  do{
    cout<<"Enter Operation :"<<endl;
    cout<<"Select Option Number or Enter Zero to Exit :"<<endl;
   cout<<"1.Insert Node"<<endl;
   cout<<"2.Search node"<<endl;
   cout<<"3.Delete Node"<<endl;
   cout<<"4.Print BST Values"<<endl;
   cout<<"5.Exit Program"<<endl;
   cout<<"0.Exit"<<endl;
   cin>>option;
treenode *new_node = new treenode();
switch(option)
  {
 case 0:
 break; 
 case 1:
 cout<<"Insert"<<endl;
cout<<"enter the value of treenode to insert in BST;";
cin>>val;
new_node->value=val;
obj.root=obj.insertrecursive(obj.root,new_node);
cout<<endl;
break;
case 2:
cout<<"search"<<endl;
cout<<"enter the value to be search:";
cin>>val;
new_node=obj.recursivesearch(obj.root,val);
if(new_node!=NULL){
cout<<"value found"<<endl;
}
else
{
cout<<"value not found"<<endl;
}
break;
case 3:
cout<<"delete"<<endl;
cout<<"enter value to delete in BST:";
cin>>val;
new_node=obj.interativesearch(val);
if(new_node!=NULL){
obj.deletenode(obj.root,val);
cout<<"value deleted:";
}
else
{
cout<<"value not found:";
}
break;
case 4:
cout<<"print 2D:"<<endl;
obj.print2D(obj.root,5);
cout<<endl;
cout<<"print level order BFS:\n";
obj.printgivenorderBFS(obj.root);
cout<<endl;
break;
case 5:
cout<<"tree height"<<endl;
cout<<"height:"<<obj.height(obj.root)<<endl;
break;
case 6:
//system("cls");
break;
default:
cout<<"enter proper option number"<<endl;
}
}while(option!=0);
return 0;
}
