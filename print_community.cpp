// Library implementation of print_community.cpp#include "print_community.h"table print_community(table &mytable){	cout << setw(2) << setiosflags(ios::left) << setw(18);	switch(mytable.rounds)	{		case "3": switch(mytable.community[4].value)				  {					case "0": cout << "2";							  break;					case "1": cout << "3";							  break;					case "2": cout << "4";							  break;					case "3": cout << "5";							  break;					case "4": cout << "6";							  break;					case "5": cout << "7";							  break;					case "6": cout << "8";							  break;					case "7": cout << "9";							  break;					case "8": cout << "T";							  break;					case "9": cout << "J";							  break;					case "10": cout << "Q";							   break;					case "11": cout << "K";							   break;					case "12": cout << "A";							   break;					}					switch(mytable.community[4].suit)					{					case "0": cout << "c  ";							  break;					case "1": cout << "d  ";							  break;					case "2": cout << "h  ";							  break;					case "3": cout << "s  ";							  break;					}		case "2": switch(mytable.community[3].value)				  {					case "0": cout << "2";							  break;					case "1": cout << "3";							  break;					case "2": cout << "4";							  break;					case "3": cout << "5";							  break;					case "4": cout << "6";							  break;					case "5": cout << "7";							  break;					case "6": cout << "8";							  break;					case "7": cout << "9";							  break;					case "8": cout << "T";							  break;					case "9": cout << "J";							  break;					case "10": cout << "Q";							   break;					case "11": cout << "K";							   break;					case "12": cout << "A";							   break;					}					switch(mytable.community[3].suit)					{					case "0": cout << "c  ";							  break;					case "1": cout << "d  ";							  break;					case "2": cout << "h  ";							  break;					case "3": cout << "s  ";							  break;					}		case "1": switch(mytable.community[2].value)				  {					case "0": cout << "2";							  break;					case "1": cout << "3";							  break;					case "2": cout << "4";							  break;					case "3": cout << "5";							  break;					case "4": cout << "6";							  break;					case "5": cout << "7";							  break;					case "6": cout << "8";							  break;					case "7": cout << "9";							  break;					case "8": cout << "T";							  break;					case "9": cout << "J";							  break;					case "10": cout << "Q";							   break;					case "11": cout << "K";							   break;					case "12": cout << "A";							   break;					}					switch(mytable.community[2].suit)					{					case "0": cout << "c  ";							  break;					case "1": cout << "d  ";							  break;					case "2": cout << "h  ";							  break;					case "3": cout << "s  ";							  break;					}					switch(mytable.community[1].value)   				    {					case "0": cout << "2";							  break;					case "1": cout << "3";							  break;					case "2": cout << "4";							  break;					case "3": cout << "5";							  break;					case "4": cout << "6";							  break;					case "5": cout << "7";							  break;					case "6": cout << "8";							  break;					case "7": cout << "9";							  break;					case "8": cout << "T";							  break;					case "9": cout << "J";							  break;					case "10": cout << "Q";							   break;					case "11": cout << "K";							   break;					case "12": cout << "A";							   break;					}					switch(mytable.community[1].suit)					{					case "0": cout << "c  ";							  break;					case "1": cout << "d  ";							  break;					case "2": cout << "h  ";							  break;					case "3": cout << "s  ";							  break;					}					switch(mytable.community[0].value)				  	{					case "0": cout << "2";							  break;					case "1": cout << "3";							  break;					case "2": cout << "4";							  break;					case "3": cout << "5";							  break;					case "4": cout << "6";							  break;					case "5": cout << "7";							  break;					case "6": cout << "8";							  break;					case "7": cout << "9";							  break;					case "8": cout << "T";							  break;					case "9": cout << "J";							  break;					case "10": cout << "Q";							   break;					case "11": cout << "K";							   break;					case "12": cout << "A";							   break;					}					switch(mytable.community[0].suit)					{					case "0": cout << "c  ";							  break;					case "1": cout << "d  ";							  break;					case "2": cout << "h  ";							  break;					case "3": cout << "s  ";							  break;					}					break;		case "0": break;	}	return mytable;}