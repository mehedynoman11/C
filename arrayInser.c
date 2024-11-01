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

    int pos, value;
    scanf("%d %d",&pos, &value);
    for (int i = N; i >= pos + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;

    for (int i = 0; i <= N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    

    return 0;
}