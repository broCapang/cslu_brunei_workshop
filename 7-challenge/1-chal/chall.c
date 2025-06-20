#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


void alarm_handler() {
    puts("TIME OUT");
    exit(-1);
}


void initialize() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    signal(SIGALRM, alarm_handler);
    alarm(30);
}


void win(int auth, int auth2){ 

    if (auth != 1337 || auth2 != 7331){
    	printf("Nice try hacker");
	exit(0);
    }
    system("/bin/sh");
}

void vuln() {
    char buffer[64];
    printf("Enter message: ");
    read(0, buffer, 0x400); 
}

int main(int argc, char *argv[]){
    initialize();
    vuln();
    return 0;
}


void gadgets() {
    asm("pop %rdi; ret");
    asm("pop %rsi; ret");
    asm("pop %rdx; ret");
}

