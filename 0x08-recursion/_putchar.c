<<<<<<< HEAD
#include "main.h" 
#include <unistd.h> 
  
/** 
 * _putchar - writes the character c to stdout 
 * @c: The character to print 
 * Return: On success 
 * On error, -1 is returned and errno is set appropriately 
 */ 
  
int _putchar(char c)  
{ 
	return(write(1, &c, 1));
=======
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
		return(write(1, &c, 1));
>>>>>>> 84e2d6cd045b636cc404aa45082e48421d8a319a
}
