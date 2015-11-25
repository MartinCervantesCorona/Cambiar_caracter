#include<stdio.h> 
char palabra[20],letra,nueva; 
int main() 
{ 
	printf("Ingrese la palabra "); 
	scanf ("%s",palabra); 
	printf("Ingrese la letra que quiere reemplazar "); 
	scanf ("%s",&letra); 
	printf("Ingrese la letra por la que va a reemplazarla "); 
	scanf ("%s",&nueva); 
	for(int I=0;I<25;I++) 
	{ 
		if(palabra[I]==letra) 
		{ 
			palabra[I]=nueva; 
		} 
	} 
	printf("La nueva palabra es %s",palabra); 
} 
