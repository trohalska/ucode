#ifndef PRINTERR_H
#define PRINTERR_H

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

#define SUM(x, y) (x + y)
#define MULT(x, y) (x * y)
#define MIN(x, y) ((x) < (y)) ? (x) : (y)
#define ABS(x) ((x) < 0) ? (x) : (-x)
#define MX_IS_ODD(x) ((x) % 2 != 0) ? 1 : 0

#endif
 