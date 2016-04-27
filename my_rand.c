/*
** my_rand.c for  in /home/pastor_r/github
** 
** Made by remi pastor
** Login   <pastor_r@epitech.net>
** 
** Started on  Wed Apr 27 12:13:52 2016 remi pastor
** Last update Wed Apr 27 13:14:38 2016 remi pastor
*/

#include <time.h>

int	my_rand()
{
  int	a = 1103515245;
  int	b = 12345;
  int	m = 2147483647;
  int	old_nbr = time(NULL);

  old_nbr = (a * old_nbr + b) % m;
  if (old_nbr < 0)
    old_nbr = old_nbr * -1;
  return (old_nbr);
}

