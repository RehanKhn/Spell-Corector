#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include "Spell.h"


int Spell::wordCount() {
	return words->length();
}

void Spell::loadDictionary() {
	ifstream inFile;
	string word;
	inFile.open("wordsDictionary.txt");
	int i = 0;
	while (!inFile.eof()) {
		inFile >> word;
		words[i]=word;
		if (!dict.search(word)) {
			dict.insert(word);
		}
		i++;
	}
}


bool Spell::spellChecker(string str) {
	if (dict.search(str))
		return true;
	return false;
}


int Spell::min(int x, int y, int z) {
	int minimum = x;
	if (y <= minimum)
		minimum = y;
	if (z <= minimum)
		minimum = z;
	return minimum;
}


int Spell::levenshtein(string s, int sL, string t, int tL) {
	if (sL == 0)
		return tL;
	if (tL == 0)
		return sL;
	int cost = 0;
	if (s.at(sL - 1) == t.at(tL - 1))
		cost = 0;
	else
		cost = 1;
	return min(levenshtein(s, sL - 1, t, tL) + 1, levenshtein(s, sL, t, tL - 1) + 1, levenshtein(s, sL - 1, t, tL - 1) + cost);
}

void Spell::spellCorrector(string wrongStr) {
	string options[20];
	int optCount = 0;
	int threshod = 1;
	int x = wordCount();
	for (int i = 0; i < x; i++) {
		int cost = 0;
		cost = levenshtein(wrongStr, wrongStr.length(), words[i], words[i].length());
		if (cost <= threshod) {
			options[optCount] = words[i];
			++optCount;
		}
	}
	if (optCount > 0) {
		cout << "Possible Guesses: \n";
		for (int i = 0; i <= optCount; i++) {
			cout << options[i] << endl;
		}
	}
	else {
		cout << "Not Guess Found" << endl;
	}
}




