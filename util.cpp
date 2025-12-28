#include <iostream>
#include <limits>
#include "node.h"

void clearInError(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void show(adrNode root){
    cout << "Pre" << endl;
    showPreTraversal(root);
    cout << "Post" << endl;
    showPostTraversal(root);
    cout << "InOrder" << endl;
    showInOrderTraversal(root);
}


void lookList(adrNode root){
    int in = 0;
    bool correctIn;

    do {
        correctIn = true;
        CLEAR_CLI;
        cout << "====== Cara melihat =======" << endl;
        cout << "1. Pre-Traverse" << endl;
        cout << "2. Post-Traverse" << endl;
        cout << "3. In-Traverse" << endl;
        cout << "0. Kembali" << endl;
        cout << "==========================" << endl;
        cout << "Pilihan menu: ";
        cin >> in;
        CLEAR_CLI;

        if(cin.fail()){
            clearInError();
            cout << "Invalid type!" << endl;
            PAUSE_CLI;
            correctIn = false;
        } else{
            switch(in){
            case 1:
                showPreTraversal(root);
                break;
            case 2:
                showPostTraversal(root);
                break;
            case 3:
                showInOrderTraversal(root);
                break;
            case 0:
                return;
            default:
                correctIn = false;
                cout << "Salah memilih menu; Enter untuk submit ulang" << endl;
                PAUSE_CLI;
                break;
            }
        }


    } while(!(correctIn));

    PAUSE_CLI;
}
