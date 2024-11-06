#include <stdio.h>
#include <string.h>

int main() {

    // Write your code here.
    // char X[7] = {'N', 'o', 'm', 'a', 'n', 's', 'l'};
    // char X[7] = "Noman";
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("%c\n", X[i]);
    // }
    // char X[] = "Nomansl\0";
    // int sz = sizeof(X)/ sizeof(char);
    // printf("%s\n", X);
    // printf("%d\n", sz);

    // char s[];
    // int siz = sizeof(s)/sizeof(char);
    // scanf("%s", s);
    // printf("%s\n", s);
    // printf("%d\n", siz);
    char s[100];
    int sz = sizeof(s)/sizeof(char);
    gets(s);
    printf("%s\n", s);
    printf("%d\n", sz);


    return 0;
}