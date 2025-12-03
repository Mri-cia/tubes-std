#include "node.h"
#include <iostream>
using namespace std;

adrNode createElm(infotype x){
    adrNode p = new Node;
    p->info = x;
    return p;
};

void createTree(adrNode &root){
   root = nullptr;
};

void insertNode(adrNode &root, adrNode p, string name){
    if(root == nullptr){
        root = p;
    }else if(root->info.name == name) {
        root->children.push_back(p);
    }
    for(adrNode child : root->children){
        insertNode(root, p, name);
    }
};

void deleteNode(adrNode &, adrNode q){

};

adrNode searchNode(adrNode p){

};

void printNode(adrNode p){
    cout << "---------------------------" << endl;
    cout << "Nama           : " << p->info.name << endl;
    cout << "Jabatan        : " << p->info.type << endl;
    cout << "Masa Mengabdi  : " << p->info.reign << endl;
    cout << "Asal           : " << p->info.origin << endl;
    cout << "---------------------------" << endl;
};

void showPreTraversal(adrNode p){
    if(root == nullptr){return};

    printNode(root);
    showPostTraversal(root->children);
};

void showPostTraversal(adrNode root){
    if(root == nullptr){return};

    showPostTraversal(root->children);
    printNode(root);
};

void showInOrderTraversal(adrNode p);
