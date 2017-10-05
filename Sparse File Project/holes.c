#include "apue.h"
#include <fcntl.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

/* This method is declared in apue.h*/
void err_sys(const char* x,...)
{
    perror(x);
    exit(1);
}

int main(void)
{
int fd;

/* creat function will return a file descriptor */
if ((fd = creat("file.hole", FILE_MODE)) < 0)
err_sys("creat error");

/* writing buf1 to file.hole */
if (write(fd, buf1, 10) != 10)
err_sys("buf1 write error");


/* offset now = 10 */
if (lseek(fd, 16384, SEEK_SET) == -1)
err_sys("lseek error");
/* offset now = 16384 */

/* buf2 data will be written from offset 16384*/
if (write(fd, buf2, 10) != 10)
err_sys("buf2 write error");
/* offset now = 16394 */

return 0;
}
