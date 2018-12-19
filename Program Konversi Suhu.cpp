#include <stdio.h>
#include <stdlib.h>

int main()
{
	float suhu,hasil;
	int jenis;
	char back;
	
	printf("--UNIVERSITAS PELITA BANGSA--\n");
	printf("--SEKOLAH TINGGI TEKNOLOGI--\n");
	printf("----TEKNIK INFORMATIKA\n-----");
	ulang:
		printf("--Pilih satuan suhu  :\n");
		printf("1. Celcius\n");
		printf("2. Fahrenheit\n");
		printf("2. Reamur\n");
		printf("2. Kelvin\n");
		printf("Silahkkan anda pilih :");
		scanf("%d" ,&jenis);
		switch(jenis)
		{
			case 1:
				printf("2. Masukan besar suhu : ");//Konversi Suhu Celcius
				scanf("%f", & suhu);
				hasil=(suhu*1.8)+32;
				printf("Fahreinheit : %.2f Fahreinheit\n ",hasil);
				hasil=suhu*0.8;
				printf("Reamur : %.2fReamur\n ",hasil);
				hasil=suhu+273.15;
			    printf("Kelvin : %.2f Kelvin\n ",hasil);
			    break;
			    
			    case 2:
				printf("2. Masukan besar suhu : ");//Konversi Suhu Fahrenheit
				scanf("%f", & suhu);
				hasil=(suhu-32)/1.8;
				printf("Celcius : %.2f Celcius\n ",hasil);
				hasil=(suhu-32)/2.25;
				printf("Reamur : %.2f Reamur\n ",hasil);
				hasil=((suhu-32)/1.8)+273.15;
			    printf("Kelvin : %.2f Kelvin\n ",hasil);
			    break;
			    
			    case 3:
				printf("2. Masukan besar suhu : ");//Konversi Suhu Reamur
				scanf("%f", & suhu);
				hasil=suhu/0.8;
				printf("Celcius : %.2f Celcius\n ",hasil);
				hasil=(suhu*2.25)+32;
				printf("Fahrenheit : %.2f Fahrenheit",hasil);
				hasil=(suhu/0.8)+273.15;
			    printf("Kelvin : %.2f Kelvin\n ",hasil);
			    break;
			    
			    case 4:
				printf("2. Masukan besar suhu : ");//Konversi Suhu Kelvin
				scanf("%f", & suhu);
				hasil=suhu-273.15;
				printf("Celcius : %.2f Celcius\n ",hasil);
				hasil=((suhu-273.15)*1.8)+32;
				printf("Fahrenheit : %.2f Fahrenheit\n ",hasil);
				hasil=suhu+273.15;
			    printf("Reamur : %.2f Reamur\n ",hasil);
			    break;
			    
			    default:
			    	printf("Kode pilihan yang anda masukan salah, Silahkan Ulangi kembali...");
			    	goto ulang;
		}
		
		
}
