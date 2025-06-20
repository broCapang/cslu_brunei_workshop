#include <stdio.h>

void win(){ 
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

int main(){
    vuln();
    return 0;
}

