#include <stdio.h>
#include <string.h>

int main()
{
    char username[100];
    int pin;

    printf("Enter username:\n");
    scanf("%99s", username);

    printf("Enter pin:\n");
    scanf("%d", &pin);

    printf("Username: %s\n", username);
    printf("Pin: %d\n", pin);

    if (strcmp(username, "bob") == 0 && pin == 1)
    {
        printf("Login into the system");
    }
    else
    {
        printf("Login is invalid");
    }

    return 0;
}

