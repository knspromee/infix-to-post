#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>t;
    unordered_map(char,int)m;
    for(auto ch:s)
    {
       m[ch]++;
    }
    if(m["("] >0)
    {
           for(int i=0; i<s.size(); i++)
           {
                  if(s[i] == '(')
                  {
                        for(int j=i; j<s.size(); j++)
                        {
                              if(s[j] == ')')  break;
                              if(s[j] == '*' || s[j] == '/')
                              {
                                       t.push_back(s[j-1]);
                                       t.push_back(s[j+1]);
                                       t.push_back(s[j]);
                                       j += 3;
                              }
                        }
                        for(int j=i; j<s.size(); j++)
                        {
                              if(s[j] == ')')  break;

                              if(s[j] == '+' || s[j] == '-')
                              {
                                       t.push_back(s[j-1]);
                                       t.push_back(s[j+1]);
                                       t.push_back(s[j]);
                                       j += 3;
                              }
                        }
                  }
           }

       else
       {
          t.push_back(s[i]);
       }
    }
    else
    {
            for(int i=0; i<s.size(); i++)
            {

                  if(s[i] == '*' || s[i] == '/')
                  {
                        t.push_back(s[i-1]);
                        t.push_back(s[i+1]);
                        t.push_back(s[i]);
                        i += 3;
                  }
                  else
                  {
                     t.push_back(s[i]);
                  }
            }
            for(int i=0; i<s.size(); i++)
            {

                  if(s[i] == '+' || s[i] == '-')
                  {
                        t.push_back(s[i-1]);
                        t.push_back(s[i+1]);
                        t.push_back(s[i]);
                        i += 3;
                  }
                  else
                  {
                     t.push_back(s[i]);
                  }
            }
    }


}
