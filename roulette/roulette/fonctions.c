/*
** fonctions.c for  in /home/nicolas/horbac_n/roulette
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Sat Mar 25 10:14:55 2017 HORBACZ Nicolas
** Last update Sat Mar 25 12:21:43 2017 HORBACZ Nicolas
*/

int argent_gagne(int mise)
{
  int	gains;
  
  gains = 0;
  gains = mise * 3;
  return (gains);
}

int pair(int mise)
{
  if (mise % 2 == 0)
    {
      return (1);
    }
  return (0);
}
      
