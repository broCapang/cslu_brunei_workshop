#include <stdio.h>


void vuln(){
		char name[50];
		char result[60];

		printf("Enter your name: ");
		scanf("%49s", name);

		sprintf(result, "Hello Mr, %s! Nice to meet you", name);

		printf("%s\n", result);

		return;
}


int main() {

		vuln();
		return 0;
}


