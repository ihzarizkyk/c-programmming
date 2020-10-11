// #include <stdio.h>

// int main(void)
// {
// 	printf("Hello\nDunia\n");
// 	printf("ini adalah program pertamaku\n");
	
// 	int num1;
// 	int num2;
// 	int sum;
// 	printf("Masukkan Nomornya :\n");

// 	scanf("%d", &num1);
// 	scanf("%d", &num2);

// 	sum = num1 + num2;
// 	printf("Hasil Penjumlahan %d", sum);
// 	printf("\n");

// 	int num3 = 10;
// 	if(sum == num3){
// 		printf("Hasilnya Sama\n");
// 	}else{
// 		printf("Hasilnya gk Sama\n");
// 	}

// 	int num4 = 20;
// 	if(sum == num4){
// 		printf("Hasilnya Sama");
// 	}else{
// 		printf("Hasilny gk Sama\n");
// 	}

// 	int num5 = 30;
// 	if(sum == num5){
// 		printf("Hasilnya Sama");
// 	}else if(sum > num5){
// 		printf("Hasilnya Besar\n");
// 	}else{
// 		printf("Terlalu Kecil\n");
// 	}
	
// }

//Komentar di Bahasa Pemrograman C

// #include <stdio.h>

//Cara Membuat Variabel

// int main(void){
// 	int angka;
// 	char huruf;
// 	float flooat;

// 	angka = 123;
// 	huruf = 'A';
// 	flooat = 1.50;

//Untuk Print variabel kita harus selipkan juga karakter khusus sesuai tipe datanya
// 	printf("Ini variabel angka integer %i",angka);
// 	printf("\n");
// 	printf("Ini variabel karakter %c",huruf);
// 	printf("\n");
// 	printf("Ini variabel angka float %f",flooat);
// 	printf("\n");
// }

//Output

/*
Ini variabel angka integer 123
Ini variabel karakter A
Ini variabel angka float 1.500000
*/

//KONSTANTA

//CARA PERTAMA

// #include <stdio.h>

// #define LENGTH 10
// #define WIDTH 20
// #define NEWLINE '\n'

// int main(void){
// 	int area;

// 	area = LENGTH * WIDTH;
// 	printf("Nilai Dari Area adalah %d", area);
// 	printf("%c",NEWLINE);

// }

//CARA KEDUA

// int main(void){

// 	const int TINGGI = 10;
// 	const int LEBAR = 20;
// 	const char BARU = '\n';
// 	int area;

// 	area = TINGGI * LEBAR;
// 	printf("Total Luas Area %d", area);
// 	printf("%c",BARU);

// }

// #include <stdio.h>

// int main(void){
// 	int a = 2;
// 	int b = 10;
// 	int hasil = a * b;

// 	printf("Hasil Operasi Perhitungan : %d", hasil);
// 	printf("\n");
// }


//SWITCH CASE

// #include <stdio.h>

// int main(void){
// 	int a = 40;

// 	switch(a){
// 		case 100:
// 		printf("Sempurna\n");
// 		break;

// 		case 90:
// 		printf("Sangat Bagus\n");
// 		break;

// 		case 80:
// 		printf("Baik\n");
// 		break;

// 		case 70:
// 		printf("Cukup Baik\n");
// 		break;

// 		case 60:
// 		printf("Kurang\n");
// 		break;

// 		case 50:
// 		printf("Buruk");
// 		break;

// 		default:
// 		printf("Sangat Jelek\n");
// 	}
// }


//Penggunaan scanf() dan puts()

// #include <stdio.h>

// int main(void)
// {
// 	int jumlah;

	
// 	puts("INI CONTOH PENGGUNAAN FUNGSI scanf() dan puts()");

// 	printf("Masukkan Jumlah : ");
// 	scanf("%d",&jumlah);

// 	printf("Jumlah : %d",jumlah);
// 	printf("\n");

// }

// #include <stdio.h>

// void main()
// {
// 	int a;
// 	char b[25];

// 	printf("Masukkan Kalimat : "); 
// 	scanf("%c", &b);

// 	for(a = 0; a<=10; a++)
// 	{
// 		// printf("%d ",a); 
// 		printf("%i %c \n", a, b);
// 	}
// }

//Fungsi gets
// #include <stdio.h>

// void main()
// {
// 	char nama[10];
// 	int umur;	

// 	printf("Nama anda : ");
// 	gets(nama);

// 	printf("Umur anda : ");
// 	gets(umur);

// 	printf("Nama anda : %s \n", nama);
// 	printf("Umur anda : %d \n", umur);
// }


//Fungsi fgets
// #include <stdio.h>

// int main(void)
// {
// 	char nama[10];
// 	int umur;	

// 	printf("Nama anda : ");
// 	fgets(nama, 10, stdin);

// 	printf("Umur anda : ");
// 	fgets(umur, 10, stdin);

// 	printf("Nama anda : %s", nama);
// 	printf("Umur anda : %d", umur);
// }

//Linear Search

#include <stdio.h>

int search(int arr[],int n,int x)
{
	int i;
	for(i = 0; i < n; i++)
		if(arr[i] == x)
			return i;
	return -1;
}

int main(void)
{
	int arr[] = {1,2,3,4,5,6};
	int x = 5;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = search(arr, n, x);
	if(result == -1){
		printf("Elemen Tidak ada di Array");
	}else{
		printf("Elemen ada di index ke %d \n",result);
	}
	return 0;
}
