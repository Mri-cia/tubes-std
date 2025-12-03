#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <iostream>
#include <vector>

using namespace std;

typedef struct Node *adrNode;
typedef struct Bishops infotype;

struct Bishops{
    string name;
    string type;
    int reign;
    string origin;
};

struct Node{
    infotype info;

    vector<adrNode> children;
};

struct Tree{
    adrNode root;
};


adrNode createElm(infotype x);
void createTree(adrNode &root);
void insertNode(adrNode &root, adrNode p, string name);
void deleteNode(adrNode &, adrNode q);
adrNode searchNode(adrNode p);
void printNode(adrNode p);
void showPostTraversal(adrNode root);
void showPreTraversal(adrNode root);
void showInOrderTraversal(adrNode root);

#endif // NODE_H_INCLUDED
