#include<stdio.h>

cube(int a)
{
	int ans;
	ans = a*a*a;
	printf("cube = %d\n",ans);
}
main()
{
	int a;
	printf("Enter value = ");
	scanf("%d",&a);
	cube(a);
}
