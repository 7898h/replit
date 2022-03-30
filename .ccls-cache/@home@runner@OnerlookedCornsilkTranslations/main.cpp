#include <iostream> 
using namespace std; 
int main() 
{ setlocale(0,".1251"); 
  int a[17],  max, f=1, i,j;  
cout<<"\nВведiть 17 цілих елементів масиву:\n"; 
for (int i=0; i<17; i++)  cin >> a[i]; 
max = a[0];
for (i=0; i<17; i++)
if (a[i] > max) 
{ max=a[i];}
cout<<"\nМаксимальне значення = " << max <<endl;
for (j=1; j<=max;j++ ) {f*=j;}
cout<<"Факторіал максимального значення = " << f <<endl;
  system ("pause>>void"); 
  return 0; 
} 
