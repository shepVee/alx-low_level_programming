#include "main.h"
#include <unistd.h>

/**                                              
 *function - inserts character                    
 *                                                
 *@d: character parameter                         
 *                                               
 *Return: Always 0 (Sucess)                      
 */                                               
int _putchar(char d)                              
{                                                
	return (write(1, &d, 1));
}     
