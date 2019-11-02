#include "minilibmx.h"

int main(int c, char **v) {

	if (!mx_pocker_check(c, v))
		return 0;
	  	
  	t_card **arr = mx_create_cards(c, v);
  		// check creation after malloc
  		if (!arr) return 0;

   /* for (int i = 0; i < c - 2; i++)   
        for (int j = i + 1; i < c - 1; j++)
            if (arr[i]->rank == arr[j]->rank && arr[i]->suit == arr[j]->suit) {
                mx_printerr(DC);
                mx_printerr(v[i]);
                return false;
            }*/
	 //print
    for (int i = 0; 1; i++){
    	if (arr[i] == NULL) {
     		printf("NULL\n");
      		break;    }
    	printf("%d%c ", arr[i]->rank, arr[i]->suit);
	}
  return 0;
 }
