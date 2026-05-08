#include<iostream>
using namespace std;

int length(int num)
{
  int len=0;
  while(num > 0)
  {
    len++;
    num = num/10;
  }
  return len;
}

int calculate_exponant(int num,int power)
{
  int result=1;
  for(int i = 0; i < power; i++)
  {
    result=result*num;
  }
  return result;
}

bool is_armstrong(int num)
{
  int temp = num;
  int sum = 0;
  int power = length(num);
  while(temp > 0)
  {
    int rem = temp%10;
    sum = sum+calculate_exponant(rem,power);
    temp = temp/10;
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
  if(is_armstrong(number))
  {
    cout<<number<<" is a armstrong number"<<endl;
  }
  else
  {
    cout<<number<<" is ~not a armstrong number"<<endl;
  }
}