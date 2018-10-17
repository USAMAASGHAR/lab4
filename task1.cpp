#include<iostream>
using namespace std;
class Tollbooth{
public:
Tollbooth()
{
num_car=0;
amount_collected=0;
}

double paying_car()
{
num_car++;
amount_collected+=150.50;
}
int no_pay_car()
{
num_car++;
}
void display()
{
cout<<"Total cars passed : > "<<num_car<<'\n';
cout<<"Total amount collected is : > "<<amount_collected<<'\n';
cout<<"Loss due to non paying car is : > "<<(num_car*150.50)-amount_collected;

}
private:
int num_car;
double amount_collected;
};
main()
{
Tollbooth day1;
char c='w';
while(c == 'w')
{
char a;
cout<<"Enter your choice >> : "<<'\n';
cin>>a;
if(a=='p')
{
day1.paying_car();
}
else if(a=='n')
{
day1.no_pay_car();
}
else if(a=='q')
{
day1.display();
c='w';
}
else{
cout<<"INVALID"<<'\n';
}

}
return 0;
}

