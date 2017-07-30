#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int getInt(string);
int getInt(string, int, int);
int rollDice(int numSides, int numDice);

void main() {

	int race;
	int npcClass;
	int roll = 0;
	int str = 0;
	int dex = 0;
	int dexBase = 0;
	int con = 0;
	int intel = 0;
	int wis = 0;
	int cha = 0;

	cout << "This program was devloped under the System Reference Document 5.1 and the Open Gaming License, Version 1.0a\n\n";
	cout << "Some content is used under permission from Wizards of the Coast, Inc (Wizards). Copyright 2000. All Rights Reserved.";

	cout << "\nPick a race: " << endl;
	cout << "\n1. Human\n2.Elf\n3.Dwarf\n4.Halfling" << endl;
	cin >> race;

	cout << endl << endl;

	cout << "\nPick a class" << endl;
	cout << "\n1. Mage\n2.Assassin\n3.Bandit\n4.Guard" << endl;
	cin >> npcClass;

	if (npcClass = 1) {
		cout << "\nYour class, Mage, has no armor\n";
		dexBase = 0;
	}
	else if (npcClass = 2) {
		cout << "\nYour class, Assassin, has Studded Leather armor\n";
		cout << "\nStudded Leather gets 12 base for DEX + 3d6 roll\n";
		dexBase = 12;
	}
	else if (npcClass = 3) {
		cout << "\nYour class, Bandit, has Leather armor\n";
		cout << "\nLeather gets 11 base for DEX + 3d6 roll\n";
		dexBase = 13;
	}
	else if (npcClass = 4) {
		cout << "\nYour class, Guard, gets Chainmail.\n";
		cout << "\nChainmail gets 13 bse for DEX + 3d5 roll\n";
		dexBase = 14;
	}

	cout << "Rolling some dice to find your ability scores";

	srand(time(0)); //seed generator

	for (int x = 1; x <= 6; x++) {
		cout << "The roll is: " << rollDice(6, 3) << endl;
	}
	system("pause");
} // end of main

int getInt(string prompt) {
	string userInput;
	int value = 0;
	while (true) {
		cout << prompt;
		getline(cin, userInput);
		try {
			value = stoi(userInput); //convert string to integer
			break;
		} //end of try
		catch (exception ex) {
			cout << "\n***ERROR - INTEGERS ONLY!\nTry again!\n";
		} //end of catch

	} //end of while
	return value;
} // end of getInt


int getInt(string prompt, int low, int high) {
	int value = 0;
	value = getInt(prompt);
	while (value < low || value > high) {
		cout << "***ERROR - Numbers from " << low << " to " << high << " only!\n";
		value = getInt(prompt);
	} // end of while
	return value;
} // end of getInt string, int, int

int rollDice(int numSides, int numDice) {
	int roll = 0;
	for (int x = 1; x <= numDice; x++) {
		roll += rand() % numSides + 1;
	}
	return roll;
} //end of rollDice