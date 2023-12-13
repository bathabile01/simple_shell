#include "shell.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination string to be copied to.
 * @src: The source string.
 * @n: The number of characters to be copied.
 *
 * Return: The concatenated string.
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n - 1 && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used.
 *
 * Return: The concatenated string.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	if (i < n)
	{
		dest[dest_len + i] = '\0';
	}

	return (dest);
}

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be parsed.
 * @c: The character to look for.
 *
 * Return: A pointer to the first occurrence of the character in the string.
 *         If the character is not found, returns NULL.
 */
char *_strchr(const char *s, int c)
{
	do {
		if (*s == c)
			return (char *s);
	} while (*s++ != '\0');

	return (NULL);

