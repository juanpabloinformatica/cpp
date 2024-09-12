#include <iostream>
using namespace std;

typedef struct Node Node;
struct Node {
  int value;
  struct Node *next;
};

class NodeT {
public:
  int value;
  NodeT *next;
  NodeT(int value) : value{value}, next{NULL} {}
};
class LinkedList {
public:
  NodeT *ptr;
  LinkedList() : ptr{NULL} {}
  void showList() {
    NodeT *temp = this->ptr;
    while (temp != NULL) {
      cout << temp->value << "\n";
      temp = temp->next;
    }
  }
  void addNode(int value) {
    NodeT *newNode = new NodeT(value);
    // cout << newNode.value;
    if (this->ptr == NULL) {
      this->ptr = newNode;
    } else {
      // how can i make that temporal pointer
      NodeT *temp = this->ptr;
      while (temp->next != NULL) {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }
};

int main() {
  LinkedList list = LinkedList();
  list.addNode(1);
  list.addNode(2);
  list.addNode(3);
  list.addNode(4);
  list.addNode(5);
  list.showList();

  // cout << "hello world";
  // Node *new_node = new Node();
  // new_node->value = 1;
  // cout << new_node->value;
}
