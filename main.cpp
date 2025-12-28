#include "node.h"

#define CLEAR_CLI system("cls")
#define PAUSE_CLI system("pause")

using namespace std;

void dEstoutevilleLinieage(adrNode &root);

void clearInError();

void show(adrNode root);

void lookList(const adrNode &root);

void addPriest(adrNode &root);

void editPriest();

void deletePriest();



int main()
{
    adrNode root;
    adrNode p;
    int in = -1;
    bool correctIn;

    createTree(root);

    dEstoutevilleLinieage(root);

    do{
        correctIn = true;
        CLEAR_CLI;
        cout << "========== Menu ==========" << endl;
        cout << "1. Lihat daftar suksesi" << endl;
        cout << "2. Tambah imam ke daftar" << endl;
        cout << "3. Edit imam di daftar" << endl;
        cout << "4. Hapus imam dari daftar" << endl;
        cout << "0. Keluar" << endl;
        cout << "==========================" << endl;
        cout << "Pilihan menu: ";
        cin >> in;


        if(cin.fail()){
            clearInError();
            in = -1;
            cout << "Invalid type!" << endl;
            PAUSE_CLI;
        } else{
            switch(in){
            case 1:
                lookList(root);
                break;
            case 2:
                addPriest(root);
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                cout << "Salah memilih menu;" << endl;
                PAUSE_CLI;
                break;
            }
        }

    } while(in != 0);



    return 0;
}
