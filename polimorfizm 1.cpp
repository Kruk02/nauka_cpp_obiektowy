#include <iostream>
using namespace std;

class Pojazd {
public:
    virtual void jedz() {
        cout << "Pojazd jedzie powoli\n";
    }
};

class Samochod : public Pojazd {
public:
    void jedz() override {
        cout << "Samochód jedzie szybko\n" << endl;
    }
};

int main() {
    Pojazd* wskaznik = new Samochod();
    wskaznik->jedz();

    delete wskaznik;
    return 0;
}