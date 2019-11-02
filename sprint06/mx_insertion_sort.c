int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
  int index = 0;
  int j = 0;
  char *tmp = 0;

  for (int i = 1; i < size; i++) {
    j = i;
    while (j > 0 && mx_strlen(arr[j - 1]) > mx_strlen(arr[j])) {
      index += 1;
      tmp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = tmp;
      j--;
    }
  }
  return index;
}

#include <stdio.h>

int main () {
  char* arr[] = {"abc"};
  printf("%d", mx_insertion_sort(arr, 1));
  return 0;
}
