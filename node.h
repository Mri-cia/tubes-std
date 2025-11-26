#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

using namespace std;

typedef struct Node *adrNode;

struct Bishops{
    string name;
    int reign;
    string origin;
}

struct Node{
    Bishops info;
    adrNode left;
    adrNode right;
};

#endif // NODE_H_INCLUDED
