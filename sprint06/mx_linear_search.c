#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(char **arr, const char *s) {
  int index = 0;
  if (!*s)
    return -1;
  
  while (*arr) {
    if (mx_strcmp(arr[index], s) == 0)
      return index;
    index++;
  }
  return -1;
}

#include <stdio.h>

int main () {
  char* arr[] = {"222", "Abcd", "aBc", "ab", "az", "z", NULL};
  printf("%d", mx_linear_search(arr, "z"));
  return 0;
}
