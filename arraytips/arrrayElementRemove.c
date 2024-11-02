#include <stdio.h>

int main() {

    // Write your code here.
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    scanf("%d", &pos);
    for (int i = pos; i < N-1; i++)
    {
        arr[i] = arr[i+1];
    }
    for (int i = 0; i < N - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}