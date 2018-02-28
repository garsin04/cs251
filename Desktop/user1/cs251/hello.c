#include<stdio.h>

void microkernel_sendmsg(char *);

int main(){
	printf("HelloWorld\n");
	microkernel_sendmsg("is more portable");
	return 0;
}

void microkernel_sendmsg(char *a){ printf("microkernel: %s\n", a);
}
