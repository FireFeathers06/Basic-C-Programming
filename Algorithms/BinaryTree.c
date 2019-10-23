#include <stdio.h>
#include <stdlib.h>

//Structure definitions...
struct Node{
	int data;
	struct Node *left,*right;
};
typedef struct Node *Nodeptr;

//Function declarations...
void inorder_rec(Nodeptr root);
void preorder_rec(Nodeptr root);
void postorder_rec(Nodeptr root);
void insert_iter(Nodeptr* root_ref, int data);


//main() starts here...
int main(){

	Nodeptr root = NULL;
	int data;
	int choice;

	do{
		printf("\n===================================MENU=========================================\n\n");
		printf("1. Search/Add Key Value in the binary tree\n");
		printf("2. Display pre-order traversal of the binary tree\n");
		printf("3. Display in-order traversal of the binary tree\n");
		printf("4. Display post-order traversal of the binary tree\n");
		printf("5. Exit program\n");
		printf("\nEnter your Choice:\t");

		scanf("%d",&choice);

		switch(choice){

			case 1:{
				printf("\nEnter the node value:\t");
				scanf("%d",&data);
				insert_iter(&root,data);
			}
			break;

			case 2:{
				printf("Printing the pre-order traversal of the binary tree...\n");
				preorder_rec(root);
			}
			break;

			case 3:{
				printf("Printing the in-order traversal of the binary tree...\n");
				inorder_rec(root);
			}
			break;

			case 4:{
				printf("Printing the post-order traversal of the binary tree...\n");
				postorder_rec(root);
			}
			break;

			case 5:{
				printf("\nGoodbye...\n");
			}
			break;

			default:{
				printf("\nInvalide choice. Please enter a different choice next time...\n");
			}
			break;
		}
	}while(choice!=5);

	return 0;
}
//End of main()...

//Function definitions start here...
void inorder_rec(Nodeptr root){		//This function recursively prints the in-order traversal from the given node of a tree...
	if(root){
		inorder_rec(root->left);
		printf("%d ",root->data);
		inorder_rec(root->right);
	}
}

void preorder_rec(Nodeptr root){	//This function recursively prints the pre-order traversal from the given node of a tree...
	if(root){
		printf("%d ",root->data);
		preorder_rec(root->left);
		preorder_rec(root->right);
	}
}

void postorder_rec(Nodeptr root){	//This function recursively prints the post-order traversal from the given node of a tree...
	if(root){
		postorder_rec(root->left);
		postorder_rec(root->right);
		printf("%d ",root->data);
	}
}

void insert_iter(Nodeptr *root_ref, int data){	//This function searches for a key value in a BST, and inserts the value if it is not present...

	Nodeptr cur  = *root_ref;
	Nodeptr temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->left = temp->right = NULL;

	if( (*root_ref) == NULL){
		*root_ref = temp;
		return;
	}

	while(cur){
		if(cur->data == data){
			printf("Key found in the binary tree\n");
			free(temp);
			return;
		}
		if(data < cur->data){
			if(cur->left){
				cur = cur->left;
			}
			else{
				cur->left = temp;
				break;
			}
		}
		else{
			if(cur->right){
				cur = cur->right;
			}
			else{
				cur->right = temp;
				break;
			}
		}
	}
}
//End of function definitions...

//End of code...