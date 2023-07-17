#include <iostream> 
using namespace std;
 
bool isnumPrime(int n)
{
      for(int i = 2; i < n/2; i++)
      {
        if(n % i == 0 or n <= 1) return false;
      }
      return true;
}
int main()
{
    int how_many = 1000;
      for(int i = 1; i <= how_many; i++)
      {
          if(isnumPrime(i))
          {
          cout << i << "\n";
          }
    }
    return 0;
}
