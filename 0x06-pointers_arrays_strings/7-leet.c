#include "main.h"
/**
 * *leet - check the code for Holberton School students.
 *
 * @str: string.
 * Return: string.
 */
char *leet(char *str) {
    static char result[256]; // buffer to hold the encoded string
    int i, j;
    char c;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        c = str[i];

        // check if c is one of the letters to be replaced
        if (c == 'a' || c == 'A') {
            result[j++] = '4';
        } else if (c == 'e' || c == 'E') {
            result[j++] = '3';
        } else if (c == 'o' || c == 'O') {
            result[j++] = '0';
        } else if (c == 't' || c == 'T') {
            result[j++] = '7';
        } else if (c == 'l' || c == 'L') {
            result[j++] = '1';
        } else {
            result[j++] = c;
        }
    }

    result[j] = '\0'; // terminate the result string
    return result;
}

