#include "PrimeClass.h"

// :: ist scope operator, zugriff auf die funktion der in der Klasse PrimeClass definiert aber nicht declariert ist.
void PrimeClass::allPrimes(unsigned long long n) {

	/*AUFGABE
	 es muss eine Zahl immer versuchen zu dividieren und der rest muss 0 sein. Aber es muss auch prime number sein.
	*/ 
	int temp = n; // damit die Zahl von ende aus verkürtzt wird. durch den primZahl teilen
	int letztePrimZahl = 2;
	
	unsigned long long i = 2; // um mit eins anzufangen und zu dividieren.
	while (true) {

		/** Prüfen ob es teilbar ist  oder nicht. Gleichzeitg auch, ob die geteilte zahl eine prim Zahl ist.
		*
		*	die Zahl "n" wird überprüft ob es überhaupt teilbar ist.
		*   Danach wird der Teiler überptüft ob es eine "prim Zahl" ist.
		*   Wenn "Ja" wird die Zahl ausgedruckt.
		*/
		if (temp % i == 0) //ist n(temp) teilbar?
		{ 
			if (isPrime(letztePrimZahl,i))// "i" = prime?
			{
				//letztePrimZahl = i;  // here is the magic..
				temp = temp / i; 
				std::cout << i << std::endl;
			}

		}
		/** um die while Schleife zu unterbrechen
		*
		* Die while Schleife dividiert die Zahl "n" solange bis die division "n / (n/2)" ankommt und der rest der Zahlen kann die Zahl sowieso nicht mehr dividieren.
		* Der Grund dafür ist , dass eine Zahl z.B. 10 nur durch 1 ,2 und 5 teilbar ist, und die Zahlen die nach 5 kommen, wird die 10 nicht mehr dividieren können,
		* bis es sich selbst dividiert(also 10/10) . Da wir 10 / 10  nicht interesiert sind, lassen wir alle Zahlen die nach 5 kommen weg.
		*
		*/
		if (n / 2 < i) {
			break;
		}
		
		i++;
	}
}
bool PrimeClass::isPrime(unsigned long long  beginnDerSuche,unsigned long long n) {

	
	for (unsigned long long i = beginnDerSuche; i <= (n / 2); i++)
	{
		if (n % i == 0) {return false;} 
	}

	return true;
}

void PrimeClass::nochmal() 
{



		// define our variables
		// using a bigger type that int here
		unsigned long long factorNumber = 600851475143;
		// set a flag for my prime number catcher
		bool isPrime = 1;
		// start prime search here
		int lastPrime = 2;

		// thought this for loop would need to be a while loop
		// but by happy coincidence it terminates when the solution has been found
		for (int i = lastPrime; i <= factorNumber; i++) 
		{




			// reset prime identifier catcher
			isPrime = 1;

			// determine if   "i"   is a potential prime factor
			for (int j = 2; j < i; j++) 
			{
				if (i % j == 0)
					isPrime = 0;
			}



			// if i is prime and if i divides exactly into our last factor
			// then i is the highest yet prime factor
			if (isPrime && (factorNumber % i == 0))
			{
				lastPrime = i;
				factorNumber = factorNumber / i;
				std::cout << i << std::endl;
			}
		}

	
		
		
}










