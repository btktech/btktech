// Function pointer //

#include <stdio.h>
#include<stdlib.h>


void mesg(int num){
	printf("Mesg No. %d\n", num);
}

int* add2(int x, int y){
	int *z = (int *)malloc(sizeof(int));
	*z = 10;
	return z;
}


int add(int x, int y){
	int z = x + y;
	return z;
}
int sub(int x, int y){
	int z = x - y;
	return z;
}
int mul(int x, int y){
	int z = x * y;
	return z;
}
int dv(int x, int y){
	int z = x / y;
	return z;
}




int main(int argc, char* argv[])
{
	int *t;
	int res=0;
	void (*fpmsg)(int);
	int* (*addfptr)(int, int);
	int (*arrpf [])(int x, int y) = {add, sub, mul, dv};
	
	addfptr = &add2;
	fpmsg = mesg;
	
	t= addfptr(12,30);
	printf("t = %d\n", *t);
	fpmsg(20);
	
	res = arrpf[0](2, 3);
	printf("Add = %d\n", res);
	
	res = arrpf[1](5, 3);
	printf("Sub = %d\n", res);
	
	res = arrpf[2](2, 3);
	printf("Mul = %d\n", res);
	
	res = arrpf[3](20, 4);
	printf("Div = %d\n", res);
	
	return 0;
}

