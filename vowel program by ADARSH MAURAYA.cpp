#include<stdio.h>
/*int main()
{
	char _ch;
	printf("enter alp:");
	scanf("%c",&_ch);

	if(_ch=='A'||_ch=='E'||_ch=='I'||_ch=='O'||_ch=='U'||_ch=='a'||_ch=='e'||_ch=='i'||_ch=='o'||_ch=='u')
	{
		printf("%c is a vowel",_ch);
	}
	else if(_ch>='A'&&_ch<='Z'||_ch>='a'&&_ch<='z')
	{
		printf("%c is consonent",_ch);
	}
	else
	{printf("%c is special character",_ch);
	}
	return 0;
}
int main()
{
	int age;
	printf("enter the age:-");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("it is eligible");
	}
	else
	{
		printf("it is not adult");
	}
}
*/
int main()
{
int days;
	printf("enter the number");
	scanf("%d",&days);
	switch(days)
	{
	case 9 :
		printf("it is monday");
		break;
		
		default:
		printf("not valid input");
	break;
	}
}
