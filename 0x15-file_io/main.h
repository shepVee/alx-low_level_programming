#ifndef _main_h_
#define _main_h_

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


int _strlen(char *s);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);







#endif
