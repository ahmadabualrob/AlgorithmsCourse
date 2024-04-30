#include <iostream>
 
using namespace std;
 
int main()
{
 int w;
    cin>>w;
    
    if(w%2==0)
{
 
int flage=0;
for(int i=1;i<w-1;i++)
{
if(i%2==0)
flage++;
    
    
}
 
 
if(flage>=1)
    {
    cout<<"YES";
 
        
    }   
    else 
    cout<<"NO";
}
 else 
 cout<<"No";
 
 
    return 0;
}