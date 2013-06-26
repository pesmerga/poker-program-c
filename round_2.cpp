// Library Implementation of round_2.cpp#include "round_2.h"// round_2 runs the 2nd post-flop round prompting actions from the all// the players at the table, running the AI program for when a// computer player is prompted.table round_2(table &mytable){	apstring continue_play;	update_player(mytable);	int k, j;		print_table(mytable);	cout << "Type in anything and hit enter to continue play.";	cin >> continue_play;	cout << endl;	k = 1;	while ((((mytable.currentplayer != mytable.lastraiser) && (mytable.betsinround > 0)) ||		    ((mytable.betsinround == 0) && (mytable.player[(mytable.lastraiser)].action == 'e'))) &&		   (k == 1))	{		j = 1;		if ((last_standing(mytable)) < 0)		{					if ((mytable.player[(mytable.currentplayer)].folded == 1) ||				(mytable.player[(mytable.currentplayer)].empty == 1))			{			}			else			{						if (mytable.currentplayer == mytable.human)				{					print_table(mytable);					cout << "Bet(b), Call or Check(c), or Fold(f): ";					cin >> mytable.player[(mytable.human)].action;					cout << endl;										if (mytable.player[(mytable.human)].action == 'b')					{						if (mytable.betsinround == 4)						{							cout << "This is the 4th round of betting and you can no longer bet. Choose again." << endl;							mytable.player[(mytable.currentplayer)].action = 'e';							j = 0;						}						else						{							get_action(mytable);							print_table(mytable);							cout << "Type in anything and hit enter to continue play.";							cin >> continue_play;							cout << endl;						}					}					if ((mytable.player[(mytable.human)].action == 'c') || (mytable.player[(mytable.human)].action == 'f'))					{						get_action(mytable);						print_table(mytable);						cout << "Type in anything and hit enter to continue play.";						cin >> continue_play;						cout << endl;					}					if ((mytable.player[(mytable.human)].action != 'b') &&						(mytable.player[(mytable.human)].action != 'c') &&						(mytable.player[(mytable.human)].action != 'f'))					{						cout << "That is not a legal function. Choose again." << endl;						mytable.player[(mytable.currentplayer)].action = 'e';						j = 0;					}				}				if (mytable.currentplayer != mytable.human)				{					bet_3rd(mytable);										get_action(mytable);					print_table(mytable);					cout << "Type in anything and hit enter to continue play.";					cin >> continue_play;					cout << endl;						}			}			if (j == 1)			{				mytable.currentplayer = ((mytable.currentplayer + 1) % 10);			}		}		if ((last_standing(mytable)) >= 0)		{			mytable.player[(last_standing(mytable))].money =				(mytable.pot + mytable.player[(last_standing(mytable))].money);			k = 0;		}	}	if (k == 1)	{		mytable.rounds = 3;		round_3(mytable);	}	if (mytable.rounds == 2)	{		loose_passive(mytable);	}	return mytable;}