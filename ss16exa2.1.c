#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c,sum;
	printf("\n enter any three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	sum= calculatesum(a,b,c);
	printf("\n Sum = %d",sum);
	
}

calculatesum(int x, int y,int z)
{
	int d;
	d=x+y+z;
	return (d);
}
