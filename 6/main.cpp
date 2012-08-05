/*
Гипотеза Варинга формулируется так: все числа представимы в виде K2 K-ых степеней. Гильберт доказал гипотезу Варинга в 1907 году. Затем были найдены более простые доказательства Литлвудом, Харди и Виноградовым и наконец совсем простое доказательство нашел Линник в 1942 году.
При K=2 получаем, что любое натуральное число представимо в виде суммы четырех квадратов. Мы не будем проверять верность этого утверждения. Наша задача — найти сколько чисел меньших либо равных n НЕ представимы в виде суммы трех квадратов целых чисел.
Вход есть натуральное число n меньше 10000.
ВХОД:
10
ВЫХОД: 
1
ВХОД:
100
ВЫХОД:
15
*/
#include <iostream>
#include <math.h>

using namespace std;

int arr[10000];
int map[10000];

int main(void)
{
  int N,m=0,i;
  int j,k,l;
  cin>>N;
  for(i=0;;i++)
  {
    if(i*i<=N)
    {
      arr[m]=i*i;
      m++;
    }
    else break;
  }
  for(j=0;j<m;j++)
  {
    for(k=0;k<m;k++)
    {
      for(l=0;l<m;l++)
      {
        if(arr[j]+arr[k]+arr[l]<=N)
        {
          map[arr[j]+arr[k]+arr[l]]++;
        }
      }
    }
  }
  int total=0;
  for(i=0;i<=N;i++)
  {
    if(map[i]==0)
      total++;
  }
  cout<<total<<endl;
  return 0;
}