#include "minilibmx.h"

void wave(int **grid, int ax, int ay, int bx, int by, int h, int w) {
	int wall = -1;
	int blank = 0;
	int dx[4] = {1, 0, -1, 0};
	int dy[4] = {0, 1, 0, -1};
	int d, x, y, k;

	if (grid[ay][ax] == wall) {
		mx_printerr("entry point cannot be an obstacle\n");
        exit(1);
	}
	if (grid[by][bx] == wall) {
		mx_printerr("exit point cannot be an obstacle\n");
        exit(1);
	}
	d = 1;
	grid[ay][ax] = 1;
	bool stop = true;
	while (stop /*&& grid[by][bx] == blank*/) {
		stop = false;
		for (y = 0; y < h; y++)
			for (x = 0; x < w; x++)
				if (grid[y][x] == d) {
					for (k = 0; k < 4; k++) {
						int iy = y + dy[k];
						int ix = x + dx[k];
						if (iy >= 0 && iy < h && ix >= 0 && ix < w
							&& grid[iy][ix] == blank) {
							stop = true;
							grid[iy][ix] = d + 1;
						}						
					}
				}
		d++;
	}
	if (grid[by][bx] == blank) {
		mx_printerr("route not found\n");
        exit(1);
	}
}
