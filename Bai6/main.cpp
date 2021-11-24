#include <iostream>
#define MAX 100
using namespace std;

void enterMatrix(int a[][MAX], int &n, int &m, int &x);
void printLocation(int a[][MAX], int n, int m, int x);

int main()
{
    int a[MAX][MAX],n,m,x;
    enterMatrix(a,n,m,x);
    printLocation(a,n,m,x);
    return 0;
}

void enterMatrix(int a[][MAX], int &n, int &m, int &x){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>x;
}

void printLocation(int a[][MAX], int n, int m, int x){
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(a[i][j]==x){
                cout<<i<<" "<<j;
                return;
            }
        }
    }
}
