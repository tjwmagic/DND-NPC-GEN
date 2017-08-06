#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int getInt(string);
int getInt(string, int, int);
int rollDice(int numSides, int numDice);

void main() {
	srand(time(0)); //seed generator
	const int speed = 30;

	// Race-Class
	int race;
	int npcClass;

	// Ability Scores
	int roll = 0;
	int str = 0;
	int dex = 0;
	int dexBase = 0;
	int con = 0;
	int intel = 0;
	int wis = 0;
	int cha = 0;
	int hp = 0;
	int arrAbilityScore[6];

	// Name and gender generator
	string dwarfMaleNames[6] = { "Adrik", "Gardain", "Baern", "Oskar", "Flint", "Veit" };
	string dwarfLastNames[6] = { "Balderk", "Gorunn", "Ironfist", "Loderr", "Torunn", "Strakeln" };
	string elfMaleNames[6] = { "Adran", "Erevan", "Hadarai", "Ivellios", "Rolen", "Varis" };
	string elfLastNames[6] = { "Amakiir", "Enna", "Lia", "Holimion", "Meliamne", "Goldpetal" };
	string halflingMaleNames[6] = { "Alton", "Cade", "Cora", "Errich", "Garret", "Milo" };
	string halflingLastNames[6] = { "Goodbarrel", "High-hill", "Tealleaf", "Tosscobble", "Underbough", "Greenbottle" };
	string humanMaleNames[6] = { "Robert", "Travis", "John", "David", "Trampas", "William" };
	string humanLastNames[6] = { "Myers", "Whiteman", "Brightblade", "Strongheart", "Dragonhelm", "Wildor" };

	int genderNumber = 0;

	

	cout << "DND NPC Generator for 5th Edition DND, licensed for public used under the Open Gaming License, Version 1.0a\n";
	cout << "This program was devloped under the System Reference Document 5.1 and the Open Gaming License, Version 1.0a\n";
	cout << "Some content is used under permission from Wizards of the Coast, Inc (Wizards). Copyright 2000. All Rights Reserved.\n\n\n";
	
	cout << "Rolling some dice to find your ability scores\n";

	
	// Roll for ability scores
	for (int x = 1; x <= 6; x++) {
		arrAbilityScore[x] = rollDice(6, 3);
		cout << "The roll is: " << arrAbilityScore[x] << endl;
	}

	int max, randomNumber, i, g; // int 'i' is for the name generator. int 'g' is for the gender generator
	max = 5; // Max number of names to be displayed

	genderNumber = (rand() % 2) + 1;
	cout << "RANDOM GENDER: " << genderNumber << endl;

	// Pick a race for the NPC
	cout << "\nPick a race: " << endl;
	cout << "\n1. Human\n2.Elf\n3.Dwarf\n4.Halfling" << endl;
	cin >> race;

	if (race == 1) {
		for (i = 0; i <= 5; i++) {
			randomNumber = (rand() % max) + 1;
			cout << "RANDOM NUMBER: " << randomNumber << endl;

			cout << "NAME: " << humanMaleNames[randomNumber] << endl;
			cout << "NAME: " << humanLastNames[randomNumber] << endl;

		}
	}

	else if (race == 2) {
		for (i = 0; i <= 5; i++) {
			randomNumber = (rand() % max) + 1;
			cout << "RANDOM NUMBER: " << randomNumber << endl;

			cout << "NAME: " << elfMaleNames[randomNumber] << endl;
			cout << "NAME: " << elfLastNames[randomNumber] << endl;

		}
	}

	else if (race == 3) {
		for (i = 0; i <= 5; i++) {
			randomNumber = (rand() % max) + 1;
			cout << "RANDOM NUMBER: " << randomNumber << endl;

			cout << "NAME: " << dwarfMaleNames[randomNumber] << endl;
			cout << "NAME: " << dwarfLastNames[randomNumber] << endl;

		}
	}

	else if (race == 4) {
		for (i = 0; i <= 5; i++) {
			randomNumber = (rand() % max) + 1;
			cout << "RANDOM NUMBER: " << randomNumber << endl;

			cout << "NAME: " << halflingMaleNames[randomNumber] << endl;
			cout << "NAME: " << halflingLastNames[randomNumber] << endl;

		}
	}

	cout << endl << endl;

	// Pick a class
	cout << "\nPick a class" << endl;
	cout << "\n1. Mage\n2.Assassin\n3.Bandit\n4.Guard" << endl;
	cin >> npcClass;

	
	// Class sorting system.
	if (npcClass = 1) {
		cout << "\nYour class, Mage, has no armor\n";
		dexBase = 0;
		
		cout << "\nRolling 9d8 to find your Mage's HP";
		for (int x = 1; x <= 8; x++) {
			hp = rollDice(8, 9);
		}
		cout << "\nYour HP is: " << hp << endl;

	}
	else if (npcClass = 2) {
		cout << "\nYour class, Assassin, has Studded Leather armor\n";
		cout << "\nStudded Leather gets 12 base for DEX + 3d6 roll\n";
		dexBase = 12;

		cout << "\nRolling 12d8 to find your Assassin's HP";
		for (int x = 1; x <= 11; x++) {
			hp = rollDice(8, 12);
		}
		hp = hp + 24;
		cout << "\nYour HP is: " << hp << endl;
		
	}
	else if (npcClass = 3) {
		cout << "\nYour class, Bandit, has Leather armor\n";
		cout << "\nLeather gets 11 base for DEX + 3d6 roll\n";
		dexBase = 13;

		cout << "\nRolling 2d8 to find your Assassin's HP";
		for (int x = 1; x <= 2; x++) {
			hp = rollDice(8, 2);
		}
		hp = hp + 2;
		cout << "\nYour HP is: " << hp << endl;
	}
	else if (npcClass = 4) {
		cout << "\nYour class, Guard, has Chainmail armor.\n";
		cout << "\nChainmail gets 13 bse for DEX + 3d6 roll\n";
		dexBase = 13;
		
		cout << "\nRolling 12d8 to find your Assassin's HP";
		for (int x = 1; x <= 2; x++) {
			hp = rollDice(8, 2);
		}
		hp = hp + 2;
		cout << "\nYour HP is: " << hp << endl;
	}



	system("pause");
} // end of main

// get int to ensure int is a INTEGER ONLY
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

// getInt to find low and high values
int getInt(string prompt, int low, int high) {
	int value = 0;
	value = getInt(prompt);
	while (value < low || value > high) {
		cout << "***ERROR - Numbers from " << low << " to " << high << " only!\n";
		value = getInt(prompt);
	} // end of while
	return value;
} // end of getInt string, int, int


// random dice roll 
int rollDice(int numSides, int numDice) {
	int roll = 0;
	for (int x = 1; x <= numDice; x++) {
		roll += rand() % numSides + 1;
	}
	return roll;
} //end of rollDice