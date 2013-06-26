// library implementation of ranking.cpp

#include "ranking.h"

// paired takes a hand and checks the two cards, big and small, for whether
// they are of the same value qualifing them as a pair of that value. 
// The pair is given a kind of 1 and special case of 1 if they qualify as
// either a pair of aces or a pair of kings.

hand paired(hand &myhand)
{	
	if (myhand.big.value == myhand.small.value)	
	{		
		switch (myhand.big.value)		
		{			
			case (12): myhand.rank.value = 1;					   
						myhand.special = 1;					   
						break;					   
						// AA			
			case (11): myhand.rank.value = 1;					   
						myhand.special = 1;					   
						break;					   
						// KK			
			case (10): myhand.rank.value = 1;					   
						myhand.special = 1;					   
						break;					   
						// QQ			
			case (9) : myhand.rank.value = 1;					   
						break;					   
						// JJ			
			case (8) : myhand.rank.value = 2;			           
						break;				       
						// TT			
			case (7) : myhand.rank.value = 3;					   
						break;	   				   
						// 99			
			case (6) : myhand.rank.value = 4;					   
						break;				       
						// 88			
			case (5) : myhand.rank.value = 5;					   
						break;				       
						// 77			
			case (4) : myhand.rank.value = 6; 					   
						break; 					   
						// 66			
			case (3) : myhand.rank.value = 6; 					   
						break; 					   
						// 55			
			case (2) : myhand.rank.value = 7;					   
						break;					   
						// 44			
			case (1) : myhand.rank.value = 7;					   
						break;					   
						// 33			
			case (0) : myhand.rank.value = 7;					   
						break;					   
						// 22		
		}		
		myhand.rank.kind = 1;	
	}	
	return myhand;
}

// sconnector checks a hand, the cards big and small, whether it qualifies
// as a suited connector, a hand of the same suit with a descending value
// of 1 (87s). A hand considered to be a suited connector is given a kind
// of 2 with AKs and KQs qualifying as a special case of 2.

hand sconnector(hand &myhand)
{	
	if ((myhand.big.value == ((myhand.small.value) + 1)) && (myhand.suited == 1))	
	{		
		switch (myhand.big.value)		
		{		
			case (12): myhand.rank.value = 1;			       
						myhand.special = 2;			       
						break;				   
						// AKs		
			case (11): myhand.rank.value = 2;				   
						myhand.special = 2;				   
						break;				   
						// KQs		
			case (10): myhand.rank.value = 3;				   
						break;				   
						// QJs		
			case (9) : myhand.rank.value = 3;				   
						break;				   
						// JTs		
			case (8) : myhand.rank.value = 4;				   
						break;				   
						// T9s		
			case (7) : myhand.rank.value = 4;				   
						break;				   
						// 98s		
			case (6) : myhand.rank.value = 5;				   
						break;				   
						// 87s		
			case (5) : myhand.rank.value = 5;				  
						break;				   
						// 76s		
			case (4) : myhand.rank.value = 5;				   
						break;				   
						// 65s		
			case (3) : myhand.rank.value = 6;				   
						break;				   
						// 54s		
			case (2) : myhand.rank.value = 7;				   
						break;				   
						// 43s		
			case (1) : myhand.rank.value = 8;			       
						break;				   
						// 32s		
		}		
		myhand.rank.kind = 2;	
	}	
	return myhand;
}

// connector is a function that is given a hand and checks it to see
// whether it qualifies as a connector, a hand where the big card is
// exactly one value greater than the small card. Once the function is
// run and it is determined that the hand is a connector, the hand is
// given a kind of 3. If the hand contains an AK, it qualifies as a
// special condition of 1. If the hand contains a KQ, the hand qualifies
// as a special condition of 4.

