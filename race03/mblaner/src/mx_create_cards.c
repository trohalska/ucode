#include "minilibmx.h"

int high_to_int(char a);

t_card *mx_create_card(char *c1) {
  // try to create an array 
  t_card *p = malloc(sizeof(t_card));
      // check creation after malloc
    if (!p) return NULL;
    
    if (mx_strlen(c1) == 2 && mx_isdigit(c1[0])) {
        p->rank = atoi(c1);
        p->suit = c1[1];
    }
    if (mx_strlen(c1) == 2 && !mx_isdigit(c1[0])) {
        if (c1[0] == 'J') p->rank = 11;
        if (c1[0] == 'Q') p->rank = 12;
        if (c1[0] == 'K') p->rank = 13;
        if (c1[0] == 'A') p->rank = 14;
        p->suit = c1[1];
    }
    if (mx_strlen(c1) == 3) {
        p->rank = atoi(c1);
        p->suit = c1[2];    
    }
    return p;
}

t_card **mx_create_cards(int c, char **v) {
    // try to create an array 
    t_card **p = (t_card **) malloc((c)*sizeof(t_card *));
    // check creation after malloc
    if (!p) return NULL;

    // try to create cards
    int i = 1;
    for (; i < c; i++) {
        t_card *nc = mx_create_card(v[i]);
        // check creation after malloc
          if (!nc) return NULL;        
        p[i - 1] = nc;
    }
    p[c - 1] = NULL;
    return p;
}
