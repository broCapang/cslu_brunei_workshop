#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void win(int auth){ 

    if (auth != 1337){
    	printf("Nice try hacker");
	exit(0);
    }
    FILE *file = fopen("./flag", "r");
    if (file == NULL) {
        perror("Error opening ./flag");
        return;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

}

void vuln() {
    char buffer[64];
    printf("Enter some data: ");
    gets(buffer);  // Vulnerable function
}

void interesting_function() {
    asm("pop %rdi; ret");
}

int main(){
    vuln();
    return 0;
}

