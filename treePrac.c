#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
	struct TreeNode *left;
	char data;
	struct TreeNode *right;
} TreeNode;

int main() {
	int INPUT;
	TreeNode *root, *n1, *n2, *n3 ,*n4, *n5, *n6;
	root = (TreeNode *)malloc(sizeof(TreeNode));
	n1 = (TreeNode *)malloc(sizeof(TreeNode));
	n2 = (TreeNode *)malloc(sizeof(TreeNode));
	n3 = (TreeNode *)malloc(sizeof(TreeNode));
	n4 = (TreeNode *)malloc(sizeof(TreeNode));
	n5 = (TreeNode *)malloc(sizeof(TreeNode));
	n6 = (TreeNode *)malloc(sizeof(TreeNode));

	root -> data = 'A';
	n1 -> data = 'B';
	n2 -> data = 'C';
	n3 -> data = 'D';
	n4 -> data = 'E';
	n5 -> data = 'F';
	n6 -> data =  'G';

	root -> left = n1;
	root -> right = n2;

	n1 -> left = n3;
	n1 -> right = n4;

	n2 -> left = n5;
	n2 -> right = n6;

	n3 -> left = NULL;
	n3 -> right = NULL;
	n4 -> left = NULL;
	n4 -> right = NULL;
	n5 -> left = NULL;
	n5 -> right = NULL;
	n6 -> left = NULL;
	n6 -> right = NULL;

	printf("---------------------------[tree]-----------------------------\n");
	printf("PreOrder : use copy tree\n");
	printf("InOrder : use read value (cres, dcres) in binary search tree \n");
	printf("PostOrder : use delete tree \n--------------------------------------------------------------\n\n");

	while(1) {
		printf("<Input 1 or 2 or 3 for see the tree> \n");
		printf("--------------\n");
		printf("1 : PREORDER\n2 : INORDER\n3 : POSTORDER\n");
		printf("--------------\n\n");

		scanf("%d", &INPUT);

		if(INPUT == 1) {
			printf("\nyour pick : PREORDER\n\n---------------------------\n");
			Pre(root);
			printf("\n---------------------------\n");
		}

		else if(INPUT == 2) {
			printf("\nyour pick : INORDER \n\n---------------------------\n");
			In(root);
			printf("\n---------------------------\n");
		}

		else if(INPUT == 3) {
			printf("\nyour pick : POSTORDER \n\n---------------------------\n");
			Post(root);
			printf("\n---------------------------\n");
		}

		else {
			printf("\nerror : value is not keyword");
			break;
		}
		printf("\ntry again ? (YES : 0 / NO : 1)\n\n");
		scanf("%d", &INPUT);
		if(INPUT == 1) {
			printf ("your pick : NO");
			break;
		} else if(INPUT == 0)
			printf ("\nyour pick : YES\n\n");
		else {
			printf("\nerror : value is not keyword");
			break;
		}
	}

	return 0;

}

void Pre(TreeNode *root) {
	if(root != NULL) {
		printf("[%c] ", root -> data);
		Pre(root -> left);
		Pre(root -> right);
	}
}

void In(TreeNode *root) {
	if(root != NULL) {
		In(root -> left);
		printf("[%c] ", root -> data);
		In(root -> right);
	}
}

void Post(TreeNode *root) {
	if(root != NULL) {
		Post(root -> left);
		Post(root -> right);
		printf("[%c] ", root -> data);
	}
}
