#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
 	ifstream plik1,plik2,plik3;
 	ofstream koniec;
 	int zapis = 1;
 	char* endptr;
 	bool pierwszy=true;
 	string godz1,godz2,godz3,licz1,licz2,licz3;
 	long liczba1,liczba2,liczba3,max1,max2,max3;
 	
 	plik1.open("c:\\pierwszy.txt");
 	plik2.open("c:\\drugi.txt");
 	plik3.open("c:\\trzeci.txt");
 	koniec.open("c:\\wyjscie.txt");
 		
     while(!plik1.eof())
     {
        plik1>>godz1>>licz1;
        plik2>>godz2>>licz2;
        plik3>>godz3>>licz3;
        liczba1=strtol(licz1.c_str(),&endptr, 2);
        liczba2=strtol(licz2.c_str(),&endptr, 4);
        liczba3=strtol(licz3.c_str(),&endptr, 8);
        if(pierwszy)
        {
            max1=liczba1;
            max2=liczba2;
            max3=liczba3;
            pierwszy = false;
        }
        if(liczba1>max1)
		{
            max1=liczba1;
            zapis++;
		}else if(liczba2>max2)
		{	  	
			max2=liczba2;
			zapis++;
		}else if(liczba3>max3)
		{  	
			max3 = liczba3;
			zapis++;
		}
                       
     }
 koniec<<zapis;
 plik1.close();
 plik2.close();
 plik3.close();
 koniec.close();
 return 0;
}
