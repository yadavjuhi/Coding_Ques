#include <iostream>
using namespace std;

int main() 
{
    string str;
    cin>>str;
    int n=str.length();
    int hash[26]={0};
    for(int i=0;i<n;i++){
      hash[str[i]-'a']++;
    }
    
    for(int i=0;i<26;i++){

        if(hash[i]!=0){
          char ch='a'+i;
          cout<<ch<<":";
    
          cout<<hash[i]<<" "<<endl;
    }
  } 
  
  char q='a'+3;
  cout<<q;
}