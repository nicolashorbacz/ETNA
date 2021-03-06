/*
** my_rev_size.c for  in /home/nicolas/horbac_n/my_rev_size
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 29 15:57:28 2017 HORBACZ Nicolas
** Last update Wed Mar 29 23:37:14 2017 HORBACZ Nicolas
*/

#include <stdlib.h>

typedef struct  s_list
{
  void          *data;
  struct s_list *next;
}               t_list;

t_list          *add_list(t_list *list, char *data)
{
  t_list        *node;

  node = malloc(sizeof(t_list));
  if (node == NULL)
    return(NULL);
  node->next = list;
  node->data = data;
  return (node);
}

t_list          *my_params_in_list(int argc, char **argv)
{
  t_list        *list;
  int           i;

  i = 0;
  list = NULL;
  while (i < argc)
    {
      list = add_list(list, argv[i]);
      i++;
    }
  return (list);
}

void		my_rev_list(t_list **begin)
{
  t_list	*list;
  t_list	*tmp;
  t_list	*tmp2;

  list = *begin;
  while (tmp)
    {
      tmp = list->next;
      tmp2 = list->next->next;
      list->next->next = list;
      list = tmp;
    }
  begin-next;
}



