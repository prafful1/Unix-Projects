#include "apue.h"
#include <fcntl.h>
#define BUFFSIZE 4096

void err_sys(const char* x,...)
{
    perror(x);
    exit(1);
}

int main(void)
{
int n,fd2;
char buf[BUFFSIZE];

int fd1 = open("fileRead",O_RDONLY,O_SYNC);

if ((fd2 = creat("fileWrite", FILE_MODE)) < 0)
        err_sys("creat error");


/*int fd2 = open("fileWrite",O_RDONLY|O_CREAT,FILE_MODE);*/
while ((n = read(fd1, buf, BUFFSIZE)) > 0)
if (write(fd2, buf, n) != n)
        err_sys("write error");
if (n < 0)
        err_sys("read error");
return 0;
}
