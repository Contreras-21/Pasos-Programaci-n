#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int main(void)
//{
// printf("World!\n");
// return 0;
// }
int main(void)
{
    string answer = get_string("What´s your name?: ");
    string m1 = strcat(answer, " Yupiiiiii!!!");
    // int age = get_int("How old are you?: ");
    printf("%s", m1);
    return 200;
}
// Carlos Contreras
