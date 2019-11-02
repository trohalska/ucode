int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
 	int nswap = 0;
  	char *tmp = 0;
    for (int i = 0; i < size - 1; i++)
    	for (int j = 0; j < size - 1 - i; j++)
    		if (mx_strcmp(arr[j], arr[j + 1]) > 0) {
    			tmp = arr[j];
    			arr[j] = arr[j + 1];
    			arr[j + 1] = tmp;
    			nswap++;
    		}    
    return nswap;
}
