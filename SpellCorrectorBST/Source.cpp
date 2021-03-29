#include<iostream>
#include<string>
#include<fstream>
using namespace std;

#include "Spell.h"
int main() {
	string word;
	cout << "Enter a word: ";
	cin >> word;
	Spell sc;
	sc.loadDictionary();

	if (sc.spellChecker(word))
		cout << "Correct Spell" << endl;
	else {
		cout << "Worng Spell" << endl;
		sc.spellCorrector(word);
	}
	
	
	system("pause");
	return 0;
}