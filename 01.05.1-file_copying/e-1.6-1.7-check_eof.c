/* verifies EOF and prints the value of EOF*/
#include <stdio.h>

int main(void)
{
    int c;
    while ((c = (getchar() != EOF)))
        printf("%d\n", c);
        printf("%d\n", EOF);

    return 0;
}
