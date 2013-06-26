// Program: Main.cpp

#include "structures.h"
#include "print_table.h"
#include "deal.h"
#include "new_deck.h"
#include "ranking.h"
#include "get_empty.h"
#include "round_0.h"
#include "round_1.h"
#include "win_percent.h"
#include "expected_value.h"
#include <time.h>

int main()
{	
	// Declaration of the array "deck" with 52 "card"s
	table mytable;
	deck mydeck;
	srand(time(0));
	
	mytable.human = 2;
	mytable.dealer = 0;
	mytable.plays = 0;
	
	mytable.player[0].empty = 0;
	mytable.player[0].name = "Pigeon";
	mytable.player[0].money = 1000;
	mytable.player[0].passive = 0;
	mytable.player[0].loose = 0;
	mytable.player[0].personality.passive = -1;
	mytable.player[0].personality.loose = -1;
	
	mytable.player[1].empty = 0;
	mytable.player[1].name = "Turtle";
	mytable.player[1].money = 1000;
	mytable.player[1].passive = 0;
	mytable.player[1].loose = 0;
	mytable.player[1].personality.passive = -.95;
	mytable.player[1].personality.loose = -.95;	
		
	mytable.player[2].empty = 0;
	mytable.player[2].money = 1000;
	mytable.player[2].name = "You";
	mytable.player[2].passive = 0;
	mytable.player[2].loose = 0;
		
	mytable.player[3].empty = 0;
	mytable.player[3].money = 1000;
	mytable.player[3].name = "Dog";
	mytable.player[3].passive = 0;
	mytable.player[3].loose = 0;
	mytable.player[3].personality.passive = -.9;
	mytable.player[3].personality.loose = -.9;
		
	mytable.player[4].empty = 0;
	mytable.player[4].money = 1000;
	mytable.player[4].name = "Rooster";
	mytable.player[4].passive = 0;
	mytable.player[4].loose = 0;
	mytable.player[4].personality.passive = -.85;
	mytable.player[4].personality.loose = -.85;
		
	mytable.player[5].empty = 0;
	mytable.player[5].money = 1000;
	mytable.player[5].name = "Monkey";
	mytable.player[5].passive = 0;
	mytable.player[5].loose = 0;	
	mytable.player[5].personality.passive = -.8;
	mytable.player[5].personality.loose = -.8;
	
	mytable.player[6].empty = 0;
	mytable.player[6].money = 1000;
	mytable.player[6].name = "Pig";
	mytable.player[6].passive = 0;
	mytable.player[6].loose = 0;	
	mytable.player[6].personality.passive = -.75;
	mytable.player[6].personality.loose = -.75;

	mytable.player[7].empty = 0;
	mytable.player[7].money = 1000;
	mytable.player[7].name = "Goat";
	mytable.player[7].passive = 0;
	mytable.player[7].loose = 0;
	mytable.player[7].personality.passive = -.7;
	mytable.player[7].personality.loose = -.7;
	
	mytable.player[8].empty = 0;
	mytable.player[8].money = 1000;
	mytable.player[8].name = "Dolphin";	
	mytable.player[8].passive = 0;
	mytable.player[8].loose = 0;
	mytable.player[8].personality.passive = -.65;
	mytable.player[8].personality.loose = -.65;

	mytable.player[9].empty = 0;
	mytable.player[9].money = 1000;
	mytable.player[9].name = "Rat";
	mytable.player[9].passive = 0;
	mytable.player[9].loose = 0;	
	mytable.player[9].personality.passive = -.6;
	mytable.player[9].personality.loose = -.6;

	create_deck(mydeck);
	int i;
	for(i=1;i<30;i++)
	{
		shuffle_deck(mydeck);
		deal(mydeck, mytable);
		get_empty(mytable);
		mytable.rounds = 0;
		round_0(mytable);
	}
	cout << "You had a net gain of $" << (mytable.player[2].money - 1000) << ". Thanks for playing!" << endl;
	return 0;
}