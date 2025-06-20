#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void win_stage_1(int a, int b);
void win_stage_2(int a);
void win_stage_3(int a, int b, int c);
void win_stage_4(int a, int b, int c);
void win_stage_5(int a, int b, int c);

void vuln() {
    char buffer[64];
    printf("Enter your input: ");
    gets(buffer);
}

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);  
    printf("Exploit the vuln function to win!\n");
    vuln(); 
    
    return 0;
}

void win_stage_1(int a, int b) {
    if (a == 1 && b == 1337) {
        int fd = open("./flag", O_RDONLY);
        if (fd < 0) {
            perror("Error opening file");
            return;
        }
        char buffer[10];
        lseek(fd, 0, SEEK_SET);
        ssize_t n = read(fd, buffer, 10); 
        if (n > 0) write(1, buffer, n);
        close(fd);
    } else {
        printf("Incorrect parameters for win_stage_1!\n");
    }
}

void win_stage_2(int a) {
    if (a == 46) {
        int fd = open("./flag", O_RDONLY);
        if (fd < 0) {
            perror("Error opening file");
            return;
        }
        char buffer[10];
        lseek(fd, 10, SEEK_SET);        
        ssize_t n = read(fd, buffer, 10);
        if (n > 0) write(1, buffer, n);
        close(fd);
    } else {
        printf("Incorrect parameter for win_stage_2!\n");
    }
}

void win_stage_3(int a, int b, int c) {
    if (a == 76 && b == 172 && c == 24) {
        int fd = open("./flag", O_RDONLY);
        if (fd < 0) {
            perror("Error opening file");
            return;
        }
        char buffer[10];
        lseek(fd, 20, SEEK_SET);       
        ssize_t n = read(fd, buffer, 10);
        if (n > 0) write(1, buffer, n);
        close(fd);
    } else {
        printf("Incorrect parameters for win_stage_3!\n");
    }
}

void win_stage_4(int a, int b, int c) {
    if (a == 3 && b == 7 && c == 9) {
        int fd = open("./flag", O_RDONLY);
        if (fd < 0) {
            perror("Error opening file");
            return;
        }
        char buffer[10];
        lseek(fd, 30, SEEK_SET);        
        ssize_t n = read(fd, buffer, 10);
        if (n > 0) write(1, buffer, n);
        close(fd);
    } else {
        printf("Incorrect parameters for win_stage_4!\n");
    }
}

void win_stage_5(int a, int b, int c) {
    if (a == 8 && b == 15 && c == 23) {
        int fd = open("./flag", O_RDONLY);
        if (fd < 0) {
            perror("Error opening file");
            return;
        }
        char buffer[10];
        lseek(fd, 40, SEEK_SET);        
        ssize_t n = read(fd, buffer, 10);
        if (n > 0) write(1, buffer, n);
        close(fd);
    } else {
        printf("Incorrect parameters for win_stage_5!\n");
    }
}

void interesting_function() {
    asm("pop %rdi; ret");
    asm("pop %rsi; ret");
    asm("pop %rdx; ret");
}

