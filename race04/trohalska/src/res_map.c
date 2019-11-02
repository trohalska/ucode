#include "minilibmx.h"

// rebuild path
char **res_map(int **grid, int ax, int ay, int bx, int by, int h, int w) {
	
	
	// создание карты
	char **res = (char **) malloc(h * sizeof(char *));
	if (!res){
        mx_printerr("error\n");
        exit(1);
    }
	
	for (int i = 0; i < h; i++) {
        char *s = malloc(w * sizeof(char));
        if (!s){
        	mx_printerr("error\n");
        	exit(1);
    	}
        res[i] = s;
    }

	int len = grid[by][bx];
	int x = bx;
	int y = by;
	int d = len;
	int k = 0;
	int max = len;
	int dx[4] = {1, 0, -1, 0};
  	int dy[4] = {0, 1, 0, -1};

	while (d > 0) { // выпечатываем путь *
		res[y][x] = '*';
		d--;
		for (k = 0; k < 4; k++) {
			int iy = y + dy[k];
			int ix = x + dx[k];
			if (iy >= 0 && iy < h && ix >= 0 && ix < w
				&& grid[iy][ix] == d) {
				x = x + dx[k];
				y = y + dy[k];
				break;
			}
		}
	}
	res[ay][ax] = '*';
	
	// находим максимум
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			if (grid[i][j] > max)
				max = grid[i][j];

	if (max != len)
		res[by][bx] = 'X';

	// выпечатываем решетки и точки
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++){			
			if (grid[i][j] == -1)
				res[i][j] = '#';
			else if (grid[i][j] == max)
				res[i][j] = 'D';
			else if (res[i][j] != '*' 
				&& res[i][j] != 'D'
				&& res[i][j] != 'X'
				&& res[i][j] != '#')
				res[i][j] = '.';
		}
	return res;
}
