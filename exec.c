// exec is a system call used to replace the current process with a new process.

// exec() → replaces the current process with a new process with same PID
// execl() → executes a file, with list of arguments


#include <stdio.h>
#include <unistd.h>

int main() {

    printf("Before exec()\n");

    execl("/bin/ls", "ls", NULL);

    printf("After exec()\n");

    return 0;
}


// "/bin/ls" - Path to the ls command on Linux
// "ls" - This becomes argv[0] in the new process
// NULL - End of Argument