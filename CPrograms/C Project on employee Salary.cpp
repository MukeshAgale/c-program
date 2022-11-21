#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void acceptemp(int n);
void displayemp(int n);
//void heighsal();
void searchemp(int key,int n);
void max(int n);
struct employee
{
	int eid;
	char name[20];
	int age;
	float salery;
}e[10];

main()
{
	struct employee e[10];
	int choice,n,key;
		printf("\n\t\t\t\t enter no of records=");
				scanf("%d",&n);
	//while(choice!=6)
	//{
	do
	{
	
	
		printf("\t\t\t****EMPLOYEE MANAGEMENT SYSTEM**");
		printf("\n\n\n\t\t\t\t 1.Accept Employeee Record\n");
		printf("\t\t\t\t 2.Display Employee Record\n");
		printf("\t\t\t\t 3.Display Employee Record\n");
		printf("\t\t\t\t 4.Search Employee Record\n");
		printf("\t\t\t\t 5.Maxsal Employee Record\n");
		printf("\t\t\t\t 6.Exit");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			
				
				acceptemp(n);
				break;
			case 2:
				displayemp(n);
				printf("\t\t\t\t press any key exit\n");
				
				break;
			case 4:
				printf("\n\t\t\t\t enter eid= ");
				scanf("%d",&key);
				searchemp(key,n);
				break;
			case 5:
			max(n);
			break;
				
			case 6:exit(0);	
		}		
	}while(choice!=6);
//	}

}
void acceptemp(int n)
{
	int i;
	//struct employee e[10];
	printf("\n\t\t\t\t enter employee id,name,age,salary");
	for(i=0;i<n;i++)
	{
		scanf("%d%s%d%f",&e[i].eid,&e[i].name,&e[i].age,&e[i].salery);
	}
}
void displayemp(int n)
{
	int i;
	//struct employee e[10];
	printf("\n\t\t\t\t id \tname \tage \tsalary");
	for(i=0;i<n;i++)
	{
		printf("\n\t\t\t\t%d\t%s\t%d\t%f",e[i].eid,e[i].name,e[i].age,e[i].salery);
	}
}

void searchemp(int key,int n)
{
	int found=0,i;
	for(i=0;i<n;i++)
	{
		if(e[i].eid==key)
		{
			found=1;
			printf("\n\t\t\t\t%d\t%s\t%d\t%f",e[i].eid,e[i].name,e[i].age,e[i].salery);
			break;
			
			
		}
	}
	
	if(found==1)
	{
		printf("\n\t\t\t\t element is found");
		
	}
	else
	{
		printf("\n\t\t\t\t element is not found");
	}
	
}
void max(int n)
{
	int i,max1;
	for( i=0;i<n;i++)
	{
		if(e[i].salery>max1)
		{
			max1=e[i].salery;
		}
		

	}
	printf("\n\t\t\t\tIs a maximum salary = %d\n",max1);
	
	
}
