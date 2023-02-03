#include<stdio.h>
#include<string.h>
int main()
{
    int vertex;
    printf("Enter the no of vertices: ");
    scanf("%d",&vertex);

    int graph[vertex][vertex];
    int i,j;
    for(i;i<vertex;i++)
    {
        for(j=0;j<vertex;j++)
        {    
        	if(i==j)
        	{
        		graph[i][j]=0;
			}
			else
			{
				printf("Is vertex(%d %d) connected?(1/0)",i,j);
	            scanf("%d",&graph[i][j]);	
			}
            
        }
    }
    printf("\t");
    for(i=0;i<vertex;i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    for(i=0;i<vertex;i++)
    {
        printf("%d\t",i);
        for(j=0;j<vertex;j++)
        {    
            printf("%d\t",graph[i][j]);
        }
        printf("\n");
    }
}
