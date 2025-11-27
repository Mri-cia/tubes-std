#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <iostream>
#include <vector>

using namespace std;

typedef struct Node *adrNode;
typedef struct Bishops infotype;

struct Bishops{
    string name;
    int reign;
    string origin;
};

struct Node{
    infotype info;

    vector<adrNode> children;
};


adrNode createElm(infotype x);
void createTree(adrNode &p);
void insertNode(adrNode &p, adrNode q);
void deleteNode(adrNode &, adrNode q);
adrNode searchNode(adrNode p);
void printNode(adrNode p);
void showPostTraversal(adrNode p);
void showPreTraversal(adrNode p);
void showInOrderTraversal(adrNode p);

#endif // NODE_H_INCLUDED
