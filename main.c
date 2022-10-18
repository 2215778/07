#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int counter);
 

int main(int argc, char *argv[]) {
	int i=10;
	printf("함수 호출 전 i=%d\n",i);
	
	inc(i); //매개변수가 선언되면 16열
	printf("함수 호출 후 i=%d\n",i);
	
	return 0;
}

int inc(int counter){  //counter로 매개변수 입력됨,그러나 main 함수에 영향 없음 
	counter++;
	
	return counter;
}
