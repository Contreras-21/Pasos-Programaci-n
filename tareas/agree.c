#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char agree = get_char("Do you agree?: ");

    if (agree == 'y' || agree == 'Y') {
        printf("You agreed!.\n");
    }
    else if (agree == 'n' || agree == 'N') {
        printf("You did not agree!.\n");
    }
    else {
        printf("Are you crazy fool?.\n");
    }
}
// Carlos Contreras