hand connector(hand &myhand)
{		
	if ((myhand.big.value == ((myhand.small.value) + 1)) && (myhand.suited == 0))	
	{		
		switch (myhand.big.value)		
		{		
			case (12): myhand.rank.value = 2;				   
						myhand.special = 1;				   
						break;				   
						// AK		
			case (11): myhand.rank.value = 4;				   
						myhand.special = 4;				   
						break;				   
						// KQ		
			case (10): myhand.rank.value = 5;				   
						break;				   
						// QJ		
			case (9) : myhand.rank.value = 5;				   
						break;				   
						// JT		
			case (8) : myhand.rank.value = 7;				   
						break;				   
						// T9		
			case (7) : myhand.rank.value = 7;				   
						break;				   
						// 98		
			case (6) : myhand.rank.value = 8;				   
						break;				   
						// 87		
			case (5) : myhand.rank.value = 8;				   
						break;
						// 76		
			case (4) : myhand.rank.value = 8;
					    break;				   
					    // 65		
			case (3) : myhand.rank.value = 8;				   
						break;				   
						// 54		
			case (2) : myhand.rank.value = 9;				   
						break;				   
						// 43		
			case (1) : myhand.rank.value = 9;				   
						break;				   
						// 32		
		}		
		myhand.rank.kind = 3;	
	}	
	return myhand;
}

// soconnector reads a hand's two cards, big and small, and determines
// whether it qualifies as a suited, open connector, which is a hand that
// is suited and has a two value difference between the two cards. If the
// hand qualifies as a suited, open connector, it is given a kind of 4
// with an AQs given a special condition of 2.

hand soconnector(hand &myhand)
{		
	if ((myhand.big.value == ((myhand.small.value) + 2)) && (myhand.suited == 1))	
	{			
		switch (myhand.big.value)		
		{		
			case (12): myhand.rank.value = 2;				   
						myhand.special = 2;				   
						break;					   
						// AQs		
			case (11): myhand.rank.value = 3;				   
						break;				   
						// KJs		
			case (10): myhand.rank.value = 4;			       
						break;				   
						// QTs		
			case (9) : myhand.rank.value = 4;			      
						break;				   
						// J9s			
			case (8) : myhand.rank.value = 5;				   
						break;				   
						// T8s		
			case (7) : myhand.rank.value = 5;				   
						break;				   
						// 97s		
			case (6) : myhand.rank.value = 6;				   
						break;				   
						// 86s		
			case (5) : myhand.rank.value = 6;				   
						break;				   
						// 75s		
			case (4) : myhand.rank.value = 7;				   
						break;				   
						// 64s		
			case (3) : myhand.rank.value = 7;				   
						break;				   
						// 53s		
			case (2) : myhand.rank.value = 8;				   
						break;				   
						// 42s		
		}		
		myhand.rank.kind = 4;	
	}	
	return myhand;
}

hand wsconnector(hand &myhand)
{	
	// Checks for wide suited connector (2 spaces between)	
	if ((myhand.big.value == ((myhand.small.value) + 3)) && (myhand.suited == 1))	
	{		
		switch (myhand.big.value)		
		{		
			case (12): myhand.rank.value = 2;				   
						break;				   
						// AJs		
			case (11): myhand.rank.value = 4;				   
						break;				   
						// KTs		
			case (10): myhand.rank.value = 5;				   
						break;				   
						// Q9s		
			case (9) : myhand.rank.value = 6;				   
						break;				   
						// J8s		
			case (8) : myhand.rank.value = 7;				   
						break;				   
						// T7s		
			case (7) : myhand.rank.value = 8;				   
						break;				   
						// 96s		
			case (6) : myhand.rank.value = 8;				   
						break;				   
						// 85s		
			case (5) : myhand.rank.value = 8;				   
						break;				   
						// 74s		
			case (4) : myhand.rank.value = 9;				   
						break;				   
						// 63s		
			case (3) : myhand.rank.value = 9;				   
						break;				   
						// 52s		
		}		
		myhand.rank.kind = 5;	
	}	
	return myhand;
}

