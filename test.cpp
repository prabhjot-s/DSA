//program to find number of duplicates in a string
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<string> words;
for(string s;cin>>s && s!="quit";)
words.push_back(s);
sort(words.begin(),words.end());
vector<string> w2;
if(words.size()>0)
{
  w2.push_back(words[0]);
  for(int i=1;i<words.size();i++)
  {
    if(words[i]!=words[i-1])
    w2.push_back(words[i]);
  }
}
cout<<"found "<<words.size()-w2.size()<<" duplicates"<<endl;
for(string s:w2)
cout<<s<<endl;
return 0;
}
