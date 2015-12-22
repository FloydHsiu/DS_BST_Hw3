#include <iostream>

struct node{
	int data;
	struct node *left_subtree;
	struct node *right_subtree;
};

struct data_invoke{//用來確認level-order的array裡的值是否為有效值
	int data;
	bool invoke;
};

typedef struct node leaf;
typedef struct data_invoke data_invoke;

class BST{
public:
	BST();
	bool Push(int data);
	bool Pop();
	bool IsEmpty();
	leaf* Top(); 
	void printBST();
	void printInLevel();
	void computerize(int data);
	int TreeDegree();

private:
	static void printBST(leaf *node);
	static bool IsExistData(leaf *node, int data);
	static leaf* InsertRecursion(leaf *node, int data);
	static leaf* deleteRecursion(leaf *node, int data);
	static leaf* GetMax(leaf *node);
	static void printInLevel(data_invoke *a, leaf *node, int n);
	static leaf* GetNode(leaf *node, int data);
	static void computerize(int *result, leaf *node);
	static void TreeDegree(leaf *node, int *max, int degree);
	leaf *root;
};