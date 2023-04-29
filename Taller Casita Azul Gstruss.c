#include<stdio.h>
void estudiante1();
void estudiante2();
void estudiante3();
void profesor();

void ingreso_n();
void consulta_n();
void promedio_n();

int calificaciones(int nota1_n, int nota2_n, int nota3_n);
int i,x,promedioTotal,sumaTotal;

int nota1_n;
int nota2_n;
int nota3_n;

struct notas
{
	int nota1;
	int nota2;
	int nota3;
};
struct notas s[3]={{0,0,0},{0,0,0},{0,0,0}};


int main()
{
	while(1)
	{
		int choice;
		printf("\n---ELECCION DE USUARIO---\n");
		printf("1. ESTUDIANTE UNO\n2. ESTUDIANTE DOS\n3. ESTUDIANTE TRES\n4. PROFESOR\n5. SALIR\nEscribe tu respuesta:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				estudiante1();
				break;	
			}
			case 2:
			{
				estudiante2();
				break;	
			}	
			case 3:
			{
				estudiante3();
				break;		
			}
			case 4:
			{
				profesor();
				break;
			}
            case 5:
			{
		
			}
			default:
				printf("Enter a Valid choice\n");
		}	
	}		
}

int calificaciones(int nota1_n, int nota2_n, int nota3_n)
{
	for(i=0;i<3;i++)
	{
		if(s[i].nota1==nota1_n)
		{
			if(s[i].nota2==nota2_n)
			{
				if(s[i].nota3==nota3_n)
				{
					return i;
					break;
				}
			}
			
		}
	}
}

void estudiante1()
{
	int choice;
		printf("\n---ESTUDIANTE UNO---\n");
		printf("1. INGRESAR NOTAS(solo profesor)\n2. CONSULTAR NOTAS\n3. CONSULTAR PROMEDIO\nEscribe tu respuesta:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				ingreso_n();
				break;
			}
			case 2:
			{
				consulta_n();
				break;
			}	
			case 3:
			{
				promedio_n();
				break;
			}
			default:
				printf("You DON'T enter a Valid choice\n");
		}	
}

void estudiante2()
{
	int choice;
		printf("\n---ESTUDIANTE DOS---\n");
		printf("1. INGRESAR NOTAS(solo profesor)\n2. CONSULTAR NOTAS\n3. CONSULTAR PROMEDIO\nEscribe tu respuesta:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				ingreso_n();
				break;
			}
			case 2:
			{
				consulta_n();
				break;
			}	
			case 3:
			{
				promedio_n();
				break;
			}
			default:
				printf("You DON'T enter a Valid choice\n");
		}	
}

void estudiante3()
{
	int choice;
		printf("\n---ESTUDIANTE TRES---\n");
		printf("1. INGRESAR NOTAS(solo profesor)\n2. CONSULTAR NOTAS\n3. CONSULTAR PROMEDIO\nEscribe tu respuesta:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				ingreso_n();
				break;
			}
			case 2:
			{
				consulta_n();
				break;
			}	
			case 3:
			{
				promedio_n();
				break;
			}
			default:
				printf("You DON'T enter a Valid choice\n");
		}	
}

void profesor()
{
	int choice;
	printf("\n---SELECCIONA UN ESTUDIANTE---\n");
		printf("1. ESTUDIANTE UNO\n2. ESTUDIANTE DOS\n3. ESTUDIANTE TRES\nEscribe tu respuesta:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				estudiante1();
				break;	
			}
			case 2:
			{
				estudiante2();
				break;	
			}	
			case 3:
			{
				estudiante3();
				break;		
			}
			default:
				printf("You DON'T enter a Valid choice\n");
		}	
}

void ingreso_n()
{
	printf("\nIngresa la primera nota:\t");
	scanf("%d",&nota1_n);
	printf("\nIngresa la segunda nota:\t");
	scanf("%d",&nota2_n);
	printf("\nIngresa la tercera nota:\t");
	scanf("%d",&nota3_n);
}

void consulta_n()
{
    x=calificaciones(nota1_n,nota2_n,nota3_n);
    
	printf("\n---Sus notas son---\n");
	printf("Nota1:%d\n",nota1_n,s[x].nota1);
	printf("Nota2:%d\n",nota2_n,s[x].nota2);
	printf("Nota3:%d\n",nota3_n,s[x].nota3);
}

void promedio_n()
{
	printf("\n---Lo sentimos, estamos trabajando en ello...---\n");
}
