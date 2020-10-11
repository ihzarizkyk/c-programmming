/*Author : Mochammad Ihza Rizky Karim*/
/*File : seq-search.c*/
/* Deskripsi : 
Menentukan posisi di mana elemen 
tabel bernilai X */

#include<stdio.h>

int main(void)
{
	int i;
	int Tab[10] = {1,50,6,200,3,100,30,8,99,100};
	int X=8;

	i = 0;
	while( (Tab[i]!=X) && (i<9) )
	{
		i++;
	}

	if( Tab[i] == X)
	{
		printf("Index bernilai X = %d",i);
		printf("\n");
	}else{
		printf("Nilai tidak ditemukan");
	}
}

/*
OUTPUT :

Index bernilai X = 7

*/