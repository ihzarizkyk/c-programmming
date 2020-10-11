/*Author : Mochammad Ihza Rizky Karim*/
/*File : random.c*/

#include<stdio.h>
#include<stdlib.h>

/****************/

int main(void)
{
	const int MIN=1;
	const int MAX=100;

	for(int i = 0; i<5; i++)
	{
		printf("%d", rand()%MAX+MIN);
		printf("\n");
	}
}

/*
OUTPUT :

84
87
78
16
94

*/