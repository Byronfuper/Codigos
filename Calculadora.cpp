#include<stdio.h>
#include<math.h>
int main(){
	
	int op;
	
	float x, y, res;
	
	printf("Por favor ingresa el valor del primer numero:");
	scanf("%f",&x);
	printf("Por favor ingresa el otro valor:");
	scanf("%f",&y);
	
	printf("1.suma\n 2.resta\n 3.multiplicacion\n 4.division\n 5.raiz cuadrada\n 6.potencia\n Ingresa un valor:");
	scanf("%i",&op);
	
	switch(op){ 
	
	case 1: res=x+y;
	printf("El resultado es: %.1f", res);
	break;
	
	case 2: res=x-y;
	printf("El resultado es: %.1f", res);
	break;
	
	case 3: res=x*y;
	printf("El resultado es: %.1f", res);
	break;
	
	case 4: res=x/y;
	printf("El resultado es: %.1f", res); 
	break;
	
	case 5: res=sqrt(x);
	printf("El resultado es: %.1f", res);
	break;
	
	case 6: 
	
	default: printf("Esa no es una opcion");
    
	}

}
