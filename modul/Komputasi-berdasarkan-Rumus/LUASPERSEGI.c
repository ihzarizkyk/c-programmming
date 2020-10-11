/*Author : Mochammad Ihza Rizky Karim*/
/*File : LUASPERSEGI.c*/
/*
Tuliskanlah program yang membaca panjang dan lebar 
sebuah lantai ruangan yang berbentuk persegi (dalam m), 
kemudian menghitung luas lantai tersebut dalam m2.
*/

#include<stdio.h>

int main(void)
{
	int panjang;
	int lebar;
	int luas = panjang*lebar;

	printf("Masukkan Panjang Persegi : ");
	scanf("%i",&panjang);

	printf("Masukkan Lebar Persegi : ");
	scanf("%i",&lebar);

	printf("Luas Persegi : %i",luas);
	printf(" M2");
	printf("\n");
}