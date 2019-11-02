#include "minilibmx.h"

void lee(int **arr, int sx, int sy, int fx, int fy,
	    int sizex, int sizey)
{
  arr[sy][sx] = 1;
  spread(arr, fx, fy, sizex, sizey);

 /* for (int i = 0; i < sizey; ++i)
    {
      for (int j = 0; j < sizex; ++j)
        {
	  if (arr[i][j] == -1 || arr[i][j] > 9)
	    printf ("%d ", arr[i][j]);
	  else
	    printf (" %d ", arr[i][j]);
        }
      printf("\n");
    }*/
}
