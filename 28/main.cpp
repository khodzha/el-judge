/*
Игра "Считалочка" заключается в следующем. N человек (мы пронумеруем их числами 1, 2, ... N) встают в круг и начинают считать с первого по кругу.
Каждый M-ый выходит из круга. Один человек, который останется, считается победителем.
Если N = 6, а M = 5, то будут выходить 5, 4, 6, 2, 3 и останется игрок с номером 1.
У нас N человек разбиты на две команды по K человек. Первые K принадлежат первой команде, следующие K — второй команде.
Вам нужно найти такое минимальное M, что в игре "Считалочка" сначала выйдут все игроки второй команды, прежде, чем какой-либо игрок первой команды.

Вход Число K. 0 < K < 14.
Выход Число M.

Вход#1
4
Выход#1
30
*/

#include <iostream>

using namespace std;

bool check(int M, int K);

int main(void)
{
  int K,M;
  cin>>K;
  for(M=1;;M++)
  {
    if(check(M,K))
    {
      cout<<M<<endl;
      return 0;
    }
  }
}

bool check(int M, int L)
{
  int p=0;
  int R=L;
  int c=M;
  while(true)
  {
    c=M-p;
    while(c>(R+L))
    {
      c-=(R+L);
    }
    if(c<=L)
      return false;
    else
    {
      p=L+R-c;
      R--;
    }
    if(R==0)
    {
      return true;
    }
  }
}