void pos(int *arr, int size, int shift);
void neg(int *arr, int size, int shift);

void mx_arr_rotate(int *arr, int size, int shift) {
  if (shift == 0 || size < 2 || !*arr)
    return;
  if (shift > 0)
    pos(arr, size, shift);
  if (shift < 0)
    neg(arr, size, shift);
}

#include <stdio.h>

int main () {
  int arr[] = {1, 2, 3, 4, 5};
  mx_arr_rotate(arr, 5, 3);
  for (int i = 0; i < 5; i++)
    printf("%d, ", arr[i]);
  return 0;
}

void pos(int *arr, int size, int shift) {
  int tmp = 0;
  int mem = 0;
  for(int i = 0; i < shift; i++) {
    mem = arr[size - 1];
    for (int j = size; j > 0; j--) {
      tmp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = tmp;
    }
    arr[0] = mem;
  }
}

void neg(int *arr, int size, int shift) {
  int tmp = 0;
  int mem = 0;
  shift = -shift;
  for(int i = 0; i < shift; i++) {
    mem = arr[0];
    for (int j = 1; j < size; j++) {
      tmp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = tmp;
    }
    arr[size - 1] = mem;
  }

}
