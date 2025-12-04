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

void deleteNode(adrNode &root, string name) {
};

adrNode searchNode(adrNode root, string name){
    if(root == nullptr) {
        return nullptr;
    }

    if(root->info.name == name) {
        return root;
    }

    for(adrNode child : root->children){
        adrNode res = searchNode(root, name);
        if(res != nullptr) {
            return res;
        }
    }
    return nullptr;
};

void printNode(adrNode root){
    cout << "---------------------------" << endl;
    cout << "Nama           : " << root->info.name << endl;
    cout << "Jabatan        : " << root->info.type << endl;
    cout << "Masa Mengabdi  : " << root->info.reign << endl;
    cout << "Asal           : " << root->info.origin << endl;
    cout << "---------------------------" << endl;
};

void showPreTraversal(adrNode root){
    if(root == nullptr) return;

    for(adrNode child : root->children){
        printNode(root);
        showPostTraversal(child);
    }
};

void showPostTraversal(adrNode root){
    if(root == nullptr) return;

    for(adrNode child : root->children){
        showPostTraversal(child);
        printNode(root);
    }
};

void showInOrderTraversal(adrNode root){
    if(root == nullptr) return;
    int counter = 0;

    for(adrNode child : root->children){
        if(counter > 0){
            printNode(root);
        }
        showPostTraversal(child);
        printNode(root);
    }
};
