#include <iostream>
#include <string>
using namespace std;

#include "JANTUNG.h"
#include "MANUSIA.h"

int main() {
	manusia* varManusia = new manusia("jono");
	delete varManusia;
	return 0;
}