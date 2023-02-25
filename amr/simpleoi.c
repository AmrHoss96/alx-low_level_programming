#include <stdio.h>
/**
 * reads 10 numbers
 */
#define MAX 10

int main(void)
{
	int data[MAX];

	int i,j,tmp;
	FILE *fp;
	/* read data of 10 numbers */
	fp = fopen("input.txt","r");
	if(fp== NULL)
	{
		perror("Could not find the input file\n");
		return (0);
	}
	for (i = 0; i <MAX; i++)
	{
		//printf("Enter item #%d: ", i);
		fscanf(fp,"%d",&data[i]);
		}
	fclose(fp);

	printf("You entered the following items\n");
	for (i=0; i<MAX; i++)
	{
		printf("item #%d: %d\n",i,data[i]);
	}
	/* simple sorting*/
	for (i=0; i<MAX; i++)
	{ 
		for (j=0; j<MAX; j++)
		{
		       	if (data[i] < data[j])
			{
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}

	fp=fopen("output.txt","w");
if (fp == NULL){
perror("Couldn't open output.txt for writing.\n");
return (0);
}
	fprintf(fp,"\nSorted data:\n");
	for (i=0; i<MAX; i++)
	{
	fprintf(fp,"item #%d= %d\n",i,data[i]);
	}
fclose(fp);
	return (0);
}
