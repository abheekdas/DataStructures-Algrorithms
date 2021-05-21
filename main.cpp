#include<iostream>

using namespace std;

int trailingZeros(int n)
{
  int count = 0;
  for(int i=5; i<=n; i=i*5)
  {
    count  = count + (n/i);
  }
  return count;
}

int main()
{
  int result  = trailingZeros(100);
  cout<<result;
}