#include "node.h"

#define CLEAR_CLI system("cls")
#define PAUSE_CLI system("pause")

using namespace std;

void dEstoutevilleLinieage(adrNode &root);

void show(adrNode root);

void lookList(adrNode root);

void addPriest();

void editPriest();

void deletePriest();



int main()
{
    adrNode root;
    adrNode p;
    int in = -1;

    createTree(root);

    dEstoutevilleLinieage(root);

    while(in != 0){
        CLEAR_CLI;
        cout << "====== Menu =======" << endl;
        cout << "1. Lihat daftar suksesi" << endl;
        cout << "2. Tambah imam ke daftar" << endl;
        cout << "3. Edit imam di daftar" << endl;
        cout << "4. Hapus imam dari daftar" << endl;
        cout << "0. Keluar" << endl;
        cin >> in;

        switch(in){
        case 1:
            lookList(root);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            break;
        }
    }



    return 0;
}
