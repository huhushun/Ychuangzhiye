#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x); 
	
	int digit;
	int ret=0;
	while(x>0){
		digit =x%10;
		ret = ret*10 +digit;
	
		x/=10;
	}
		printf("%d\n",ret);
 };
  