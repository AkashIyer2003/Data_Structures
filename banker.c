#include<stdio.h>
int main(){
	int n = 5;
	int m = 3;
	int alloc[5][3] = {{0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};
	int max[5][3] = {{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
	int avail[3] = {3,3,2};
	int need[n][m];
	for(int i = 0; i < n;i++){
		for(int j = 0; j < m;j++){
			need[i][j] = max[i][j] - alloc[i][j];
		}
	}
	int f[n],ans[n],ind = 0;
	for(int i = 0; i<n;i++){
		f[i] = 0;
	}
	int y = 0;
	for(int k = 0; k < n; k++){
		for(int i = 0; i < n; i++){
			if(f[i] == 0){
				int flag = 0; 
				for(int j = 0; j < m; j++){
					if(avail[j] < need[i][j]){
						flag = 1;
						break;
					}
				}
				if(flag == 0){
					ans[ind++] = i;
					f[i] = 1;
					for(int j = 0; j < m;j++){
						avail[j] += alloc[i][j];
					}
				}
			}
		}
	}
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(f[i] == 0){
			flag = 1;
			printf("No safe path is found");
		}
	}
	if(flag == 0){
		printf("Following is the safe sequence:\n");
		for(int i = 0; i < n; i++){
			printf("P%d->",ans[i]);
		}
	}
}
					
