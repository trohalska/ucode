int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

#include <stdbool.h>

bool compare(char *min, char *s2) {
  bool x = false;
  if (mx_strlen(min) > mx_strlen(s2)
      || (mx_strcmp(min, s2) > 0 
	  && mx_strlen(min) == mx_strlen(s2)))
  x = true;
  return x;
}

int mx_selection_sort(char **arr, int size) {
  int swap = 0;
  int min = 0;
  char *tmp = 0;

  for (int i = 0; i  < size - 1; i++) {
    min = i;
    for (int j = i + 1; j < size; j++) {
      if (compare(arr[min], arr[j]))
	min = j;
    }
      if (arr[min] != arr[i]) {
	swap += 1;
	tmp = arr[i];
	arr[i] = arr[min];
	arr[min] = tmp;
      }
  }
  return swap;
}

#include <stdio.h>

  int main () {
    char* arr[] = {"Abcd", "a", "aBc", "abc", "Z", "z", "AbCd"};
    printf("%d\n", mx_selection_sort(arr, 7));
    for (int i = 0; i < 7; i++)
      printf("%s  ", arr[i]);
    return 0;
  }
