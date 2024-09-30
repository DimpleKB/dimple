#include<stdio.h>
typedef struct matrix{
    int row,col,value;
}m;
// void transpose(m a[],m b[])
// {
//     int n=a[0].value,k=1;
//     b[0].row=a[0].col;
//     b[0].col=a[0].row;
//     b[0].value=a[0].value;
//     for(int i=0;i<a[0].col;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(a[j].col==i)
//             {
//                 b[k].row=a[j].col;
//                 b[k].col=a[j].row;
//                 b[k].value=a[j].value;
//                 k++;
//             }
//         }
//     }
//     printf("\n");
//     for(int i=0;i<k;i++)
//     {
//         printf("%d\t%d\t%d",b[i].row,b[i].col,b[i].value);
//         printf("\n");
//     }
// }
#define MAX 10
void fast_transpose(m a[],m b[])
{
    int row_terms[MAX],starting_pos[MAX],j,numscol=a[0].col,numsterms=a[0].value;
    b[0].row=a[0].col;
    b[0].col=a[0].row;
    b[0].value=a[0].value;
    for(int i=0;i<numscol;i++)
    {
        row_terms[i]=0;
    }
        for(int j=1;j<=numsterms;j++)
        {
            row_terms[a[j].col]++;
        }
    
    starting_pos[0]=1;
    for(int i=1;i<=numscol;i++)
    {
        starting_pos[i]=starting_pos[i-1]+row_terms[i-1];
    }
    for(int i=1;i<=numsterms;i++)
    {
        j=starting_pos[a[i].col]++;
        b[j].row=a[i].col;
        b[j].col=a[i].row;
        b[j].value=a[i].value;
    }
    printf("\n");
    for(int i=0;i<=numsterms;i++)
    {
        printf("%d\t%d\t%d",b[i].row,b[i].col,b[i].value);
        printf("\n");
    }
}
int main()
{
    int arr[5][4]={
        {0,4,0,5},
        {0,0,3,6},
        {0,0,2,0},
        {2,0,0,0},
        {1,0,0,0}
    };
    int size=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]!=0)
            {
                size++;
            }
        }
    }
    m matrix[size],b[size];
    int k=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]!=0)
            {
                matrix[k+1].row=i;
                matrix[k+1].col=j;
                matrix[k+1].value=arr[i][j];
                k++;
            }
            
        }
    }
    matrix[0].value=k;
    matrix[0].row=5;
    matrix[0].col=4;
    for(int i=0;i<=k;i++)
    {
        printf("%d\t%d\t%d",matrix[i].row,matrix[i].col,matrix[i].value);
        printf("\n");
    }
    fast_transpose(matrix,b);
}