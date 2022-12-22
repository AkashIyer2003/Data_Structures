#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int indx(int nodes[], int i, int n)
{
for(int j = 0; j<n; j++)
{
if(i == nodes[j])
{
return j;
}
}
return -1;
}
void DFS(int i, int n,int matrix[n][n], int visited[], int nodes[])
{
printf("%d",i);
visited[i] = 1;
int k = indx(nodes, i, n);
for( int j = 0; j<n; j++)
{
if((matrix[k][j]!= -1)&&(visited[nodes[j]]==0))
{
DFS(nodes[j],n,matrix,visited,nodes);
}
}
}
void menu()
{
printf("\n1.create nodes\n2.display graphs\n3.DFS\n");
}
int main()
{
int n;
printf("enter the no. of nodes\n");
scanf("%d",&n);
int matrix[n][n];
for(int i = 0; i<n; i++)
{
for(int j = 0; j<n; j++)
{
matrix[i][j] = -1;
}
}
int nodes[n];
for(int i=0; i<n ; i++)
{
printf("enter value of nodes\n");
scanf("%d",&nodes[i]);
}
int opt,beg,end,cost;
menu();
scanf("%d",&opt);
while(opt!=4)
{
if(opt == 1)
{
printf("enter beginning and the end\n");
scanf("%d %d",&beg,&end);
printf("enter cost:\t");
scanf("%d",&cost);
matrix[indx(nodes, beg,n)][indx(nodes,end,n)] = cost;
matrix[indx(nodes, end,n)][indx(nodes,end,n)] = cost;
}
else if(opt == 2)
{
for(int i = 0; i<n; i++)
{
printf("%d\t",nodes[i]);
}
printf("\n");
for(int i = 0; i<n; i++)
{
printf("%d\t",nodes[i]);
for(int j = 0; j<n; j++)
{
printf("%d\t",matrix[i][j]);
}
printf("\n");
}
}
else if(opt == 3)
{
int visited[200];
for(int i =0;i<200;i++)
{
visited[i] = 0;
}
DFS(nodes[0], n, matrix, visited, nodes);
printf("\n");
}
menu();
printf("enter your option: ");
scanf("%d",&opt);
}
}
