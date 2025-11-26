#ifndef BISHOPS_H_INCLUDED
#define BISHOPS_H_INCLUDED

using namespace std;

class Bishops{
private:
    string name;
    int reign;
    string origin;

public:
    Bishops(string i_name, int i_reign, string i_origin);

    void setname();
    string getName();
    void set reign();
    int getReign();
    void set origin();
    string getOrigin();


};

#endif // BISHOPS_H_INCLUDED
