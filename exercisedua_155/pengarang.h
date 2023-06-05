#pragma once
#ifndef Pengarang_H
#define Pengarang_H
using namespace std;

class pengarang {
public:
	string nama;
	pengarang(string pNama) :nama(pNama) {
		cout << "Anak \"" << nama << "\" \n";
	}
	~penngarang() {
		cout << "Anak \"" << nama << "\" \n";
	}
};
#endif // !Pengarang_H
