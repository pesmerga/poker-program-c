// Library implementation of loose_passive.cpp#include "loose_passive.h"table loose_passive(table &mytable){	int i;		for (i = 0; i < 10; i++)	{		if (mytable.rounds == 4)		{			if (mytable.player[i].folded == 1)			{				if (mytable.player[i].bet_history.rounds_0.num_bets > 0)				{					mytable.player[i].passive =						(mytable.player[i].passive - ((mytable.player[i].passive + 1) / 10));					return mytable;				}				if ((mytable.player[i].bet_history.rounds_0.num_calls > 0) &&					(mytable.player[i].bet_history.rounds_0.num_bets == 0))				{					mytable.player[i].passive =						(mytable.player[i].passive + ((1 - mytable.player[i].passive) / 10));					return mytable;				}								if (mytable.player[i].bet_history.folded >= 2)				{					mytable.player[i].loose =						(mytable.player[i].loose - ((mytable.player[i].loose + 1) / 25));					return mytable;				}				if (mytable.player[i].bet_history.folded == 1)				{					mytable.player[i].loose =						(mytable.player[i].loose - ((mytable.player[i].loose + 1) / 12));					return mytable;				}				if (mytable.player[i].bet_history.folded == 0)				{					mytable.player[i].loose =						(mytable.player[i].loose - ((mytable.player[i].loose + 1) / 10));					return mytable;				}			}			else			{				if (mytable.player[i].bet_history.predicted != 					mytable.player[i].bet_history.actual)				{					if (mytable.player[i].bet_history.predicted == 'b')					{						if (mytable.player[i].bet_history.actual == 'c')						{							mytable.player[i].passive =								(mytable.player[i].passive + ((1 - mytable.player[i].passive) / 5));							return mytable;						}						if (mytable.player[i].bet_history.actual == 'f')						{							mytable.player[i].loose =								(mytable.player[i].loose - ((mytable.player[i].loose + 1) / 5));							return mytable;						}					}					if (mytable.player[i].bet_history.predicted =='c')					{						if (mytable.player[i].bet_history.actual == 'b')						{							mytable.player[i].passive =								(mytable.player[i].passive - ((mytable.player[i].passive + 1) / 5));							return mytable;						}						if (mytable.player[i].bet_history.actual == 'f')						{							mytable.player[i].loose =								(mytable.player[i].loose - ((mytable.player[i].loose + 1) / 5));							return mytable;						}					}					if (mytable.player[i].bet_history.predicted == 'f')					{						if (mytable.player[i].bet_history.actual == 'b')						{							mytable.player[i].passive =								(mytable.player[i].passive - ((mytable.player[i].passive + 1) / 10));							return mytable;						}						if (mytable.player[i].bet_history.actual == 'f')						{							mytable.player[i].loose =								(mytable.player[i].loose + ((1 - mytable.player[i].loose) / 5));							return mytable;						}					}				}			}		}		else		{			if (mytable.player[i].folded == 1)			{				if (mytable.player[i].bet_history.rounds_0.num_bets > 0)				{					mytable.player[i].passive =						(mytable.player[i].passive - ((mytable.player[i].passive + 1) / 10));					return mytable;				}				if ((mytable.player[i].bet_history.rounds_0.num_calls > 0) &&					(mytable.player[i].bet_history.rounds_0.num_bets == 0))				{					mytable.player[i].passive =						(mytable.player[i].passive + ((1 - mytable.player[i].passive) / 10));					return mytable;				}				if (mytable.player[i].bet_history.folded >= 2)				{					mytable.player[i].loose =						(mytable.player[i].loose - ((mytable.player[i].loose + 1) / 15));					return mytable;				}				if (mytable.player[i].bet_history.folded == 1)				{					mytable.player[i].loose =						(mytable.player[i].loose - ((mytable.player[i].loose + 1) / 12));					return mytable;				}				if (mytable.player[i].bet_history.folded == 0)				{					mytable.player[i].loose =						(mytable.player[i].loose - ((mytable.player[i].loose + 1) / 10));					return mytable;				}			}			else			{				if (mytable.player[i].bet_history.rounds_0.num_bets > 0)				{					mytable.player[i].passive =						(mytable.player[i].passive - ((mytable.player[i].passive + 1) / 8));					return mytable;				}				else				{					mytable.player[i].passive =						(mytable.player[i].passive + ((1 - mytable.player[i].passive) / 8));					return mytable;				}			}		}	}	return mytable;}