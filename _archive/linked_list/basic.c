#include <stdio.h>
#include <stdlib.h>

// Define the Node struct
typedef struct Node {
  int data;
  struct Node* next;
} Node;

// Create a new node
Node* createNode(int data) {

  Node* newNode = (Node*)malloc(sizeof(Node));

  if (!newNode) {
    printf("Memory allocation failed!\n");
    
    exit(1);
  }

  newNode->data = data;
  newNode->next = NULL;

  return newNode;
}

// Print linked list
void display(Node* node) {

  while (node) {
    printf("%d -> ", node->data);

    node = node->next;
  }
  
  printf("null\n");
}

int main() {
  // creating nodes
  Node* node1 = createNode(3);
  Node* node2 = createNode(5);
  Node* node3 = createNode(13);
  Node* node4 = createNode(2);

  // connecting nodes
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;

  // display list
  display(node1);

  // Free the memory
  free(node1);
  free(node2);
  free(node3);
  free(node4);

  return 0;
}

// Output
// 3 -> 5 -> 13 -> 2 -> null