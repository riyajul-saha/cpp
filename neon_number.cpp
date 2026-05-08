#include<iostream>
using namespace std;

bool is_neon(int num)
{
  if(num == 0)
  {
    return true;
  }
  
  int square = num*num;
  int sum = 0;
  while(square > 0)
  {
    sum = sum+(square%10);
    square=square/10;
  }
  if(sum == num)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int number;
  cout<<"Enter a number :";
  cin>>number;
  if(is_neon(number))
  {
    cout<<number<<" is  a neon number"<<endl;
  }
  else
  {
    cout<<number<<" is ~not a neon number"<<endl;
  }
  return 0;
}