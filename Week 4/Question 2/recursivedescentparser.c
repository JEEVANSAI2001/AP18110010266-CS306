/* Production Rules
S->(L)|a
L->SL'
L'->,SL'|e
*/
#include<stdio.h>
#include<string.h>
int S(),L(),Ldsh();
char *ip;
char string[50];
int main()
{
	printf("Enter the string: ");
	scanf("%s",string);
	ip=string;
	if(S())
	{
		printf("\nString is accepted\n");
	}
	else
	{
		printf("\nString is Regected\n");
	}
}
int L()
{
	if(S())
	{
		if(Ldsh())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}
int Ldsh()
{
	if(*ip==',')
	{
		ip++; 
		if(S())
		{
			if(Ldsh())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
}
int S()
{
	if(*ip=='(')
	{
		ip++;
		if(L())
		{
			if(*ip==')')
			{
				ip++;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else if(*ip=='a')
	{
		ip++;
		return 1;
	}
	else
	{
		return 0;
	}
}
