#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int all_files; //공통되는 전역변수 
 
 
int main(int argc, char *argv[]) {
	sub(); //이름없음의 void sub로 인해 연결됨 
	printf("%d\n",all_files);
	
	return 0;
}

