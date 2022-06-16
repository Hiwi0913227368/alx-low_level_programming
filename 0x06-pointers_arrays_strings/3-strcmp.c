#include "main.h"
/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: string value
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i] && s1[i] != '\0')
i++;
return (s1[i] - s2[i]);
}
