#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
cin>>n;
string word [n];
for(int i=0;i<n;i++)
{
cin>>word[i];
    
}
for(int i=0;i<n;i++)
{
int nolet=0;
int j=0;
while(word[i][j]!='\0')
    {
    nolet++;
   j++;
    }
 
if(nolet<=10)
cout<<word[i]<<endl;
else
cout<<word[i][0]<<nolet-2<<word[i][nolet-1]<<endl;
 
    
    
    
}
 
 
 
    return 0;
}