#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
  char data;
  struct _Node* next;
} Node;

Node createNode(char data) {

  Node node;

  node.data = data;
  node.next = NULL;

  return node;
} 

int main(int argc, char const *argv[]) {

  // creating nodes
  Node node1 = createNode('A');
  Node node2 = createNode('B');
  Node node3 = createNode('C');

  // connecting nodes
  node1.next = &node2;
  node2.next = &node3;
  node3.next = NULL;

  // display list
  Node* currentNode = &node1;

  while (currentNode) {
    printf("%c -> ", currentNode->data);

    currentNode = currentNode->next;
  }
  printf("null\n");

  return 0;
}

// Output
// A -> B -> C -> null