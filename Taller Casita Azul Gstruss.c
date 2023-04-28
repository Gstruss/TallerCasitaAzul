#include<stdio.h>
void estudiante1();
void estudiante2();
void estudiante3();
void profesor();

void ingreso_n();
void consulta_n();
void promedio_n();

int calificaciones(int nota1, int nota2, int nota3);
int i,x;

int nota1;
int nota2;
int nota3;

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
		printf("1. ESTUDIANTE UNO\n2. ESTUDIANTE DOS\n3. ESTUDIANTE TRES\n4. PROFESOR\n5. SALIR\nEnter Your Choice:\t");
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
			    exit(1);
			}
			default:
				printf("Enter a Valid choice\n");
		}	
	}		
}

int calificaciones(int nota1, int nota2, int nota3)
{
	for(i=0;i<3;i++)
	{
		if(s[i].nota1,nota2,nota3)
		{
			return i;
			break;
		}
	}
}

void estudiante1()
{
	int choice;
		printf("\n---ESTUDIANTE UNO---\n");
		printf("1. INGRESAR NOTAS(solo profesor)\n2. CONSULTAR NOTAS\n3. CONSULTAR PROMEDIO\nEnter Your Choice:\t");
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
		printf("1. INGRESAR NOTAS(solo profesor)\n2. CONSULTAR NOTAS\n3. CONSULTAR PROMEDIO\nEnter Your Choice:\t");
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
		printf("1. INGRESAR NOTAS(solo profesor)\n2. CONSULTAR NOTAS\n3. CONSULTAR PROMEDIO\nEnter Your Choice:\t");
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
		printf("1. ESTUDIANTE UNO\n2. ESTUDIANTE DOS\n3. ESTUDIANTE TRES\nEnter Your Choice:\t");
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

ingreso_n()
{
	printf("\nIngresa la primera nota:\t");
	scanf("%d",&nota1);
	printf("\nIngresa la segunda nota:\t");
	scanf("%d",&nota2);
	printf("\nIngresa la tercera nota:\t");
	scanf("%d",&nota3);
}

consulta_n()
{
    x=calificaciones(nota1,nota2,nota3);
    
	printf("\n---Sus notas son---\n");
	printf("Nota1: %d",&nota1,s[x].nota1);
	printf("Nota2: %d",&nota2,s[x].nota2);
	printf("Nota3: %d",&nota3,s[x].nota3);
}

promedio_n()
{
	
}
