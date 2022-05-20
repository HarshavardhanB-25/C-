#include <iostream>
using namespace std;
int isPrime(int n)
{
int count=0;
for(int i=2;i<(n/2)+1;i++)
{
if(n%i==0)
count++;
}
if(count==0)
return 1;
else
return 0;
}

void prime(int a, int b)
{
cout<<"\n";
if(b>a)
{
for(int i=a;i<=b;i++)
{
if(isPrime(i)==1)
cout<<i<<" ";
}
}
else
{
for(int i=b;i<=a;i++)
{
if(isPrime(i)==1)
cout<<i<<" ";
}
}
}

int main()
{
prime(10,20);
prime(20,30);
return 0;
}