hand oconnector(hand &myhand)
{	
	// Checks for open connector	
	if ((myhand.big.value == ((myhand.small.value) + 2)) && (myhand.suited == 0))	
	{		
		switch (myhand.big.value)		
		{
			case (12): myhand.rank.value = 3;				   
						myhand.special = 1;				   
						break;				   
						// AQ		
			case (11): myhand.rank.value = 5;				   
						myhand.special = 5;				   
						break;				   
						// KJ		
			case (10): myhand.rank.value = 6;				   
						break;				   
						// QT		
			case (9) : myhand.rank.value = 7;				   
						break;				   
						// J9		
			case (8) : myhand.rank.value = 8;				   
						break;			  	   
						// T8		
			case (7) : myhand.rank.value = 9;				   
						break;				   
						// 97		
			case (6) : myhand.rank.value = 9;				   
						break;				   
						// 86		
			case (5) : myhand.rank.value = 9;				   
						break;				   
						// 75		
			case (4) : myhand.rank.value = 9;				   
						break;				   
						// 64 		
			case (3) : myhand.rank.value = 9;				   
						break;				   
						// 53		
			case (2) : myhand.rank.value = 9;				   
						break;				   
						// 42		
		}		
		myhand.rank.kind = 6;	
	}	
	return myhand;
}

hand ace(hand &myhand)
{	
	// Checks for the rest of the ranking if you have an Ace	
	if ((myhand.big.value == 12) && (myhand.small.value < 10))	
	{        	
		if (myhand.suited == 0)			
		{				
			switch (myhand.small.value)				
			{					
				case (9) : myhand.rank.value = 4;							   
							myhand.special = 4;							  
							break;							   
							// AJ					
				case (8) : myhand.rank.value = 6;							   
							myhand.special = 5;							   
							break;							   
							// AT					
				case (7) : myhand.rank.value = 8;							   
							break;							   
							// A9					
				case (6) : myhand.rank.value = 9;							   
							break;							   
							// Ax					
				case (5) : myhand.rank.value = 9;							   
							break;							   
							// Ax					
				case (4) : myhand.rank.value = 9;							   
							break;							   
							// Ax					
				case (3) : myhand.rank.value = 9;							   
							break;							   
							// Ax					
				case (2) : myhand.rank.value = 9;							   
							break;							   
							// Ax					
				case (1) : myhand.rank.value = 9;							   
							break;							   
							// Ax					
				case (0) : myhand.rank.value = 9;							   
							break;							   
							// Ax				
			}			
		}			
		if (myhand.suited == 1)			
		{				
			switch (myhand.small.value)				
			{					
				case (9) : myhand.rank.value = 2;						       
							myhand.special = 2;						       
							break;						       
							// AJs 					
				case (8) : myhand.rank.value = 3;							   
							break;							   
							// ATs 					
				case (7) : myhand.rank.value = 5;							   
							break;							   
							// Axs					
				case (6) : myhand.rank.value = 5;							   
							break;							   
							// Axs					
				case (5) : myhand.rank.value = 5;							   
							break;							   
							// Axs					
				case (4) : myhand.rank.value = 5;							   
							break;							   
							// Axs					
				case (3) : myhand.rank.value = 5;							   
							break;							   
							// Axs					
				case (2) : myhand.rank.value = 5;							   
							break;							   
							// Axs					
				case (1) : myhand.rank.value = 5;							   
							break;							   
							// Axs					
				case (0) : myhand.rank.value = 5;							   
							break;							   
							// Axs				
			}			
		}		
		myhand.rank.kind = 7;	
	}	
	return myhand;	
}

