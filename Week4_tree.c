#include<stdio.h>
#include "tree.h"

int main() {
	TreeNode* n1 = CreateNode(1);
	TreeNode* n2 = CreateNode(2);
	TreeNode* n3 = CreateNode(3);
	TreeNode* n4 = CreateNode(4);
	TreeNode* n5 = CreateNode(5);
	TreeNode* n6 = CreateNode(6);
	TreeNode* n7 = CreateNode(7);

	//Make Tree
	MakeTree(n1, n2, n3);
	MakeTree(n2, n4, n5);
	MakeTree(n3, n6, n7);

	printf("Preorder_iteration\t\t: ");
	Preorder_iter(n1);
	printf("\n");

	printf("inorder_iteration\t\t: ");
	Inorder_iter(n1);
	printf("\n");

	printf("Postorder_iteration\t\t: ");
	Postorder_iter(n1);
	printf("\n");

	//   deleteTree(n1#include<stdio.h>
#include "tree.h"

	int main() {
		TreeNode* n1 = CreateNode(1);
		TreeNode* n2 = CreateNode(2);
		TreeNode* n3 = CreateNode(3);
		TreeNode* n4 = CreateNode(4);
		TreeNode* n5 = CreateNode(5);
		TreeNode* n6 = CreateNode(6);
		TreeNode* n7 = CreateNode(7);

		//Make Tree
		MakeTree(n1, n2, n3);
		MakeTree(n2, n4, n5);
		MakeTree(n3, n6, n7);

		printf("Preorder_iteration\t\t: ");
		Preorder_iter(n1);
		printf("\n");

		printf("inorder_iteration\t\t: ");
		Inorder_iter(n1);
		printf("\n");

		printf("Postorder_iteration\t\t: ");
		Postorder_iter(n1);
		printf("\n");

		//   deleteTree(n1);

		return 0;

	}

	return 0;

}