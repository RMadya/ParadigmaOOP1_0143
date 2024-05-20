#include <iostream>
using namespace std;

#include "ANAK.h"
#include "IBU.h"

int main() {
	ibu* varIbu = new ibu("Dini");
	ibu* varIbu2 = new ibu("Novi");
	anak* varAnak1 = new anak("Tono");
	anak* varAnak2 = new anak("Rini");
	anak* varAnak3 = new anak("Dewi");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);

}