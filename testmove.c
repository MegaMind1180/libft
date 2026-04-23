#include "libft.h"

int main(void)
{
    t_list *ersterWert;
    t_list *zweiterWert;
    t_list *dritterWert;

    ersterWert->i = 69;
    zweiterWert->i = 88;

    ersterWert->next = zweiterWert;
    zweiterWert->prev = ersterWert;
    zweiterWert->next = dritterWert;




    function1(ersterWert);
}





void function1(t_list *item)
{
    t_list *zwei = item->next;
}