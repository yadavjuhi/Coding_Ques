#include <iostream>
using namespace std;

// Count small as well as capital

int main() 
{
  string s;
  cin>>s;
  int hash[256]={0};
  for(int i=0;i<s.size();i++){
    hash[s[i]]++;
     
  }
  for(int i=0;i<256;i++){
    if(hash[i]!=0){
       
    cout<<hash[i]<<" "<<char(i)<<endl;;
    
    }
  
  // cout<<char(353);
  
   }
}
