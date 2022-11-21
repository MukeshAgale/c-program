#include<stdio.h>
#include<conio.h>

main()
{
	FILE *fp;
	char c;
	printf(" contents of file before appeending\n");
	
	fp = fopen("pqr.c","r");    // to display the file
	
	while(!feof(fp))
	{
		c=fgetc(fp);    // from file to monitor
		printf("%c",c);
	}
	fclose(fp);
	
	fp=fopen("pqr.c","a");
	if(fp==NULL)
	{
		printf("file can not appended");
		// exit(1)
	}
	
	printf("\n Enter string to attend\n");
	while(c!='.')
	{
		c=getche();
		fputc(c,fp);   // from monitor to file 
	}
	fclose(fp);
	
	printf("\n contents to file after appending \n");
	fp=fopen("pqr.c","r");
	while(!feof(fp))
	{
		c=fgetc(fp);
		printf("%c",c);
	}
	fclose(fp);
} 
