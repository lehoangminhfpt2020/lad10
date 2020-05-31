#include <stdio.h>
#include <stdlib.h>


int giaithua(int n)
{
    int i;
	int giaithua = 1;
    for (i = 1; i <= n; i++)
      {
		 giaithua *= i;
	}
    printf ("giai thua cua %d = %d",n,giaithua);
}

int main() {
	int a,c;
		
	printf("nhap so:");
	scanf("%d",&a);
    
   	c=giaithua(a);

	
}




