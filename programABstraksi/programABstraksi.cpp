#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y;

public:

	//methos untuk mengisi nilai
	//private member
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
	//menampilkan nilai
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
}; 
