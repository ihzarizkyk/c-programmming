//https://en.wikipedia.org/wiki/The_C_Programming_Language
/*3 Tahapan Kompiler : Tahap Pendefinisian, Tahap Alokasi Memori untuk Menyimpan Nilai,
Tahap Inisialisasi.
*/

// #include<stdio.h>
 
// int main()
// {
// 	float x = 0.555;
// 	float y = 1.5E3;

// 	printf("Ini Nilai x : %f \n",x);
// 	printf("Ini Nilai x : %5.2f \n",x);
// 	printf("Ini Nilai y : %10.2f \n",x);

// }

//Operasi Boolean

// #include <stdio.h>

// int main()
// {
// 	int TRUE = 1;
// 	int FALSE = 0;

// 	printf("ini adalah nilai TRUE AND TRUE %d \n", TRUE && TRUE );
// 	printf("ini adalah nilai TRUE OR FALSE %d \n", TRUE || FALSE);
// 	printf("ini adalah nilai FALSE AND TRUE %d \n", FALSE && TRUE);
// 	printf("ini adalah nilai FALSE OR TRUE %d \n", FALSE || TRUE);
// 	printf("ini adalah nilai NOT TRUE %d \n", !TRUE);
// 	printf("ini adalah nilai NOT FALSE %d \n", !FALSE);
// 	printf("ini adalah nilai NOT TRUE AND NOT FALSE %d \n", !TRUE && !FALSE);
// 	printf("ini adalah nilai NOT FALSE AND NOT TRUE %d \n", !FALSE && !TRUE);
// 	printf("ini adalah nilai NOT FALSE OR NOT TRUE %d \n", !FALSE || !TRUE );
// 	printf("ini adalah nilai NOT TRUE OR NOT FALSE %d \n", !TRUE || !FALSE );

// 	return 0;
// }

// #include <stdio.h>

// int main(void)
// {
// 	int uang = 6000;
// 	int hujan = 0;
// 	printf("uang>5000 dan tidak hujan : %d \n", (uang>5000) && (!hujan));

// 	int uang = 6000;
// 	int hujan = 1;
// 	printf("uang>5000 dan tidak hujan : %d \n", (uang>5000) && (!hujan));
// }

// #include <stdio.h>

// int main(void)
// {
// 	int a;
// 	a = 1;
// 	printf("Nilai a : %d \n", --a);

// 	int b;
// 	b = 1;
// 	printf("Nilai b : %d \n", ++b);
// }

//PROGRAM AKAN DIEKSEKUSI MULAI DARI BARIS PERTAMA HINGGA AKHIR,CONSTRUCT INI DINAMAKAN
//kontruksi sekuensial

//PENGKONDISIAN

// #include <stdio.h>

// int main(void)
// {
// 	int a;

// 	printf("Masukkan Nilai a: ");
// 	scanf("%d", &a);

// 	if(a >= 0)
// 	{
// 		printf("Nilai anda positif %d \n", a);
// 	}else
// 	{
// 		printf("Nilai anda negatif %d \n", a);
// 	}
// }

// #include <stdio.h>

// int main(void)
// {
// 	int nomor;

// 	printf("Masukkan Nomor ");
// 	scanf("%d", &nomor);

// 	if(nomor == 1)
// 	{
// 		printf("Ini adalah hari senin tanggal %d \n", nomor);
// 	}
// 	if(nomor > 1)
// 	{
// 		printf("Ini adalah hari selasa tanggal %d \n", nomor);
// 	}
// 	if(nomor > 2)
// 	{
// 		printf("Ini adalah hari rabu tanggal %d \n", nomor);
// 	}
// }

//PENGULANGAN

/*
for (...) { ...};
while (....) {.... };
do {....} while(.....);
*/

// #include <stdio.h>

// int main(void)
// {
// 	char i;

// 		puts("Program Perulangan");

// 	for(i = 0; i<=100; i++)
// 	{	
// 		if(0 < i)
// 		{
// 			printf("Masukkan kalimat : "); scanf("%c", &i); 
// 			printf("%c \n",i);
// 		}
// 	}
// }

// #include <stdio.h>

// int main(void)
// {
// 	int i = 1;

// 	while(i<=4)
// 	{
// 		printf("%d",i);
// 		printf(".Saya Sedang belajar Bahasa Pemrograman C \n");
// 		i++;
// 	}

// }

//Do While

// #include <stdio.h>

// int main(void)
// {
	
// 	int i = 1;

// 	do{

// 	printf("%d",i);
// 	printf(".Ini Perulangan do while \n");
// 	i++;

// 	} while(i<=10);

// }


// #include <stdio.h>

// int main(void)
// {
// 	while(1)
// 	{
// 		printf("Program sedang berjalan.....\n");
// 	}
// }

//Array Tabel

// #include <stdio.h>

// int main(void)
// {
// 	int Tab[5] = {1,2,3,4,5};
// 	int i;

// 	for(i = 0; i<5; i++ ){
// 		printf("Tab %d;",i,Tab[i]);
// 		printf("\n");
// 	}
// printf("\n");
// }

/*#include <stdio.h>

int main()
{
	int Tab[5];
	int i;

	for(i=0; i<5; i++){
		scanf("%d",&Tab[i]);
	}

	for(i=0; i<5; i++){
		printf("Tab[%d] = %d :",i,Tab[i]);
	}

	printf("\n");

	return 0;
}*/

/*
#include<stdio.h>

int main()
{
	int Tab[10] = {1,50,5,25,6,88,100,3,11,21};
	int i;
	int max;

	max = Tab[0];

	for(i=0; i<10; i++){
		if(Tab[i]>max){
			max = Tab[i];
		}
	}

	printf("Nilai Max : %d",max);
	printf("\n");

	return 0;
}
*/

// Sorting-Maximum Sort

#include<stdio.h>

int main(void)
{
	int angka = 10;

	printf("Ini Adalah angka %d",angka);
	printf("\n");
}