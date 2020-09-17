// EjerciciosClase.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

//EJERCICIO EN CLASE
/*
int factorial(int n)
{
	if (n == 0)
	{
		n = 1;
	}

	else
	{
		n = n * factorial(n - 1);
	}
	return n;
}

int main(int numero)
{
	cout << "Dame un numero: " << endl;
	cin >> numero;

	cout << "El factorial de:" << numero << " es " << factorial(numero) << endl;


}
*/

//Problem 1.[Fuente:Projecteuler.net.Problem 1] Si se imprimiera todos los n´umeros naturales menores que 10, los cuales sean multiplos de 3 o 5, obtendr´ıamos: 3, 5, 6, 9. La suma de estos m´ultiplos es 23.
//Encontrar la suma de todos los m´ultiplos de 3 o 5 menores a 1000000.

/*
int main()
{
	int suma = 0;
	long n = 10;

	for (int i = 0; i < n; i++)				//0		1		2		3		4
	{
		if (3 * i < n)						//0<10	3<10	6<10	9<10	12<10 NO
			suma = suma + 3 * i;			//0		3		9		18		NO

		if (5 * i < n && (5 * i) % 3 != 0)	//
			suma = suma + 5 * i;			
	}
	cout << "la suma de los multiplos de 3 y 5 es: " << suma << endl;
}
*/





//Problem 2. Implementar un programa que solicite un n´umero entero N e imprima los n´umero impares desde el 1 hasta n separados por comas.OJO, despues del ´ultimo n´umero no debe imprimir la ’, ’.Por ejemplo, para N = 10, 
//debe imprimir : 1, 3, 5, 7, 9

/*
int main()
{
	int numero;

	cout << "Dame un numero: " << endl;
	cin >> numero;
	
	
	for (int i = 1; i < numero ; i+=2)
	{
		cout << i;

		if (i < numero - 1 && i < numero - 2)
		{
			cout << ", ";
		}
	}

	return 0;
}
*/





//Problem 3. Implemente un programa que solicite un n´umero n e imprima todos los n´umeros primos menores a n.
/*
int main()
{
	int numero;
	int	cd=0;

	cout << "Inserta un numero: " << endl;
	cin >> numero;

	for (int i = 1; numero >= i; i++)
	{
		for (int j = 1; i >= j; j++)
		{
			if (i % j == 0)
			{
				cd++;
			}
		}

		if (cd == 2)
		{
			cout << i << " ";
			cd = 0;
		}

		else
		{
			cd = 0;
		}
	}




	return 0;
}
*/




//Problem 4. Un n´umero perfecto es aquel n´umero el cual la suma de sus m´ultiplos es igual al mismo n´umero.Por ejemplo : 6 es un n´umero perfecto, porque sus m´ultiplos son : 1, 2, 3 y 6 = 1 + 2 + 3.
//Implemente un programa que solicite un n´umero y evalue si dicho n´umero es un n´umero perfecto.


int main()
{
	int numero;
	
	cout << "Inserte un numero para saber si es perfecto: ";
	cin >> numero;

	int div = 0;

	for (int i = 1; i < numero; i++)
	{
		if (numero % i == 0)
		{
			div += i;
		}
	}

	if (numero == div)
	{
		cout << "El numero " << numero << " es perfecto" << endl;
	}
	else
	{
		cout << "El numero " << numero << " no es perfecto" << endl;

	}
	return 0;
}








//Problem 5. Implemente un programa que solicite un n´umero n e imprima todos los n´umeros perfectos menores a n.

/*
bool esPrimo(int n, int suma = 0) {
	for (int i = 1; i < n; i++) {
		if (!(n % i))
			suma += i;
	}
	return suma == n;
}

int main()
{
	//imprimir todos los numeros perfectos menores a n
	int n;
	cout << "Ingrese un numero: ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (esPrimo(i))
			cout << " " << i;
	}
	return 0;
}
*/








//Problem 6. Los factores primos de 13195 son 5, 7, 13 y 29. ¿Cu´al es el mayor factor primo de 600851475143 ?
/*
int main()
{
	int a = 2; 
	long long b = 600851475143;
	
	while (b > a) 
	{
		while (b % a == 0) 
		{
			b /= a;
		}
		a++;
	}
	cout << a << endl;

	return 0;
}
*/