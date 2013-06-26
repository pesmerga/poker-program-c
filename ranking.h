// Library header file: ranking.h

#ifndef hand_ranking

#include "sort_suit.h"
#include "structures.h"

// Function ranking

// Purpose: Give any given hand a ranking value from 1 to 9, where 1 is the best and 9 is crap
// Input: hand myhand
// Output: hand myhand that has been given a rankhand ranking(hand &myhand);

hand paired(hand &myhand);

hand sconnector(hand &myhand);

hand connector(hand &myhand);

hand soconnector(hand &myhand);

hand wsconnector(hand &myhand);

hand oconnector(hand &myhand);

hand ace(hand &myhand);

hand king(hand &myhand);

hand queen(hand &myhand);

hand ranking(hand &myhand);

#define hand_ranking

#endif