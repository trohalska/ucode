int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size) {
  int swap = 0;
  int min = 0;
  char *tmp = 0;

  for (int i = 0; i  < size - 1; i++) {
    min = i;
    for (int j = i + 1; j < size; j++)
      if (mx_strcmp(arr[min], arr[j]) > 0
	  || (mx_strcmp(arr[min], arr[j]) == 0 
	      && mx_strlen(arr[min]) > mx_strlen(arr[j])))
	min = j;
    if (arr[min] != arr[i]) {
      swap += 1;
      tmp = arr[i];
      arr[i] = arr[min];
      arr[min] = tmp;
    }
  }
  return swap;
}
