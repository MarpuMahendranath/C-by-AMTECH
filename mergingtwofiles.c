#include<stdio.h>

int main()
{
	FILE *f1,*f2,*f1f2cpy;
	char ch;
	
	f1 = fopen("string.c","r");
	f1f2cpy = fopen("copy.c","w");
	f2 = fopen("file.c","r");
	
	if(f1==NULL || f2==NULL || f1f2cpy==NULL)
	{
		printf("File not opened");
		return -1;
	}
	
	
	while((ch = fgetc(f1)) != EOF)
	{
		fputc(ch,f1f2cpy);
	}
	
	
	
	while((ch = fgetc(f2)) != EOF)
	{
		fputc(ch,f1f2cpy);
	}
	
	printf("Both files are merged");
	
	fclose(f1);
	fclose(f2);
	fclose(f1f2cpy);
	
	return 0;
	
}