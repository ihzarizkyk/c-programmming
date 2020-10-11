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

Search adalah salah satu algoritma yang akan 
sering digunakan dalam problem solving, 
maka salah satu modal yang diperlukan adalah searching. Pada hakekatnya komputer adalah tempat menyimpan, dan kita membutuhkan untuk mencari apa yang sudah disimpan. Nilai-nilai yang disimpan dapat diorganisasi dalam struktur data yang lebih rumit dari tabel, dan algoritma yang diimplementasi juga lebih optimal. Untuk mendapatkan gambaran algoritma yang menggunakan struktur data dan teknik yang lebih sulit, Anda dapat mulai membaca 
https://en.wikipedia.org/wiki/Search_algorithm.

---------
OUTPUT :

Index bernilai X = 7

*/