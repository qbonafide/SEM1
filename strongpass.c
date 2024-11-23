#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isStrong = true;

// MULAI NGODING DARI SINI
// YOUR CODE STARTS HERE

bool CheckNumber(char password[])
{
    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
            return true;
    }
    isStrong = false;
    return false;
}

bool CheckUppercase(char password[])
{
    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] >= 'A' && password[i] <= 'Z')
            return true;
    }
    isStrong = false;
    return false;
}

bool CheckKey(char password[], int key)
{
    int digitpass = 0;

    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
        {
            digitpass += password[i] - '0';
        }
    }

    if (digitpass == key)
        return true;
    else
    {
        isStrong = false;
        return false;
    }
}

// NGODING SAMPE SINI, mengedit kode di bawah adalah tindakan ilegal
// YOUR CODE ENDS HERE, editing codes below is illegal

int main()
{
    char password[128];
    int key;
    scanf("%s %d", password, &key);
    if (!CheckNumber(password))
        printf("Password needs number\n");
    if (!CheckUppercase(password))
        printf("Password requires at least one uppercase letter\n");
    if (!CheckKey(password, key))
        printf("Digits in password not equal to key\n");
    if (isStrong)
        printf("Password is strong, just like you\n");
    else
        printf("Weak password, fix your mistakes\n");
}