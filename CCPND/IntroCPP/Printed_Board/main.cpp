
//
#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

enum class State { Kempty, Kobstcale };
// commit the file
vector<State> ParseLine(string line) {
	vector <State> type;
 	istringstream sline(line);
	int n;
	char c;
	while (sline >> n >> c) {  
		if (n == 0) {
			type.push_back(State::Kempty);
		}
		else {
			type.push_back(State::Kobstcale);
		}
	}
	return type;
}

vector<vector<State>> ReadBoardFile(string path) {
	vector<vector<State>> board;
	// Read one line call the 
	string line;
	fstream myfile(path);
	if (myfile) {
		string line;
		while (getline(myfile, line)) {
			vector<State> row = ParseLine(line);
			board.push_back(row);
		}
	}
	return board;
}

string CellString(State cell) {
	switch (cell) {
	case State::Kobstcale:
		return "1";
	case State::Kempty:
		return "0";
	}
}

void PrintBoard(const vector<vector<State>> board) { 
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++) {
			cout << CellString(board[i][j]);
		}
		cout << "\n";
	}
}

int main()
{   
	std::cout << "Hello World!\n"; 
	auto board = ReadBoardFile("D:\\course\\udacity\\CPP_Nanodegreecodes\\SAUdacityCppNanodegree-master\\lesson_examples\\Foundations\\1.board");
	PrintBoard(board) ;
}


