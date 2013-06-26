// Library implementation off bet_4th.cpp#include "bet_4th.h"// bet_4th is a function that the computer uses when prompted to// enter an action to play (call, bet, fold, etc.) during a given// round. Functions like win_percent and expected_value are first// run to determine a value of a hand, then algorithims are ran// using the previous information making decisions according to// what round in betting and game it is, what seat the player is// placed, etc.table bet_4th(table &mytable){		float random;	random = (float(rand()) / float(RAND_MAX));	win_percent(mytable.player[(mytable.currentplayer)], mytable);		if (mytable.betsinround == 0)	{		if (mytable.bet_history.rounds_3.num_calls == 0)		{			if (mytable.player[(mytable.currentplayer)].worth > 				(.625 + (mytable.player[(mytable.currentplayer)].personality.passive * -.05)))			{				if (random < .98)				{					mytable.player[(mytable.currentplayer)].action = 'b';					return mytable;				}				else				{					mytable.player[(mytable.currentplayer)].action = 'c';					return mytable;				}			}			else			{				if (random < .1)				{					mytable.player[(mytable.currentplayer)].action = 'b';					return mytable;				}				else				{					mytable.player[(mytable.currentplayer)].action = 'c';					return mytable;				}			}		}		else		{			if (mytable.player[(mytable.currentplayer)].worth > 				(.7 + (mytable.player[(mytable.currentplayer)].personality.passive * -.025)))			{				if (random < .975)				{					mytable.player[(mytable.currentplayer)].action = 'b';					return mytable;				}				else				{					mytable.player[(mytable.currentplayer)].action = 'c';					return mytable;				}			}			else			{				if (random < .025)				{					mytable.player[(mytable.currentplayer)].action = 'b';					return mytable;				}				else				{					mytable.player[(mytable.currentplayer)].action = 'c';					return mytable;				}			}		}	}	if ((mytable.betsinround == 1) ||		(mytable.betsinround == 2) ||		(mytable.betsinround == 3))	{		if (mytable.player[(mytable.currentplayer)].worth >			(.65 + (mytable.player[(mytable.currentplayer)].personality.passive * -.05)))		{			if (random < .975)			{				mytable.player[(mytable.currentplayer)].action = 'b';				return mytable;			}			else			{				mytable.player[(mytable.currentplayer)].action = 'c';				return mytable;			}		}		if (mytable.player[(mytable.currentplayer)].worth >			(.6 + (mytable.player[(mytable.currentplayer)].personality.loose * .05)))		{			if (random < .1)			{				mytable.player[(mytable.currentplayer)].action = 'b';				return mytable;			}			if (random < .95)			{				mytable.player[(mytable.currentplayer)].action = 'c';				return mytable;			}			else			{				mytable.player[(mytable.currentplayer)].action = 'f';				return mytable;			}		}		else		{			if (random < .1)			{				mytable.player[(mytable.currentplayer)].action = 'c';				return mytable;			}			else			{				mytable.player[(mytable.currentplayer)].action = 'f';				return mytable;			}		}	}	if (mytable.betsinround == 4)	{		if (mytable.player[(mytable.currentplayer)].worth >			(.6 + (mytable.player[(mytable.currentplayer)].personality.loose * .05)))		{			if (random < .99)			{				mytable.player[(mytable.currentplayer)].action = 'c';				return mytable;			}			else			{				mytable.player[(mytable.currentplayer)].action = 'f';				return mytable;			}		}		else		{			if (random < .25)			{				mytable.player[(mytable.currentplayer)].action = 'c';				return mytable;			}			else			{				mytable.player[(mytable.currentplayer)].action = 'f';				return mytable;			}		}	}	return mytable;}