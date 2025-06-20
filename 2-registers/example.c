#include <stdio.h>


void function(int a, int b) {
		int x = a+b;
		printf("x: %d\n",x);
		return;
}
int main() {
		function(12,15);
		return 0;
}