hand king(hand &myhand)
{	
	// Checks for the rest of the ranking if you have a King	
	if ((myhand.big.value == 11) && (myhand.small.value < 9))	
	{		
		if (myhand.suited == 0)		
		{				
			switch (myhand.small.value)			
			{				
				case (8) : myhand.rank.value = 6;						   
							myhand.special = 5;						   
							break;						   
							// KT				
				case (7) : myhand.rank.value = 8;					       
							break;						   
							// K9				
				case (6) : myhand.rank.value = 9;						   
							break;						   
							// Kx				
				case (5) : myhand.rank.value = 9;						   
							break;						   
							// Kx				
				case (4) : myhand.rank.value = 9;						   
							break;						   
							// Kx				
				case (3) : myhand.rank.value = 9;						   
							break;						   
							// Kx				
				case (2) : myhand.rank.value = 9;						   
							break;						   
							// Kx				
				case (1) : myhand.rank.value = 9;						   
							break;						   
							// Kx				
				case (0) : myhand.rank.value = 9;						   
							break;						   
							// Kx			
			}		
		}		
		if (myhand.suited == 1)		
		{			
			switch (myhand.small.value)			
			{				
				case (8) : myhand.rank.value = 4;						   
							break;						   
							// KTs 				
				case (7) : myhand.rank.value = 6;					       
							break;						   
							// K9s				
				case (6) : myhand.rank.value = 7;						   
							break;						   
							// Kxs				
				case (5) : myhand.rank.value = 7;						   
							break;						   
							// Kxs				
				case (4) : myhand.rank.value = 7;						   
							break;						   
							// Kxs				
				case (3) : myhand.rank.value = 7;						   
							break;						   
							// Kxs				
				case (2) : myhand.rank.value = 7;						   
							break;						   
							// Kxs				
				case (1) : myhand.rank.value = 7;						   
							break;						   
							// Kxs				
				case (0) : myhand.rank.value = 7;						   
							break;						   
							// Kxs			
			}		
		}		
		myhand.rank.kind = 8;	
	}	
	return myhand;
}

hand queen(hand &myhand)
{	
	// Checks for the rest of the ranking if you have a Queen	
	if ((myhand.big.value == 10) && (myhand.small.value < 8))	
	{		
		if (myhand.suited == 0)		
		{			
			switch (myhand.small.value)			
			{				
				case (7) : myhand.rank.value = 8;						   
							break;						   
							// Q9				
				case (6) : myhand.rank.value = 9;					   	   
							break;						   
							// Qx				
				case (5) : myhand.rank.value = 9;					   	   
							break;						   
							// Qx			 
				case (4) : myhand.rank.value = 9;					   	   
							break;						   
							// Qx				
				case (3) : myhand.rank.value = 9;					   	   
							break;						  
							// Qx
				case (2) : myhand.rank.value = 9;					   	   
							break;						   
							// Qx
				case (1) : myhand.rank.value = 9;					   	  
							break;						   
							// Qx				
				case (0) : myhand.rank.value = 9;					   	   
							break;						   
							// Qx			
			}		
		}			
		if (myhand.suited == 1)		
		{			
			switch (myhand.small.value)			
			{				
				case (7) : myhand.rank.value = 5;						   
							break;						   
							// Q9s				
				case (6) : myhand.rank.value = 7;						  
							break;					       
							// Q8s				
				case (5) : myhand.rank.value = 9;						   
							break;						   
							// Qxs				
				case (4) : myhand.rank.value = 9;						   
							break;						   
							// Qxs				
				case (3) : myhand.rank.value = 9;						   
							break;						   
							// Qxs				
				case (2) : myhand.rank.value = 9;						   
							break;						  
							// Qxs				
				case (1) : myhand.rank.value = 9;						   
							break;						   
							// Qxs				
				case (0) : myhand.rank.value = 9;
							break;						   
							// Qxs			
			}		
		}		
		myhand.rank.kind = 9;	
	}	
	return myhand;
}

hand ranking(hand &myhand)
{	
	sort(myhand);	
	suited(myhand);		
	paired(myhand);	
	
	if (myhand.rank.kind == 1)	
	{		
		return myhand;	
	}	
	else	
	{		
		connector(myhand);		
		sconnector(myhand);				
		
		if ((myhand.rank.kind == 2) || 
			(myhand.rank.kind == 3))		
		{			
			return myhand;		
		}		
		else		
		{			
			oconnector(myhand);			
			soconnector(myhand);						
			
			if ((myhand.rank.kind == 4) || 
				(myhand.rank.kind == 6))			
			{				
				return myhand;			
			}			
			else			
			{				
				wsconnector(myhand);				
				
				if ((myhand.rank.kind == 5))				
				{					
					return myhand;				
				}				
				else				
				{					
					ace(myhand);					
					king(myhand);					
					queen(myhand);					
					
					if ((myhand.rank.kind == 7) || (myhand.rank.kind == 8) ||
						(myhand.rank.kind == 9))					
					{						
						return myhand;					
					}					
					else					
					{						
						return myhand;					
					}				
				}			
			}
		}
	}
}
