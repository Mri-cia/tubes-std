#include "node.h"
#include <iostream>
using namespace std;

void createTree(adrNode &root){
   root = nullptr;
};

adrNode createElm(string name, string type, int reign, string origin){

    adrNode p = new Node;
    p->info.name = name;
    p->info.origin = origin;
    p->info.reign = reign;
    p->info.type = type;
    return p;
};

void insertNode(adrNode &root, adrNode p, string name){
    if(root == nullptr){
        root = p;
    }else if(root->info.name == name) {
        root->children.push_back(p);
    }
    for(adrNode child : root->children){
        insertNode(child, p, name);
    }
};

void deleteSubtree(adrNode node) {
    if (node == nullptr) return;

    for (int i = 0; i < node->children.size(); i++) {
        deleteSubtree(node->children[i]);
    }

    delete node;
}

void deleteNode(adrNode &root, string name) {
    if (root == nullptr) {
        return;
    }

    if (root->info.name == name) {
        deleteSubtree(root);
        root = nullptr;
        return;
    }

    for (int i = 0; i < root->children.size(); i++) {

        if (root->children[i]->info.name == name) {
            deleteSubtree(root->children[i]);

            for (int j = i; j < root->children.size() - 1; j++) {
                root->children[j] = root->children[j+1];
            }

            root->children.pop_back();

            return;
        }

        deleteNode(root->children[i], name);
    }
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
    cout << "Masa Mengabdi  : " << root->info.reign << " Tahun"<< endl;
    cout << "Asal           : " << root->info.origin << endl;
    cout << "---------------------------" << endl;
};

void showPreTraversal(adrNode root){
    if(root == nullptr) return;

    printNode(root);
    for(adrNode child : root->children){
        showPreTraversal(child);
    }
};

void showPostTraversal(adrNode root){
    if(root == nullptr) return;


    for(adrNode child : root->children){
        showPostTraversal(child);
    }
        printNode(root);
};

void showInOrderTraversal(adrNode root){
    if(root == nullptr) return;
    int counter = 0;

    for(adrNode child : root->children){
        if(counter == 1){
            printNode(root);
        }
        showInOrderTraversal(child);
        counter++;
    }
        printNode(root);
};

void combineRootAsParent(adrNode &mainRoot, adrNode newRoot, string newParent){
    adrNode temp = searchNode(newRoot, newParent);
    temp->children[0] = mainRoot;
    mainRoot = temp;
};

void combineRootAsChild(adrNode &mainRoot, adrNode newRoot, string parent){
    adrNode temp = searchNode(mainRoot, parent);
    temp->children[0] = newRoot;
    mainRoot = temp;
};

