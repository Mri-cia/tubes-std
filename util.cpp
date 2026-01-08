#include <iostream>
#include <limits>
#include <string>
#include "node.h"

#define BUFFER_TRAP cin.ignore(numeric_limits<streamsize>::max(), '\n')

void clearInError(){
    cin.clear();
    BUFFER_TRAP;
}

void show(adrNode root){
    cout << "Pre" << endl;
    showPreTraversal(root);
    cout << "Post" << endl;
    showPostTraversal(root);
    cout << "InOrder" << endl;
    showInOrderTraversal(root);
}


void lookList(const adrNode &root){
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
                cout << "Salah memilih menu;" << endl;
                PAUSE_CLI;
                break;
            }
        }


    } while(!(correctIn));

    PAUSE_CLI;
}

void addPriest(adrNode &root){
    CLEAR_CLI;
    string nama;
    string type;
    int reign;
    string origin;
    string parent;

    cout << "========== Tambah Imam ==========" << endl;
    cout << "Nama           : " ;
    getline(cin >> ws, nama);
    cout << "Jabatan        : ";
    cin >> type;
    cout << "Lama Mengabdi  : ";
    cin >> reign;
    cout << "Asal           : ";
    cin >> origin;
    cout << "Diberkati oleh : ";
    getline(cin >> ws, parent);

    adrNode p = createElm(nama, type, reign, origin);

    insertNode(root, p, parent);

    clearInError();
}

void editPriest(adrNode &root){
    CLEAR_CLI;
    string nama;
    string type;
    int reign;
    string origin;
    string parent;

    cout << "========== Ubah Data Imam ==========" << endl;
    cout << "Nama           : " ;
    getline(cin >> ws, nama);

    adrNode p = searchNode(root, nama);
    cout << "Jabatan        : ";
    cin >> type;
    cout << "Lama Mengabdi  : ";
    cin >> reign;
    cout << "Asal           : ";
    cin >> origin;

    p->info.type = type;
    p->info.reign = reign;
    p->info.origin = origin;

    clearInError();
}

void deletePriest(adrNode &root){
    CLEAR_CLI;
    string nama;

    cout << "========== Hapus Data Imam ==========" << endl;
    cout << "Nama           : " ;
    getline(cin >> ws, nama);

    deleteNode(root, nama);

    cout << "Deleted " << nama << " Data" << endl;

    PAUSE_CLI;

}

void movePriest(adrNode &root){
    CLEAR_CLI;
    int in = 0;
    string nama;
    adrNode p = nullptr;
    bool correctIn;

    cout << "========== Pindah Data Imam ==========" << endl;
    cout << "Nama Imam          : " ;
    getline(cin >> ws, nama);

    detatchTree(root, nama, p);

    CLEAR_CLI;
    cout << "======================================" << endl;
    cout << "1. Sebagai Parent" << endl;
    cout << "2. Sebagai Child" << endl;
    cout << "======================================" << endl;
    cout << "Pilihan: " ;
    cin >> in;


    if(cin.fail()){
        clearInError();
        cout << "Invalid type!" << endl;
        PAUSE_CLI;
        correctIn = false;
    } else{
        switch(in){
        case 1:
            combineRootAsParent(root, p);
            break;
        case 2:
            CLEAR_CLI;
            cout << "========== Nama Imam Sebelum ==========" << endl;
            cout << "Nama Imam          : " ;
            getline(cin >> ws, nama);
            combineRootAsChild(root, p, nama);
            break;
        default:
            correctIn = false;
            cout << "Salah memilih menu;" << endl;
            PAUSE_CLI;
            break;
        }
    }
}

void searchPriest(adrNode root){
    CLEAR_CLI;
    string name;
    adrNode p = new Node;
    cout << "Imam yang dicari : ";
    cin >> name;
    p = searchNode(root, name);
    printNode(p);
};
