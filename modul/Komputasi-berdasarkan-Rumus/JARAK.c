/*Author : Mochammad Ihza Rizky Karim*/
/*File : JARAK.c*/
/*
Tuliskanlah program yang:
1.Membaca nilai v (kecepatan), dan t (waktu tempuh) 
sebuah mobil yang bergerak lurus beraturan dari 
kota A ke kota B.

2.Menghitung dan menuliskan jarak kota A ke kota B, 
yang ditempuh mobil tersebut.
*/

#include<stdio.h>

int main(void)
{
	int v = 48;
	int t = 1;
	int jarak = v*t;

	puts("Diketahui : Kecepatan Sebuah Mobil : 48 km/jam,Waktu ditempuh untuk menuju kota A ke kota B : 1 jam.\nMaka, Berapa Jarak dari Kota A Ke Kota?\n");
	printf("Jarak : %d",jarak);
	printf(" Km");
	printf("\n");
}