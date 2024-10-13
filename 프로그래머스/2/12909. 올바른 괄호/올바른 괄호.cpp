#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int cnt =0;
    for(char c : s){
        if(c=='(')
            cnt++;
        else if(cnt>0)
            cnt--;
        else
            return false;
    }
    
    return cnt==0;
}