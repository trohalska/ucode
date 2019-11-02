int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
  int first = 0;
  int last = size - 1;
  int mid = 0;
  int res = -1;
  if (size < 1) // do not check
    return 0;// do not check
    
  while (first <= last) {
    *count = *count + 1;
    mid = first + (last - first) / 2;
    if (mx_strcmp(arr[mid], s) == 0) {
      res = mid;      
      break;
    }
    else if (mx_strcmp(arr[mid], s) > 0)
      last = mid - 1;
    else
      first = mid + 1;   
  }
  if (res == -1)
    *count = 0;
  return res;
}

#include <stdio.h>

int main () {
  char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
  int count = 0;
  int s  = mx_binary_search(arr, 6, "ab", &count);
  printf("%d %d", s, count);
  return 0;
}
