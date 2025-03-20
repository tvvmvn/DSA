#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
  char data;
  struct _Node* left;
  struct _Node* right;
} Node;

Node createNode(char data) {

  Node node;

  node.data = data;
  node.left = NULL;
  node.right = NULL;

  return node;
}

void preOrderTraverse(Node* node) {
  
  if (node == NULL) {
    return;
  }

  printf("%c ", node->data);

  preOrderTraverse(node->left);
  preOrderTraverse(node->right);
};

int main(int argc, char const *argv[]) {

  // creating nodes
  Node root = createNode('R');
  Node nodeA = createNode('A');
  Node nodeB = createNode('B');
  Node nodeC = createNode('C');
  Node nodeD = createNode('D');
  Node nodeE = createNode('E');

  // connecting nodes
  root.left = &nodeA;
  root.right = &nodeB;

  nodeA.left = &nodeC;
  nodeA.right = &nodeD;

  nodeB.left = &nodeE;

  // traverse tree
  preOrderTraverse(&root);

  return 0;
}

// Output
// R A C D B E
