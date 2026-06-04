#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    return false;
    for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
    return false;
    }
    return true;
}

void generatePrimes(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
    if (isPrime(i))
    cout << "{"<<i <<"}";
    }
}
int main() {
    int start , end ;
    cout<<"Enter range";
    cin>>start;
    cout<<"to";
    cin>>end;
    cout << "Prime numbers in " << start << " and " << end << ": ";
    generatePrimes(start, end);
    return 0;
}
