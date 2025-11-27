#include "node.h"

using namespace std;

adrNode createElm(infotype x){
    adrNode p = new Bishops;
    p->info = x;
    p->children = nullptr;
    return p;
};

void createTree(Node &N){
   N->info = nullptr;
};

void insertNode(adrNode &p, adrNode q){

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
