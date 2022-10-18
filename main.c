#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int flag=1;
	int y=3; //외부에 y변수를 선언해주기 
	
	while(flag!=0)
	{
		y=3;
		flag=0;
	}
	
	y=4; //성립하려면 8 열에 y변수 선언 
	return 0;
}

//y=4;은 불가능, 외부엔 변수 선언밖에 안됨 
