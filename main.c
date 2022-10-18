#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
static int all_files; 

extern void sub(); //다른 함수에 정의된 아이를 끌어와 쓰겠다는 뜻인 extern 
 
int main(int argc, char *argv[]) {
	sub();
	printf("%d\n",all_files);
	
	return 0;
}

