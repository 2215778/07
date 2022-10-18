#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void f(void);

int i; //i가 10까지 증가 
int main(int argc, char *argv[]) {
	for(i=0; i<5; i++)
	{
		f(); //f 소멸로 5번 반복 못함 
	}
	
	return 0;
}

void f(void){
	for(i=0; i<10; i++) //main의 i와 이름이  같은 변수 //for문 돌릴때는 지역 변수로 돌리기 
	    printf("#"); //#을 10번 반복 
}
