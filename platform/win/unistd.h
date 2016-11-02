#include <io.h>

#define R_OK 4

typedef long int off_t;

int ftruncate(int fd, off_t length);