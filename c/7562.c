#include <stdio.h>
#define SIZE 303

int queue_x[40000];
int queue_y[40000];
int sum[SIZE][SIZE];
int a,b;

void init_sum(int N)
{
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            sum[i][j]=0;
        }
    }
}

void BFS(int x, int y, int N)
{
    int here,there;

    int rear=-1;
    int front=-1;

    sum[y][x]=0;
    queue_y[++rear]=y;
    queue_x[rear]=x;

    while(front<rear){
        here = queue_y[++front];
        there = queue_x[front];
        if(there+1<N && here+2<N && sum[here+2][there+1]==0 &&(there+1!=x || here+2!=y)){
            queue_x[++rear]=there+1;
            queue_y[rear]=here+2;
            sum[here+2][there+1]=sum[here][there]+1;
            if(there+1==a && here+2==b) break;
        }
        if(there-1>=0 && here+2<N && sum[here+2][there-1]==0 &&(there-1!=x || here+2!=y)){
            queue_x[++rear]=there-1;
            queue_y[rear]=here+2;
            sum[here+2][there-1]=sum[here][there]+1;
            if(there-1==a && here+2==b) break;
        }//
        if(there-2>=0 && here+1<N && sum[here+1][there-2]==0 &&(there-2!=x || here+1!=y)){
            queue_x[++rear]=there-2;
            queue_y[rear]=here+1;
            sum[here+1][there-2]=sum[here][there]+1;
            if(there-2==a && here+1==b) break;
        }
        if(there-2>=0 && here-1>=0 && sum[here-1][there-2]==0 &&(there-2!=x || here-1!=y)){
            queue_x[++rear]=there-2;
            queue_y[rear]=here-1;
            sum[here-1][there-2]=sum[here][there]+1;
            if(there-2==a && here-1==b) break;
        }
        if(there-1>=0 && here-2>=0 && sum[here-2][there-1]==0 &&(there-1!=x || here-2!=y)){
            queue_x[++rear]=there-1;
            queue_y[rear]=here-2;
            sum[here-2][there-1]=sum[here][there]+1;
            if(there-1==a && here-2==b) break;
        }
        if(there+1<N && here-2>=0 && sum[here-2][there+1]==0 &&(there+1!=x || here-2!=y)){
            queue_x[++rear]=there+1;
            queue_y[rear]=here-2;
            sum[here-2][there+1]=sum[here][there]+1;
            if(there+1==a && here-2==b) break;
        }//
        if(there+2<N && here-1>=0 && sum[here-1][there+2]==0 &&(there+2!=x || here-1!=y)){
            queue_x[++rear]=there+2;
            queue_y[rear]=here-1;
            sum[here-1][there+2]=sum[here][there]+1;
            if(there+2==a && here-1==b) break;
        }
        if(there+2<N && here+1<N && sum[here+1][there+2]==0 &&(there+2!=x || here+1!=y)){
            queue_x[++rear]=there+2;
            queue_y[rear]=here+1;
            sum[here+1][there+2]=sum[here][there]+1;
            if(there+2==a && here+1==b) break;
        }
    }
}

int main(void)
{
    int T,N,x,y;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d", &N);
        scanf("%d %d", &x, &y);
        scanf("%d %d", &a, &b);
        init_sum(N);
        BFS(x,y,N);
        printf("%d\n",sum[b][a]);
    }
    return 0;
}