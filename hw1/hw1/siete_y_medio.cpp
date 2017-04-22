#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main(){
   /* --STATEMENTS-- */
	//srand((time(0)));
	//std::cout << "Welcome to Siete Y Medio!" << std::endl;
	//Hand a;
	//a.addCard(Card());
	//std::cout << a.tally_hand_total() << std::endl;
	////int x = a.tally_hand_total();
	//a.addCard(Card());
	////int x = a.tally_hand_total();
	//std::cout << a.tally_hand_total() << std::endl;
	//a.addCard(Card());
	////int x = a.tally_hand_total();
	//std::cout << a.tally_hand_total() << std::endl;
	//a.addCard(Card());
	////int x = a.tally_hand_total();
	//std::cout << a.tally_hand_total() << std::endl;
	//a.addCard(Card());
	////int x = a.tally_hand_total();
	//std::cout << a.tally_hand_total() << std::endl;
	//std::cout << "B card now" << std::endl;
	//Hand b;
	//b.addCard(Card());
	//std::cout << b.tally_hand_total() << std::endl;
	////int x = a.tally_hand_total();
	//b.addCard(Card());
	////int x = a.tally_hand_total();
	//std::cout << b.tally_hand_total() << std::endl;
	//b.addCard(Card());
	////int x = a.tally_hand_total();
	//std::cout << b.tally_hand_total() << std::endl;
	//b.addCard(Card());
	////int x = a.tally_hand_total();
	//std::cout << b.tally_hand_total() << std::endl;
	//b.addCard(Card());
	////int x = a.tally_hand_total();
	//std::cout << b.tally_hand_total() << std::endl;

	Hand player;
	player.addCard(Card());
	std::cout << player.tally_hand_total() << std::endl;
	
	string res;
	std::cout << "Do you want another card (y/n)?  ";
	std::cin >> res;

	while (res == "y" && player.tally_hand_total() < 7.5)
	{
		std::cout << "New card: ";
		player.addCard(Card());
		std::cout << player.tally_hand_total() << std::endl;
	}
   return 0;
}
