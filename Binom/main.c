#include <stdio.h>
#include <stdlib.h>

int faktoriyel_hesaplama(int n);
int katsayi_hesaplama(int n, int k);


int main()
{
    int k=0,n;
    char x,y;

    printf("n: ");
    scanf("%d",&n);

    printf("(x+y)^%d acilimi:\n",n);

    for(k ; k<=n ; k++)
    {
        int katsayi=katsayi_hesaplama(n,k);
        printf("%d.terim = ",k+1);
        printf("%d * x^%d * y^%d",katsayi,n-k,k);

        printf("\n");
    }


    return 0;
}

//Faktoriyel hesaplama
int faktoriyel_hesaplama(int n)
{
    int sonuc=1;
    for (int i=1 ; i<=n ; i++)
    {
        sonuc *= i;
    }
  return sonuc;
}



//Katsayý hesaplama(n)
int katsayi_hesaplama(int n, int k)
{
    return faktoriyel_hesaplama(n) / (faktoriyel_hesaplama(k) * faktoriyel_hesaplama(n-k));
}

