#include <iostream>
using namespace std;
class pojazd {
public:
	virtual void jedz() = 0;
};

class rower : public pojazd {
public:
	void jedz() override {
		cout << "\n Rower jedzie powoli";
	}
};
class samochod : public pojazd {
public:
	void jedz() override {
		cout << "\n Samochod jedzie szybko";
	}
};

int main()
{
	pojazd* o1 = new rower;
	pojazd* o2 = new samochod;

	o1->jedz();
	o2->jedz();

	delete o1;
	delete o2;
	return 0;
}
