#include<stdio.h>

int main()
{
	FILE *f1,*f2;
	char ch;
	
	f1 = fopen("copy.c","r");
	f2 = fopen("copy1.c","w");
	
	if(f1 == NULL || f2 == NULL)
	{
		printf("file not found");
		return -1;
	}
	
	while((ch = fgetc(f1)) != EOF)
	{
		if(ch>='a' && ch<='z')
		{
			fputc(ch-32,f2);
			
		}
		else
		{
			fputc(ch,f2);
		}
	
	}
	
	printf("conversion is completed");
	
	fclose(f1);
	fclose(f2);
	return 0;

}