#include <iostream>
using namespace std;
#include "mylib.h"
int main()
{
    /*int N;
    cout<<"Nhap kich thuoc ban co: ";
    cin>>N;    
    
    char bc[100][100];
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            bc[i][j] = '-';
            
    XepHau(1, bc, N);
    
    return 0;*/
    char a,b,c;
   	cout<<"Nhap a, b, c: ";
   	cin>>a>>b>>c;
    ThapHaNoi(3,a,b,c);   
}
