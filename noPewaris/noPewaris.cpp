#include <iostream>
using namespace std;

class baseclass final {
public:
	virtual void perkenalan() final {
		cout << "Halo saya function dari base class";
	}
};

