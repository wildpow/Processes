// Write another program using `fork()`. The child process should print "hello";
// the parent process should print "goodbye". You should ensure that the child
// process always prints first.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    // Your code here
    pid_t pid = fork();

    if(pid == 0) {
        printf("%s", "hello\n");
    } else {
        int wc = waitpid(pid, NULL, 0);
        printf("%s", "Goodbye\n");
    }
    return 0;
}
