#include<iostream>
#include<string>
#include<vector>
using namespace std;
class stake{
public:
bool empty()
{
if(stack.size()==0)
{return 1;  }
else
 return 0;
}
void push(string a)
{
stack.push_back(a);

}
string top()
{
return stack.back();
}
void pop()
{
stack.pop_back();
}

private:
vector <string>stack;

};
main()
{
string a,b;
stake s1;
cout<<"press A for add and D to remove >> : "<<'\n';
while(true)
{
if(s1.empty()==1)
{cout<<"slake is empty"<<'\n';}
cin>>b;
if(b=="A")
{
cout<<"ENTER YOUR STRING >> :  ";
cin>>a;
s1.push(a);
cout<<s1.top()<<'\n';
}
else if(b=="D")
{
s1.pop();
}
else 
{
cout<<"INVALID INPUT"<<'\n';
}
}
return 0;}
