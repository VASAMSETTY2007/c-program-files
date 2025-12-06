/*write a c program to find nth number in the series*/
#include<stdio.h>
int find_nth_term(int n, int a, int b, int c);
int main()
{
	int n,a,b,c;
	printf("\n Enter n,a,b,c values ");
	scanf("%d%d%d%d", &n, &a, &b, &c);
	int ans = find_nth_term(n, a, b, c);
	printf("\n Nth series number is %d", ans);
}
int find_nth_term(int n, int a, int b, int c)
{
	int term, t1 = a, t2 = b, t3 = c ,i;
	if (n == 1)
	    term = t1;
	else if (n == 2)
	    term = t2;
	else if (n == 3)
	    term = t3;
	else
	{
		for ( i = 4; i <= n; i++)
		{
			term = t1 + t2 + t3;
			t1 = t2;
			t2 = t3;
			t3 = term;
		}
	}    
	return term;
}