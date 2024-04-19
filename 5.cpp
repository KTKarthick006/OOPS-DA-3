#include <iostream>
using namespace std ;

class vaccine {
public:
    virtual void putVaccine() {
        cout << "Covid Vaccine" << endl;
    }
};

class covaxin : public vaccine {
public:
    void putVaccine() override {
        cout << "Covaxin" << endl;
    }
};

class covishield : public vaccine {
public:
    void putVaccine() override {
        cout << "Covishield" << endl;
    }
};

int main() {
    covaxin cx;
    covishield cs;

    vaccine* o = &cx;
    o->putVaccine();

    o = &cs;
    o->putVaccine();

    return 0;
}