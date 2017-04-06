#include <iostream>

using namespace std;

bool isPrime(int number){
    if(number == 2 || number == 3){
        return true;
    }

    for(int b = 2; b < number; b = b +1){
        if(number % b == false){
            return false;
        }

    }

    return true;
}

int main()
{
    int i;
    int total = 0;
    cout << "Enter a number!" << endl;
    cin >> i;
    cout << "The number is " << i << "\n";
    cout << "The primes are: \n";
    for( int a = 2; a <= i; a = a + 1 ) {
        if(isPrime(a)){
            total = total +1;
            cout << " " << a;
        }
    }
    cout << "\n Total amount of Primes: " << total;
    return 0;
}
