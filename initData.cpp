#include "initData.h"


void line1440(adrNode &root){
    //Tingkat 1
    insertNode(root, createElm("Guillaume d'Estouteville", "Cardinal", 43, "Italy"), "");

    //Tingkat 2
    insertNode(root, createElm("Sixtus IV", "Pope", 13, "Italy"), "Guillaume d'Estouteville");

    //Tingkat 3
    insertNode(root, createElm("Julius III", "Pope", 10, "Italy"), "Sixtus IV");

    //Tingkat 4
    insertNode(root, createElm("Pius III", "Pope", 0, "Italy"), "Julius III");
    insertNode(root, createElm("Raffaele Sansoni Riario", "Cardinal", 17, "Italy"), "Julius III");

    //Tingkat 5
    insertNode(root, createElm("Leo X", "Pope", 8, "Italy"), "Raffaele Sansoni Riario");

    //Tingkat 6
    insertNode(root, createElm("Paul III", "Pope", 15, "Italy"), "Leo X");
    insertNode(root, createElm("Clement VII", "Pope", 11, "Italy"), "Leo X");

    //Tingkat 7
    insertNode(root, createElm("Paul IV", "Pope", 4, "Italy"), "Paul III");
    insertNode(root, createElm("Francesco Pisani", "Cardinal", 43, "Italy"), "Paul III");
    insertNode(root, createElm("Antonio Sanseverino", "Cardinal", 13, "Italy"), "Clement VII");

    //Tingkat 8
    insertNode(root, createElm("Scipione Rebiba", "Cardinal", 36, "Italy"), "Paul IV");
    insertNode(root, createElm("Alfonso Gesuaido di Conza", "Cardinal", 39, "Italy"), "Francesco Pisani");
    insertNode(root, createElm("Giovanni Michele Saraceni", "Cardinal", 32, "Italy"), "Antionio Sanseverio");

};

void linePopeLeoXIV(adrNode &root){

};
