#include <iostream>
#define MAX 100
using namespace std;

void enterMatrix(int a[][MAX], int &n, int &m);
int isPrime(int n);
int countPrimeElements(int a[][MAX], int n, int m);

int main()
{
    int a[MAX][MAX],n,m;
    enterMatrix(a,n,m);
    cout<<countPrimeElements(a,n,m);
    return 0;
}

void enterMatrix(int a[][MAX], int &n, int &m){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}

int isPrime(int n){
    int count=0;
    if(n<2) return 0;
    for(int i=2;i<n;i++){
        if(n%i==0)
            count++;
    }
    if(count==0)
        return 1;
    return 0;
}

int countPrimeElements(int a[][MAX], int n, int m){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(isPrime(a[i][j])==1){
                count++;
            }
        }
    }
    return count;
}
