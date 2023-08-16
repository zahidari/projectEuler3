#include <iostream>
using namespace std;
// def decl
bool isPrime(unsigned long long); // prototype


unsigned long long gesuchteZahl = 600851475143;


int main()
{
	/**				Aufbage
	*	The prime factors of 13195 are 5, 7, 13 and 29.
	*	What is the largest prime factor of the number 600851475143
	*/



	//5			//50
	for (unsigned long long i = 2; i <= gesuchteZahl; ++i) {

		if (gesuchteZahl % i == 0 && isPrime(i)) {

			gesuchteZahl = gesuchteZahl / i;
			cout << i << endl;
		}

	} // 2,3,4,5,6,7....15     teiler




	return 0;
}


bool isPrime(unsigned long long x) { // ist die nummer eine prime zahl oder nicht? 


	for (unsigned long long i = 2; i <= x / 2; ++i) // 2,3,4,5,6,7....15     teiler
		if (x % i == 0)
			return false;
	return true;
}