#include<iostream>
using namespace std;


bool is_pronic(int num)
{
  if(num == 0)
  {
    return true;
  }
  int prev_factor = 1;
  for(int i=1; i<= num/2 ; i++)
  {
    if(num%i == 0)
    {
      if(prev_factor == i-1 && prev_factor* i == num)
      {
        return true;
      }
      prev_factor = i;
    }
  }
  return false;
}

int main()
{
  int number;
  cout<<"Enter a number:";
  cin>>number;
  if(is_pronic(number))
  {
    cout<<number<<" is  a pronic number."<<endl;
  }
  else
  {
    cout<<number<<" is ~not a pronic numeber"<<endl;
  }
}