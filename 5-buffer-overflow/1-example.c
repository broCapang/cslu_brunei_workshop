#include <stdio.h>


void vuln(){

		char name[10] = "very safe";
		char buffer[24];

		gets(buffer);

		printf("%10s",name);
		return;
}



int main(){


		vuln();

		return 0;
}
