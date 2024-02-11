#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
   int numerator, denominator;
   cin>>numerator>>denominator;

   if (numerator == 0)
   {
      cout<<0<<endl;
   }
   else 
   {
      int ans = __gcd(numerator, denominator);
      if (numerator%denominator == 0)
      {
      cout<<(numerator/ans)/(denominator/ans)<<endl;
      }
      else
      {
         int quotient = numerator / denominator;
         int remainder = abs(numerator) % denominator;

         if (quotient < 1)
         {
         cout<<(remainder/ans)<<"/"<<(denominator/ans)<<endl;
         }
         else
         {
         cout<<quotient<<" "<<(remainder/ans)<<"/"<<(denominator/ans)<<endl;
         }
      }
   }
}
