#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int main(int argc, char *argv[])
{
    int dizi[SIZE]={};
    int i,j,k,sayi;
    for(i=0;i<20;i++)
{   printf("sayi gir\n");
    scanf("%d",&sayi);
    k=0;
    for(j=0;j<20;j++){                 
    if(dizi[j]==sayi)
    {
      k=1;}}
      if(k==0)
      {
              dizi[i]=sayi;
              printf("%d\n",sayi);
              }
              }
              
              
    
    
    

    
    
    
    
  system("PAUSE");	
  return 0;
}
