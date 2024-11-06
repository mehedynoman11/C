#include <stdio.h>

int main() {

    // Write your code here.
    char X[101];
    scanf("%s", X);
    int count = 0;
    // for (int i = 0; X[i] != '\0'; i++)
    // {
    //     count++;
    // }
    while (X[count] != '\0') {
        count++;
    }
    printf("%d\n", count);
    printf("%s\n", X);
    return 0;
}