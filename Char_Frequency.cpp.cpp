#include <iostream>
using namespace std;


// Frequency count in care of strings

int main() 
{
    string s;
    cin>>s;
    int hash[26];
    
    for(int i=0;i<s.size();i++){
      hash[s[i]-'a']++;
      
    }
    int q;
    cin>>q;
    while(q--){
      char c;
      cin>>c;
      cout<<hash[c-'a']<<endl;
  
    }
    return 0;
}   