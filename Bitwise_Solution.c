#include <stdio.h>

void calculate_the_maximum(int n, int k) 
{
	int i,j, And, Or, XOR, maxAnd = 0, maxOr = 0, maxXOR = 0;
	
  	for(i=1; i <= n; i++)
  	{
  		for(j=i+1; j <= n; j++)
  		{
  			And = i&j;
  			if(And < k && maxAnd < And)
  				maxAnd = And;
  			Or = i|j;
  			if(Or < k && maxOr < Or)
  				maxOr = Or;
  			XOR = i^j;
  			if(XOR < k && maxXOR < XOR)
  				maxXOR = XOR;
		}
	}
	printf("%d\n%d\n%d",maxAnd,maxOr,maxXOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
