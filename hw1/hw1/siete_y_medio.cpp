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
	srand((time(0)));
	std::cout << "Welcome to Siete Y Medio!" << std::endl;
	Hand a;
	a.addCard(Card());
	std::cout << a.tally_hand_total() << std::endl;
	//int x = a.tally_hand_total();
	a.addCard(Card());
	//int x = a.tally_hand_total();
	std::cout << a.tally_hand_total() << std::endl;
	a.addCard(Card());
	//int x = a.tally_hand_total();
	std::cout << a.tally_hand_total() << std::endl;
   return 0;
}
