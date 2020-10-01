#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* pointer ;
};
typedef struct node node;

void push(int data, node** stack) {
	node* tmp;
	tmp = malloc(sizeof(node));

	tmp->data = data;
	tmp->pointer = *stack;

	(*stack) = tmp;
}

void pop(node** stack) {
	if (*stack != NULL) {
		printf("Element Popped: %d", (*stack)->data);
		*stack = (*stack)->pointer;
	}
	else {
		printf("Stack Empty");
	}
}

void printall(node* stack) {
	if (stack != NULL) {
		printf("Stack elements are :\n");
		while (stack->pointer != NULL) {
			printf("%d\n", stack->data);
			stack = stack->pointer;
		}
		printf("%d\n", stack->data);

	}
	else
	{
		printf("Empty stack\n");
	}
}

int main() {
	node* root = malloc(sizeof(node));
	root->data = 3;
	root->pointer = NULL;
	push(4, &root);
	push(7, &root);
	push(12, &root);
	printall(root);
	pop(&root);
	printall(root);

	return 0;
}
