void mx_printint(int n);

void mx_foreach(const int *arr, int size, void (*f)(int)) {

if (!*arr) return;

for (int i = 0; i < size; i++)
	f(arr[i]);
}

#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	mx_foreach(arr, 5, mx_printint);
	return 0;
}

