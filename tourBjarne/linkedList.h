#ifndef __LINKED_LIST__
#define __LINKED_LIST__
class NodeT {
public:
  int value;
  NodeT *next;
};
class LinkedList {
public:
  NodeT *ptr;
  LinkedList(int);
  void showList();
  void addNode(int);
};
#endif
