#include <stdio.h>


void function2(){
		int d = 400;
		int e = 500;
		int f = 600;


		return;
}



void function1(){
		int a = 10;
		int b = 20;
		int c = 30;

		function2();
		return;

}


int main(){

		function1();
		return;
}
