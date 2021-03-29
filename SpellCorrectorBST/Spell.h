#ifndef Spell_H
#define Spell_H
#pragma once
#include "BinarySearchTree.h"
class Spell
{
public:
	BinarySearchTree dict;
	string words[1000];
	int wordCount();
	void loadDictionary();
	bool spellChecker(string);
	void spellCorrector(string);
	int levenshtein(const string s, int sL, const string t, int tL);
	int min(int, int, int);
	//void checkFile(string);
};

#endif