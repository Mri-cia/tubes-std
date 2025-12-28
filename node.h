#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <iostream>
#include <vector>

#define CLEAR_CLI system("cls")
#define PAUSE_CLI system("pause")

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


void createTree(adrNode &root);
adrNode createElm(string name, string type, int reign, string origin);
void insertNode(adrNode &root, adrNode p, string name);
void deleteNode(adrNode &root, string name);
adrNode searchNode(adrNode root, string name);
void printNode(adrNode root);
void showPostTraversal(adrNode root);
void showPreTraversal(adrNode root);
void showInOrderTraversal(adrNode root);
void combineRootAsParent(adrNode &mainRoot, adrNode newRoot, string newParent);
void combineRootAsChild(adrNode &mainRoot, adrNode newRoot, string parent);

#endif // NODE_H_INCLUDED
