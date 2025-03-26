#include<bits/stdc++.h>
using namespace std;

int find(string &s)
{
    int sum=0;
    int num=0;
    for(int i=0;i<s.size();i++)//abc56df4e4
    {
        if(!(s[i]>='0' && s[i]<='9'))
        {
            sum+=num;
            num=0;
            //s[i]='0';
            continue;

        }
        num=num*10 + s[i]-'0';
    }
    return num+sum;

}

int main(){
    string input="abc56d11e8";
    //cout<<"ENTER THE STRING: ";
    //getline(cin,input);

    int result=find(input);
    cout<<"THE ANSWERR IS :"<<result<<endl;

    return 0;
}