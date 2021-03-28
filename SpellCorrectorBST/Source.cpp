#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include "TreeNode.h"
#include "BinarySearchTree.h"
#include "Spell.h"
int main() {
	Spell sc;
	sc.loadDictionary();
	if (sc.spellChecker("is"))
		cout << "Correct Spell" << endl;
	else {
		cout << "Worng Spell" << endl;
	}


	system("pause");
	return 0;
}