#include <stdbool.h>

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int));

bool compare(int a, int b) {
    return a == b;
}

#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	printf("%d\n", mx_comparator(arr, 5, 0, compare));
	return 0;
}

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)) {

if (!*arr) return -1;

for (int i = 0; i < size; i++)
	if (compare(arr[i], x))
		return i;
return -1;
}
