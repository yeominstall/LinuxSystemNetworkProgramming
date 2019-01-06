#include <iostream>

#include <sys/types.h>
#include <unistd.h>

/**
 * fork() -- a tranditional way for copying process
 * ParentProcess -- fork() --> ChildProcess
 * fork is used for multi-tasking
 * 
 */

int main (void) {
    pid_t p;

    p = fork();

    std::cout << "PID: " << p << std::endl;

    if (p == 0) {
        std::cout << "[" << p << "]This is child process" << std::endl;
    }

    std::cout << "PID: " << p << std::endl;

    return 0;
}