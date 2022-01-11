#ifndef REPLAY_H
#define REPLAY_H
#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include "Exception.h"


using namespace std;
class Replay {
private:
	static const int rig = 8;
	static const int col = 8;
	char replay[rig][col];

	ofstream out;	//per output su file
	ifstream file;	//per input da file

public:
	Replay();
	void setting(string nome_file);
	void print();

	~Replay() {}
};
#endif