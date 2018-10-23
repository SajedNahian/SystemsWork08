#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int getNthPrime (int n) {
	int upper_bound = (int) round(n * log(n) * 1.15);
	int current = 2;
	int current_prime;
	int primes_found = 0;
	// char is the smallest type we can use
	char * nums = calloc(1, upper_bound);
	while (primes_found < n) {
		if (nums[current] == 0) {
			current_prime = current;
			primes_found++;
			for (int i = current; i <= upper_bound; i += current) {
				if (nums[i] == 0) {
					nums[i] = 1;
				}
			}
		}
		current++;
	}
	return current_prime;
} 

int main()
{
	printf("The millionth prime is: %d\n", getNthPrime(1000000));
	return 0;
}