/*
** add_element.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Jun 20 17:45:02 2017 HORBACZ Nicolas
** Last update Sat Jun 24 19:24:05 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*add_element(t_list *list, int index, char *value)
{
  t_list	*element;

  element = malloc(sizeof(*element));
  if (element == NULL)
    return 0;
  element->index = index;
  element->value = value;
  element->next = list;
  return element;
}
