// Library implementation of get_empty.cpp#include "get_empty.h"table get_empty(table &mytable){	int i;		for (i = 0; i < 10; i++)	{		if (mytable.player[i].empty == 1)		{			mytable.player[i].name = "XXXXXXXX";			mytable.player[i].money = 0;		}	}	return mytable;}