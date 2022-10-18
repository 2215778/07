extern int all_files;

void sub(void) //main 함수가 all_files를 못 쓰게 하고 싶으면 앞에 static을 붙이면 됨 
{
	all_files=10;
}
