#include "minilibmx.h"


bool valid_rank(int a) {
	bool f = true;
	if (a < 2 || a > 14)
		f = false;
	return f;
}

bool valid_suit(char a) {
	bool f = true;
	if (a != 'H' && a != 'C' && a != 'S' && a != 'D')
		f = false;
	return f;
}

bool mx_pocker_check(int c, char **v) {
	
	char *US = "usage: ./race03 [card1] [card2] [card3] [card4] [card5]\n";
	char *IC = "Invalid card: ";
	char *IR = "Invalid card rank: ";
	char *IS = "Invalid card suit: ";
	//char *DC = "Duplicate cards: ";

	// create massive cards
	t_card **arr = mx_create_cards(c, v);
  		// check creation after malloc
  		if (!arr) return 0;

	// if there's 5 cards
	if (c != 6) {
		mx_printerr(US);
		return false;
	}
	
	for (int i = 0; i < c - 1; i++) {
		int j = i + 1;
		//invalid card
		if (mx_strlen(v[j]) > 3) {			
			mx_printerr(IC);
			mx_printerr(v[j]);
			return false;
		}		
		if (!valid_rank(arr[i]->rank) && !valid_suit(arr[i]->suit)) {
			mx_printerr(IC);			
			mx_printerr(v[j]);
			return false;
		}
		
		//Invalid card suit
		if (!valid_suit(arr[i]->suit)) {
			mx_printerr(IS);
			mx_printerr(&(arr[i]->suit));
			return false;
		}
		//Invalid card rank
		if (!valid_rank(arr[i]->rank)) {
			mx_printerr(IR);
			mx_printint(arr[i]->rank);              //// fix
			return false;
		}
	}

	/*for (int i = 0; arr[i] == NULL; i++) {
		for (int j = 0; j < 5 - i ; j++) {
		while (!arr[j]) {     		
     	if (arr[i]->rank == arr[j]->rank && arr[i]->suit == arr[j]->suit) {
			mx_printerr(DC);
			mx_printerr(v[i]);
			return false;
			j++;
		}	
		}
	}*/
	return true;
}
