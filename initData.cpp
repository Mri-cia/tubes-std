#include "initData.h"


void dEstoutevilleLinieage(adrNode &root){
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
    insertNode(root, createElm("Alfonso Gesuaido di Conza", "Cardinal", 39, "Italy"), "Francesco Pisani");
    insertNode(root, createElm("Giovanni Michele Saraceni", "Cardinal", 32, "Italy"), "Antionio Sanseverio");

    //Tingkat 9
    insertNode(root, createElm("Saint Pius V", "Pope", 6, "Italy"), "Giovanni Michele Saraceni");

    //Tingkat 10
    insertNode(root, createElm("Innico d'Avalos d'Aragona", "Cardinal", 34, "Italy"), "Saint Pius V");

    //Tingkat 11
    insertNode(root, createElm("Scipione Gonzaga", "Cardinal", 34, "Italy"), "Innico d'Avalos d'Aragona");

    //Tingkat 12
    insertNode(root, createElm("Fabio Biondi da Montalto", "Bishop", 30, "Italy"), "Scipione Gonzaga");

    //Tingkat 13
    insertNode(root, createElm("Urban VIII", "Pope", 21, "Italy"), "Fabio Biondi da Montalto");

    //Tingkat 14
    insertNode(root, createElm("Cosimo de Torres", "Cardinal", 21, "Italy"), "Urban VIII");

    //Tingkat 15
    insertNode(root, createElm("Francesco Maria Brancaccio", "Cardinal", 48, "Italy"), "Cosimo de Torres");

    //Tingkat 16
    insertNode(root, createElm("Miguel Juan Balaguer de Calamasa", "Bishop", 48, "Spain"), "Francesco Maria Brancaccio");

    //Tingkat 17
    insertNode(root, createElm("Alexander VII", "Pope", 48, "Italy"), "Miguel Juan Balaguer de Calamasa");
};

void rebibaLineage(adrNode &root){
    //Tingkat 1
    insertNode(root, createElm("Scipione Rebiba", "Cardinal", 36, "Italy"), "");

};

void clementVIIILineage(adrNode &root){

};
