#include "minilibmx.h"

void spread(int **arr, int fx, int fy, int sizex, int sizey)
{
  int a[2] = {1, -1};

  while (arr[fy][fx] == 0)
    {
      for (int j = 0; j < sizex; ++j)
	{
	  for (int h = 0; h < sizey; ++h)
	    {
	      for (int i = 0; i < 2; ++i)
		{
		  if (j + a[i] < sizex && j + a[i] >= 0) 
		    if (arr[h][j + a[i]] == 0 && arr[h][j])
		      arr[h][j + a[i]] = arr[h][j] + 1;
		  if (h + a[i] < sizey && h + a[i] >= 0) 
		    if (arr[h + a[i]][j] == 0 && arr[h][j])
		      arr[h + a[i]][j] = arr[h][j] + 1;
		}
	    }
	}
    }
  /*  for (int i = 0; i < 2; ++i)
    {
      if (x + a[i] < sizex && x + a[i] >= 0)
	if(arr[y][x + a[i]] != -1)
	  spread(arr, x + a[i], y, sizex, sizey);
      if (y + a[i] < sizey && y + a[i] >= 0)
	if (arr[y + a[i]][x] != -1)
	  spread(arr, x, y + a[i], sizex, sizey);
	  }*/
}
