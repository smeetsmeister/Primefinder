#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int primenumber(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    int total=0;
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
        {
        	cout << p << " ";
        	total++;
		}
	return total;
}
 
// Driver Program to test above function
int main()
{
    int n;
    cout<<"Enter the number !\n\n->";
    cin>>n;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    int count=primenumber(n);
    cout<<"\n\nTotal number of primes : "<<count<<endl;
    return 0;
}
