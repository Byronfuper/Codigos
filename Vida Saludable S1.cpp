#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	int op;
	int rep = 0;
	do{
	float a, b, c, d, e, f, g, h, i, j, k, total1, total2, ts1, tm1, ta1, ts2, tm2,ta2, tc;
	
	    setlocale(LC_ALL, "");  
	printf("\n");	  
	printf("Buenas tardes, el dia de hoy veremos los gastos de conlleva el embarazo y el primero año del bebé en un tiempo determinado (día, semana, mes y año), con el objetivo de evaluar la cantidad de gastos que se tienen en una situacion asi. ");
	printf("\n");
	printf("\n1.Gastos en hospital y consultas \n2.Gasto de alimentos \n3.Gastos en vestimenta \n4.Gastos en necesidades  \n5.Gastos de muebles \n6.Gastos en eventos \n7.Salir");
	printf("\n");
	printf("\nPor favor ingresa un valor:");
	scanf("%d",&op);
	switch(op){
		
		case 1:
			printf("\n");
			printf("Por favor ingresa el precio de los ultrasonidos:");
			scanf("%f",&a);
			printf("\n");
			
			printf("Ahora ingresa el valor del estudio de sangre:");
			scanf("%f",&b);
			printf("\n");
			
			printf("Ingresa el valor de los estudios de orina:");
			scanf("%f",&c);
			printf("\n");
			
			printf("Ingresa el valor de los pasajes:");
			scanf("%f",&d);
			printf("\n");
			
			printf("Por favor proporciona el valor de gastos del parto:");
			scanf("%f",&e);
			printf("\n");
			
			printf("Ahora proporciona el valor de una consulta en caso de que tu bebé este enfermo:");
			scanf("%f",&f);
			printf("\n");
			
			printf("Por favor dinos un promedio de los gastos en medicamnetos:");
			scanf("%f",&g);
			printf("\n");
			
			printf("Ingresa el valor de los pasajes:");
			scanf("%f",&h);
			printf("\n");
			
			printf("Ahora ingresa el precio de la consulta con el pediatra:");
			scanf("%f",&i);
			printf("\n");
			printf("\n");
			
			total1=a+b+c+d+e;
			
			total2=f+g+h+i;
			
			printf("\nEl total antes del nacimiento del bebé por un día es:%f",total1);
		    ts1=(total1*7);
		    printf("\n");
		    
			printf("\nEl total  de gastos en hospital por semana es:%f",ts1);
		    printf("\n");
		    tm1=(ts1*4);
		    
			printf("\nEl total hospital y estudios por mes es:%f",tm1);
			printf("\n");
			ta1=(tm1*9);
			
			printf("\nEl total en gastos de hospital, estudios y parto por los 9 meses es:%f",ta1);
			printf("\n");
			printf("\n");
			
			printf("\nEl total durante un dia en el hospital con el bebé es:%f",total2);
			printf("\n");
			ts2=(total2*7);
			
			printf("\nEl total en gastos del hospital por semana es:%f",ts2);
			printf("\n");
			tm2=(ts2*4);
			
			printf("\nEl total de los gastos del hospital por mes es:%f",tm2);
			printf("\n");
			ta2=(tm2*12);
			
			printf("\nEl total por el primer año en gastos de hospital del bebé es:%f",ta2);
		
			tc=total1+total2+ts1+tm1+ta1+ts2+tm2+ta2;
			
			printf("\n");
			printf("\n");
			printf("\nEl total en los gastos del hospital es:%f",tc);
        break;	
        
        case 2:
        	printf("\n");
        	printf("Por favor ingresa el precio de total de los comestibles comprados para cumplir una dieta:");
			scanf("%f",&a);
			printf("\n");
			
			printf("Por favor introduce el precio total de bebidas compradas:");
			scanf("%f",&b);
			printf("\n");	
			
			printf("Ingresa el valor de los suplementos alimenticios que se compraron durante el embarazo:");
			scanf("%f",&c);
			printf("\n");
			
			printf("Ahora con tu bebé en casa, proporciona el precio de la formula del bebé:");
			scanf("%f",&d);
			printf("\n");
			
		    printf("Por favor danos el precio de la papilla del bebé:");
		    scanf("%f",&e);
	        printf("\n");
	        
	        printf("Por favor escribe el precio de la fruta que compras para el bebé:");
	        scanf("%f",&f);
	        printf("\n");
	        
	        printf("Ingresa la cantidad de precio de los alimentos para tu bebé:");
	        scanf("%f",&g);
	        printf("\n");
	        printf("\n");
	         
	        total1=a+b+c+d+e+f+g;
	        
	        
	        printf("\nEl total en gastos de alimentos durante el embarazo es:%f",total1);
	        ts1=(total1*7);
		    printf("\n");
		    
			printf("\nEl total de gastos por semana en alimentos es:%f",ts1);
		    printf("\n");
		    tm1=(ts1*4);
		    
			printf("\nEl total de los gastos en alimentos por mes es:%f",tm1);
			printf("\n");
			ta1=(tm1*12);
			
			printf("\nEl total de los gastos por el año es:%f",ta1);
			
			tc=total1+ts1+tm1+ta1;
			
			printf("\n");
			printf("\n");
			printf("\nEl total en los gastos en alimentos durante el embarazo y el primer año del bebé es:%f",tc);
		break;
		
		case 3:
			printf("\n");
			printf("Por favor indica el precio aproximado de una playera para embarazada:");
			scanf("%f",&a);
			printf("\n");
			
			printf("Por favor ingresa el precio de un pantalón:");
			scanf("%f",&b);
			printf("\n");
		    
			printf("Por favor danos el precio de tenis o zapatos:");
			scanf("%f",&c);
			printf("\n");
			
			printf("Por favor indica el precio de la ropa interior para una embarazada:");
			scanf("%f",&d);
			printf("\n");
			
			printf("Por favor proporciona el precio de un paquete de toallas femeninas:");
			scanf("%f",&e);
			printf("\n");
			
			printf("Ahora con el bebé nacido por favor indica el precio de las playeras del bebé:");
			scanf("%f",&f);
			printf("\n");
			
			printf("Ahora el precio de los pantalones:");
			scanf("%f",&g);
			printf("\n");
			
			printf("Por favos danos el precio de los zapatos o tenis del bebé:");
			scanf("%f",&h);
			printf("\n");
			
			printf("Danos el precio de las pijamas del bebé:");
			scanf("%f",&i);
			printf("\n");
			
			printf("Por favor danos el precio de los mamelucos:");
			scanf("%f",&j);
			printf("\n");
			
			printf("Por favor danos el precio de la ropa interioro del bebé:");
			scanf("%f",&k);
			printf("\n");
			
			total1=a+b+c+d+e;
			
			total2=f+g+h+i+j+k;
			
			
			ts1=(total1*7);
		    printf("\n");
		    printf("\n");
		    
			printf("\nEl total de gastos en vestimenta por semana es:%f",ts1);
		    printf("\n");
		    tm1=(ts1*4);
		    
			printf("\nEl total de gastos en ropa por mes es:%f",tm1);
			printf("\n");
			ta1=(tm1*9);
			
			printf("\nEl total de gastos en ropa por el año es:%f",ta1);
			printf("\n");
			printf("\n");
			
		
			printf("\n");
			ts2=(total2*7);
			
			printf("\nEl total de gastos de vestimenta  por semana para el bebé es:%f",ts2);
			printf("\n");
			tm2=(ts2*4);
			
			printf("\nEl total de gastos en ropa por mes es:%f",tm2);
			ta2=(tm2*12);
			printf("\n");
			
			printf("\nEl total por los gastos de la vestimenta del primer año del bebé es:%f",ta2);
		    
			tc=ts1+tm1+ta1+ts2+tm2+ta2;
			
			printf("\n");
			printf("\n");
			printf("\nEl total en los gastos en la vestimenta es:%f",tc);
		break;	
		
		case 4:
			printf("\n");
			printf("Por favor indica el precio de el kit de parto:");
			scanf("%f",&a);
			printf("\n");
			
			printf("Por favor indica el precio de los pañales del bebé:");
			scanf("%f",&b);
			printf("\n");
			
			printf("Por favor proporciona el precio de los biberones:");
			scanf("%f",&c);
			printf("\n");
			
			printf("Por favor dinos el precio de las mordederas:");
			scanf("%f",&d);
			printf("\n");
			
			printf("Ahora indica el precio de los baberos:");
			scanf("%f",&e);
			printf("\n");
			
			printf("Coloca el precio de toallitas humedas:");
			scanf("%f",&f);
			printf("\n");
			
			printf("Escribe el precio de los chupones:");
			scanf("%f",&g);
			printf("\n");
			
			
			total1=a+b+c+d+e+f+g;
	        
	        
	        ts1=(total1*7);
		    printf("\n");
		    
			printf("\nEl total de gastos en necesidades por semana es:%f",ts1);
		    printf("\n");
		    tm1=(ts1*4);
		    
			printf("\nEl total de gastos en necesidades por mes es:%f",tm1);
			printf("\n");
			ta1=(tm1*12);
			
			printf("\nEl total de los gastos en necesidades por el año es:%f",ta1);
			
			tc=ts1+tm1+ta1;
			
			printf("\n");
			printf("\n");
			printf("\nEl total de gastos en necesidades es:%f",tc);
		break;	
			
		case 5:
			printf("\n");
			printf("Por favor danos el precio de la cuna:");
			scanf("%f",&a);
			printf("\n");
			
			printf("Por favor indica el precio de la carriola:");
			scanf("%f",&b);
			printf("\n");
			
			printf("Coloca el precio de la cama del bebé:");
			scanf("%f",&c);
			printf("\n");
			
			printf("Coloca el precio de las sabanas:");
			scanf("%f",&d);
			printf("\n");
			
			printf("Coloca el valor aproximado de los juguetes:");
			scanf("%f",&e);
			printf("\n");
			
			printf("Coloca el precio de andador:");
			scanf("%f",&f);
			printf("\n");
			
			total1=a+b+c+d+e+f;
			
		
			ts1=(total1*7);
		    printf("\n");
		    
		    tm1=(ts1*4);
		    
			printf("El total de gastos en muebles por mes es:%f",tm1);
			printf("\n");
			ta1=(tm1*12);
			
			printf("\nEl total en gastos de muebles por el año es:%f",ta1);
			
			tc=tm1+ta1;
			
			printf("\n");
			printf("\n");
			printf("\nEl total de gastos en muebles es:%f",tc);
		break;	
		
		case 6:
			printf("\n");
			printf("Por favor coloca el precio de la comida para la fiesta de cumpleaños:");
			scanf("%f",&a);
			printf("\n");
			
			printf("Caunto gastas en decoración:");
			scanf("%f",&b);
			printf("\n");
			
			printf("Cuanto gasta en un pastel:");
			scanf("%f",&c);
			printf("\n");
		
	        printf("Cuanto te gastas en los dulceros:");
			scanf("%f",&d);
			printf("\n");
			
			total1=a+b+c+d;
			
			printf("\n");
			printf("\nEl total por una fiesta es:%f",total1);
		break;		
		
		case 7:
			printf("\n");
			printf("Espero que vuelvas pronto");
		break ;
				
		default:
		printf("\n");
		printf("\nEsta no es una opcion valida");
		break;		
   }

        printf("\n");
		printf("\nDesea cerrar el programa?\n 1 Si \n 2 No \n ");	
		scanf("%d",&rep);
		}while (rep != 1);
		printf("\n");
		printf("Gracias por usar nuestro codigo\n Que te vaya bien!!\n");
		
	
}
