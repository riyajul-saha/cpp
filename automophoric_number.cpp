#include<iostream>
// #include<math>
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

bool is_automorphic(int num)
{
  int sqare = calculate_exponant(num,2);
  int len = length(num);
  int devisor = calculate_exponant(10,len);
  int result = (sqare - num)%devisor;
  if(result == 0)
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
  int len;
  cout<<"Enter a Number :";
  cin>>number;
  if(is_automorphic(number))
  {
    cout<<number<<" is a automophoric number"<<endl;
  }
  else
  {
    cout<<number<< " is ~not a automophoric number" <<endl;
  }
  
  return 0;
}