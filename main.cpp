#include <iostream> 
using namespace std; 
int main() 
{ setlocale(0,".1251"); 
  int a[17], min, max, L, i;  
  cout<<"\nВведiть 17 цілих елементів масиву:\n"; 
  for (int i=0; i<17; i++)  cin >> a[i]; 
  min = a[0];  max = a[0];
  for (i=0; i<17; i++)
if (a[i] > max) 
{ max=a[i];}
for (i=0; i<17; i++)
   if (a[i] < min) {min = a[i];}
   
   L=(max+min)/2;
 cout<<"\nМаксимальне значення = " << max <<endl;
cout<<"Мінімальне значення = " << min <<endl; 
cout<<"Середнє арифметичне= " << L<<endl; 
  system ("pause>>void"); 
  return 0; 
} 
