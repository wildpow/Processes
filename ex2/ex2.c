// Write a program that opens the text.txt  file (with the `fopen()` system call) located in this directory 
// and then calls `fork()` to create a new process. Can both the child and parent access the file descriptor 
// returned by `fopen()`? What happens when they are written to the file concurrently?

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char dirname[1024];
    getcwd(dirname, 1024);
    printf("This %s\n", dirname);
    FILE * fp;
    fp = fopen ("text.txt", "w+");
    pid_t pid = fork();
    if(pid == 0) {
        fprintf(fp, "%s", "Hello from child\n");
        fclose(fp);
    } else {
        fprintf(fp, "%s", "Hello from Parent\n");
        fclose(fp);
    }
    return 0;
}
