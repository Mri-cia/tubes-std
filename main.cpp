#include <iostream>
#include "node.h"
#include "initData.h"

using namespace std;

void show(adrNode root){
    cout << "Pre" << endl;
    showPreTraversal(root);
    cout << "Post" << endl;
    showPostTraversal(root);
    cout << "InOrder" << endl;
    showInOrderTraversal(root);
};

int main()
{
    adrNode root;
    adrNode p;


    createTree(root);

    line1440(root);
    //cout << root->children[0]->info.name;

    show(root);

    deleteNode(root, "Sixtus IV");

    show(root);

    return 0;
}
