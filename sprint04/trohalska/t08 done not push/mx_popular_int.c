int mx_popular_int(const int *arr, int size) {
    int s = 0;
    int n = 0;
    int k = 0;

    for(int i = size - 1; i > 0; i--) {
        for(int j = i - 1 ; j > 0; j--) {
            if(arr[i] == arr[j]) {
                s++;
            }
        }
        if (s > k) {
            k = s;
            n = arr[i];
        }
    }
    return n;
}

#include <stdio.h>

int main () {
    int a[] = {1, 5, 6, 5, 1, 5};
    int s = mx_popular_int(a, 6);
    printf("%d", s);
}