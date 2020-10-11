//Perulangan While
// Jika pada sebelumnya sudah anda ketahui mengenai perulangan for
// Maka, sekarang saya bahas perulangan while
// Pada dasarnya, perulangan while hampir sama dengan perulangan for
// Akan tetapi, perulangan while memisah struktur perulangan
// berbeda dengan for yang dijadikan satu dalam satu baris syntax
// perulangan membagi menjadi 3 bagian

// #include <stdio.h>

// int main()
// {
	// int a = 1; //start
	// while(a < 5)//proses perulangan
	// {
		// printf("Ini Perulangan WHILE \n");
		// a++; //increment
// 	}

// 	return 0;
// }

//coba saya jalankan
//seperti itu penggunaan perulangan while, semoga paham.



//Perulangan Do While
// Perulangan do while sebenarnya mirip dengan while
// akan tetapi perulangan do while meletakkan do diawal dan
// while diletakkan diakhir 
//coba kita membuat program sederhana menggunakan do while

// #include <stdio.h>

// int main()
// {
	// int a = 1; // variabel
	// do{
		// printf("Ini adalah Perulangan do while \n");//code block
		// a++; //increment
	// }
	// while(a<5); //while(condition atau kondisi)
	// return 0; // return nilai
// }

//kurang lebih seperti itu struktur perulangan do while
//coba kita jalankan
/*output :
Ini adalah Perulangan do while 
Ini adalah Perulangan do while 
Ini adalah Perulangan do while 
Ini adalah Perulangan do while */

//Break dan Continue

/*Break adalah fungsi yang digunakan untuk menghentikan
Paksa sebuah perulangan sebelum mencapai syarat yang 
ditentukan*/

/*Continue berfungsi untuk meloncati dan meneruskan 
perulangan selama kondisi terpenuhi*/

// #include <stdio.h>

// int main(){
// 	int a;
// 	for(a = 1; a<10; a++){
// 		printf("Ini Perulangan %d \n",a);
		// if(a == 5){
		// 	break; // break sampai nilai ke-5
// 		}
// 	}
// 	return 0;
// }

/*OUTPUT  :
Ini Perulangan 1 
Ini Perulangan 2 
Ini Perulangan 3 
Ini Perulangan 4 
Ini Perulangan 5 */

//PERULANGAN AKAN BREAK KETIKA NILAI a == 5;
//walaupun syaratnya kurang dari sepuluh

//Continue

// #include <stdio.h>

// int main(){
// 	int a;
// 	for(a = 1; a<10; a++){
// 		if(a == 5){
// 			continue; // continue nilai ke-5
// 		}
// 		printf("Ini Perulangan %d \n",a);
// 	}
// 	return 0;
// }

//Kenapa nilai 5 masih tidak diloncati?
//karena peletakkan printf ditaruh sebelum pengecekan if
//jadi tetap dijalankan dan tidak meloncati 5

/*output :
Ini Perulangan 1 
Ini Perulangan 2 
Ini Perulangan 3 
Ini Perulangan 4 
Ini Perulangan 6 
Ini Perulangan 7 
Ini Perulangan 8 
Ini Perulangan 9 */

//ketika saya pindah printf setelah if
//maka, otomatis setelah perulangan dicek terlebih dahulu
// baru setelah itu printf dijalankan




// Percabangan 
// adalah sebuah kondisi dimana ketika nilai bernilai true kode 
// akan dieksekusi, sedangkan ketika kondisi tidak memenuhi atau
// false. maka, akan mengarahkan ke blok kode selanjutnya

//Macam - macam Percabangan : 
//if,if...else...,if...else if...else... dan switch...case...
//pada video kali ini akan dibahas if dan if else

// Percabangan if adalah kondisi dimana ketika nilai memenuhi syarat
// atau true maka akan dijalankan kode tertentu dan jika nilai false
// Program akan berhenti
//Contoh :

// #include <stdio.h>

// void main()
// {
// 	int a = 20;

// 	if(a==20){
// 		printf("Ini Nilai True \n");
// 	}
// }

//penjelasan :
/*ketika a tidak sama dengan 20.maka, program tidak akan
dijalankan dan ketika a sama dengan 20 maka akan dijalankan*/

// Percabangan if...else adalah
// Kondisi percabangan ketika nilai true akan di eksekusi di
// dalam kondisi if
// dan ketika nilai false maka akan dialihkan ke kondisi else

//contoh :

// #include <stdio.h>

// void main()
// {
// 	int a = 30; // ketika saya ganti
// 	maka, kondisi langsung dialihkan ke else karena nilai
// 	tidak memenuhi

// 	if(a==20){
// 		printf("Ini Nilai True \n");
// 	}else{
// 		printf("Ini Nilai False \n");
// 	}
// }

// Percabangan if else if
// adalah struktur kondisi percabangan ketika if pertama 
// tidak bernilai false. maka, akan 
// dilanjutkan lagi ke if selanjutnya dan seterusnya hingga else
// atau if bernilai true

//Percabangan if else if :

// #include <stdio.h>

// int main()
// {
// 	int nilai;

// 	printf("Masukkan Nilai : ");
// 	scanf("%d",&nilai); // scanf berfungsi untuk inputan user

// 	if(nilai == 100){
// 		printf("Nilai Sempurna \n");
// 	}
// 	else if(nilai == 90){
// 		printf("Nilai Sangat Baik \n");
// 	}
// 	else if(nilai == 70){
// 		printf("Nilai Cukup Baik \n");
// 	}
// 	else{
// 		printf("Nilai Buruk \n");
// 	}

// 	return 0;
// }

//Coba kita jalankan program diatas


//Switch Case

/*SWITCH CASE adalah Kondisi Percabangan yang memiliki 2 
bagian fungsi. switch berfungsi sebagai pengecek variabel,
sedangkan case berfungsi untuk membandingkan nilai
Penjelasan :

Pertama, cek variabel menggunakan switch
Kedua, cek nilai variabel dengan case
Ketiga, ketika nilai tidak sesuai. Maka, lanjutkan case yang
selanjutnya. Terus menerus hingga nilai memenuhi
Keempat, ketika semua nilai tidak memenuhi. Maka, otomatis
akan dialihkan ke default. Atau kata lain akan dialihkan 
ke kondisi else (sama seperti if else)*/

//Contoh Program

#include <stdio.h>

int main()
{
	char nilai;

	printf("Masukkan Nilai : ");
	scanf("%c",&nilai);

	switch(nilai){

		case 'A':
		printf("Nilai Sempurna \n");
		break;

		case 'B':
		printf("Nilai Baik \n");
		break;

		case 'C':
		printf("Nilai Buruk \n");
		break;

		default:
		printf("Nilai Tidak Memenuhi \n");
	}

	return 0;
}

/*OUTPUT :

Masukkan Nilai : A
Nilai Sempurna 

Masukkan Nilai : B
Nilai Baik 

Masukkan Nilai : C
Nilai Buruk 

Masukkan Nilai : D
Nilai Tidak Memenuhi 

Ketika saya inputkan huruf D. Maka, otomatis akan 
dialihkan ke default. karena tidak memenuhi case*/