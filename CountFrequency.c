#include <stdio.h>

void countFrequency(int arr[], int n) {
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("%d occurs %d times.\n", arr[i], count);
    }
}

int main() {
    int arr[] = {5,2,7,7,5,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    countFrequency(arr, n);

    return 0;
}

