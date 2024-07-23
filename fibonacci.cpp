#include <stdio.h>
#include <cstdlib> //bunu eklemene gerek yok
#include <conio.h> //bunu eklemene gerek yok
#include <stdio.h> //bunu eklemene gerek yok
#include <stdio.h> //bunu eklemene gerek yok   bunlar renkli yazdýrmak için

int main(){
{
int x;int f1=1,f2=1,f3;  //int x;int de calisir
printf("istenilen f1 ve f2");
scanf("%i %i",&f1,&f2);
printf("Kac eleman istiyorsunuz?");
scanf("%i",&x);
printf("fibonachi elemanlari \n %5i %5i",f1,f2);
for(int f=3;f<=x;f++)
{
f3=f1+f2;
f1=f2;
f2=f3;
printf(" %5i",f3);
if (f%10==0)
printf("\n");
}
//bunun altýndaki return 0 a kadar olanlar yine renk için 
}
system("color 75");
   //buraya kadar
return 0;

}
