#include <stdio.h>

//COMMENT1

void function()
{
	return ;
}

int main()
{
	//COMMENT2
	char *str="#include <stdio.h>%c%c//COMMENT1%c%cvoid function()%c{%c%creturn ;%c}%c%cint main()%c{%c%c//COMMENT2%c%cchar *str=%c%s%c;%c%cprintf(str, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 10);%c%cfunction();%c}%c";
	printf(str, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 10);
	function();
}
