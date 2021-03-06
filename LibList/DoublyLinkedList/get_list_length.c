/*
** get_list_length.c for  in /home/nicolas/Documents/etna/LibList/DoublyLinkedList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Jun 26 15:50:30 2017 HORBACZ Nicolas
** Last update Mon Jun 26 15:58:20 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

int get_list_length(t_list *list)
{
  int nb_elements;

  nb_elements = 0;
  while (list != NULL)
    {
      nb_elements++;
      list = list->next;
    }
  return nb_elements;
}
