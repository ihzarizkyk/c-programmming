/*Author : Mochammad Ihza Rizky Karim*/
/*File : fungsi.c*/

#include<stdio.h>

int tambah(int a,int b)
{
	return(a+b);
}

int inkremen(int a)
{
	return(a+1);
}

int main(void)
{
	// Fungsi Tambah
	int angka1 = 10;
	int angka2 = 20;
	printf("Hasil Penjumlahan : %d",tambah(angka1,angka2));
	printf("\n");

	// Fungsi Inkremen
	printf("Angka 1 : %d",angka1);
	printf("inkremen nilai : %d",inkremen(angka1));
	printf("\n");
}

/*
OUTPUT :

Hasil Penjumlahan : 30
Angka 1 : 10inkremen nilai : 11

*/