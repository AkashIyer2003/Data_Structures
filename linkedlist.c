#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define INF 9999999
int main()
{
int no_edges;
int V;
printf("enter the no. of vertices\n");
scanf("%d",&V);
int selected[V];
int s = 0;
char opt;
int beg, end, cost;
/*for(int i = 0; i < V; i++)
{
for(int j = 0; j < V; j++)
{
G[i][j] = -1;
}
}*/
int G[5][5] = {0, 9, 75, 0, 0,9, 0, 95, 19, 42,75, 95, 0, 51, 66,0, 19, 51, 0, 31,0, 42, 66, 31, 0};
while(true)
{
printf("enter Begin: ");
scanf("%d",&beg);
printf("enter End: ");
scanf("%d",&end);
printf("enter Cost: ");
scanf("%d",&cost);
if(!(beg<V)&&(end<V))
{
s = 1;
printf("Invalid\n");
}
else
{
G[beg][end] = cost;
}
if (s)
{
s = 1;
continue;
}
else
{
printf("do you want to continue(y/n)?");
scanf("%c",&opt);
if(opt == 'y')
break;
}
for(int i = 0; i<V; i++)
{
selected[i] = false;
}
no_edges = 0;
selected[0] = true;
int x;
int y;
printf("Edges :  Weight\n");
while(no_edges < V)
{
int min = INF;
x = 0;
y = 0;
for(int i = 0; i<V; i++)
{
if(selected[i])
{
for(int j = 0; j<V; j++)
{
if(!selected[j]&&G[i][j])
{
if(min>G[i][j])
{
min = G[i][j];
x = i;
y = j;
}
}
}
}
}
printf("%d-%d : %d\n",x,y,G[x][y]);
selected[y] = true;
no_edges++;
}
return 0;
}
}
