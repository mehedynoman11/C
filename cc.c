// #include <stdio.h>

// int main() {

//     // Write your code here.
//     char X;
//     scanf("%c", &X);
//     if (X >= 'a' && X <= 'z')
//     {
//         printf("%c\n", X-32);
//     } else if (X >= 'A' && X <= 'Z')
//     {
//         printf("%c\n", X+32);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {

    
//     char str[101];
//     scanf("%c", &str);

//     for (int i = 0; i < strlen(str); i++)
//     {
//          if (str[i] >= 'a' && str[i] <= 'z')
//     {
//         str[i] = str[i] - 32;
//     } else if (str[i] >= 'A' && str[i] <= 'Z')
//     {
//         str[i] = str[i] + 32;
//     }
//     }
    

   
//     printf("%s", str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char str[101]; // Assuming the maximum length of input is 100 characters.
    scanf("%s", str); // Reading the input string.

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    printf("%s\n", str);
    return 0;
}
