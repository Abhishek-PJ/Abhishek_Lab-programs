#include<stdio.h>
#include<stdlib.h>


int visited[5]={0,0,0,0,0};
int A[5][5]={
{0,1,1,0,0},
{1,0,1,1,0},
{1,1,0,1,1},
{0,1,1,0,1},
{0,0,1,1,0},

};


void dfs(int i){
printf("%d\n",i);
visited[i]=1;

for (int j = 0; j < 5; j++)
{
   if (A[i][j]==1 && !visited[j])
   {
    dfs(j);

   }

}

}

int main(){
    dfs(0);
    return 0;
}

// output:-
// 0
// 1
// 2
// 3
// 4
