#include<stdio.h> 
#include<locale.h> 
#include<iostream> 




void task1()
{

	setlocale(LC_ALL, "");

	int a[8] = { 37, 0, 50, 46, 34, 46, 0, 13};
	int i;

	for (i = 0; i < 8; i++)
	{
		printf("%d\n", a[i]);
	}
	
	system("pause");
}


void task2()
{

	setlocale(LC_ALL, "");

	int i, a[10] = {0};


	for (i = 0; i < 10; i++)
	{
		printf("write a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("a[%d] = %d\n: ", i, a[i]);
	}
	

	system("pause");
}




void task3()
{

	int a[] = { 0 }, i, h;

	for (i = 0; i < 12; i++)
	{
		h = 163 + rand() % 37;
		a[i] = h;
		printf("a[%d] = %d\n", i, a[i]);
	}
	
	system("pause");
}


void task4()
{

	
	int i, a[10] = { 0 }, flag;

	
	for (i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}

	do
	{
		printf("write the index of array: ");
		scanf_s("%d", &i);
		if (i < 0 || i > 9)
		{
			printf("the index of elemnt is invalid\n");
		}

		else
		{
			printf("a[%d] = %d\n", i, a[i]);
		}

		printf("Do you want to continue? 1 - yes, 0 - no: ");
		scanf_s("%d", &flag);


	} while (flag == 1);


	system("pause");
}


void task5()
{
	

	int i, a[10] = { 0 };


	for (i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}

	for (i = 9; i >= 0; i--)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}


	system("pause");
}

void task6()
{
	/*6.	Дан массив. Составить программу:
a.	расчета квадратного корня из любого элемента массива;
b.	расчета среднего арифметического двух любых элементов массива
*/
	int i, a[10] = { 0 }, av, b;
	float sqrt;

	for (i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}

	printf("write the index of the number: ");
	scanf_s("%d", &i);
	if (i < 0 || i > 9)
	{
		printf("the index of the number is invalid\n");
	}
	else
	{
		sqrt = pow(float(a[i]), 0.5);
		printf("Root of the a[%d] is %.2f\n", i, sqrt);
	}
	

	printf("write the index of the first number: ");
	scanf_s("%d", &i);

	printf("write the index of the second number: ");
	scanf_s("%d", &b);
	
	if (i < 0 || i > 9 || b < 0 || b > 9)
	{
		printf("the index of the number is invalid\n");
	}

	else
	{
		av = (a[i] + a[b])/2;
		printf("The average of a[%d] and a[%d] is %d\n", i, b, av);
	}
	

	system("pause");
}

void task7()
{
	/*7.	Дан массив. Все его элементы:
a.	увеличить в 2 раза;
b.	уменьшить на число А;
c.	разделить на первый элемент
*/
	int i, a[10] = { 0 }, A, b;
	float c;

	for (i = 0; i < 10; i++)
	{
		b = 1 + rand() % 100;
		a[i] = b;
		printf("a[%d] = %d\n", i, a[i]);
	}

	printf("\n\n\n----------------------\n\n\n");

	for (i = 0; i < 10; i++)
	{
		a[i] *= 2;
		printf("a[%d] * 2 = %d\n", i, a[i]);
	}

	printf("\n\n\n----------------------\n\n\n");

	A = 1 + rand() % 20;
	for (i = 0; i < 10; i++)
	{
		a[i] -= A;
		printf("a[%d] - %d = %d\n", i, A, a[i]);
	}

	printf("\n\n\n----------------------\n\n\n");
	b = a[0];
	for (i = 0; i < 10; i++)
	{
		c = a[i];
		c = float(c) / float(b);

		printf("a[%d] / a[0] = %.2f\n", i, c);
	}


	system("pause");
}


void task8()
{
	int i, p[10] = { 0 }, sum = 0;

	for (i = 0; i < 10; i++)
	{
		p[i] = 1 + rand() % 200;
		printf("Price of the product %d is %d\n", i + 1, p[i]);

		sum += p[i];
	}
	printf("\nThe sum of the products is %d\n", sum);

	system("pause");
}



void task9()
{
	int i, p[28] = { 0 }, sum = 0;
	float av;

	for (i = 0; i < 28; i++)
	{
		p[i] = 1 + rand() % 200;
		printf("The amount of precipitation at %d day is %d\n", i + 1, p[i]);

		sum += p[i];
	}
	printf("\nThe sum of precipitation is %d\n", sum);

	av = float(sum) / float(i);
	printf("\nThe average of precipitation is %.2f\n", av);

	system("pause");
}



void task10()
{
	int a = 1800, i, A[30] = { 0 }, sum = 0;

	for (i = 0; i < 30; i++)
	{
		A[i] = 1 + rand() % 100;
		printf("The mass of the box %d is %d\n", i + 1, A[i]);

		sum += A[i];
	}
	printf("\nThe total mass is %d\n", sum);
	printf("Load capacity of the car is %d\n", a);


	if (sum > a)
	{
		printf("The total mass is more than load capacity of the car\n");
	}
	else
	{
		printf("The total mass is less than load capacity of the car\n");
	}
	
	system("pause");
}


void task11()
{
	/*11.	Дан массив. Напечатать: 
a.	все неотрицательные элементы; 
b.	все элементы, не превышающие число 100.
c.	все четные элементы
*/
	int i, A[15] = { 0 }, sum = 0;

	for (i = 0; i < 15; i++)
	{
		A[i] = -50 + rand() % 150;
		printf("%d number is %d\n", i + 1, A[i]);
	}
	

	printf("\n\nPositive numbers: \n");
	for (i = 0; i < 15; i++)
	{
		if (A[i] > 0)
		{
			printf("%d\n", A[i]);
		}
	}

	printf("\n\nNumbers less than 100: \n");
	for (i = 0; i < 15; i++)
	{
		if (A[i] < 100)
		{
			printf("%d\n", A[i]);
		}
	}

	printf("\n\nEven numbers: \n");
	for (i = 0; i < 15; i++)
	{
		if (A[i] % 2 == 0)
		{
			printf("%d\n", A[i]);
		}
	}
	

	system("pause");
}



void task12()
{

	int i, A[15] = { 0 }, sum = 0;

	for (i = 0; i < 15; i++)
	{
		A[i] = -50 + rand() % 150;
		printf("%d number is %d\n", i + 1, A[i]);
	}


	printf("\n\nNumbers with even indexes: \n");
	for (i = 0; i < 15; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			printf("%d\n", A[i]);
		}
	}

	printf("\n\nNumbers with odd indexes: \n");
	for (i = 0; i < 15; i++)
	{
		if ((i + 1) % 2 != 0)
		{
			printf("%d\n", A[i]);
		}
	}
	

	system("pause");
}

int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("Введите номер задания: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	case 11:
	{
		task11();

		break;
	}
	case 12:
	{
		task12();

		break;
	}
	}


	printf("Хотите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}