#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	int fd;
	char data[11]="Hello World";
       fd=open("/home/mamatha/Mamatha_c-practice/text.txt",O_CREAT|O_RDWR);
       if(fd>0)
       {
	       printf("File opened successfully!\n");
	       write(fd,data,11);
	       lseek(fd,0,SEEK_SET);
	       read(fd,data,11);
	       printf("Read content is: %s\n",data);
       }
       else
       {
	       printf("file not opended\n");
       }
       close(fd);
       return 0;
}
