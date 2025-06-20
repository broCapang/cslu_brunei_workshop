#include <stdio.h>



void function2(){

		int c = 400;
		int d = 500;

		return;
}

void function1(){

		int a = 10;
		int b = 20;

		function2();

		return;
}

int main(){
		function1();

		return 0;

}
