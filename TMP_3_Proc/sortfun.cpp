#include "sortfun.h"
void Sort(List &c)
{
	node* fir = c.head;
	node* sec = c.head->next;
	node* tmp = new node;
	while (fir->next)
	{
		while (sec)
		{
			if (Compare(fir->data, sec->data))
			{
				/*node* time2 = fir->next->next;
				node* time = fir;*/
				tmp->data = fir->data;
				fir->data = sec->data;
				sec->data = tmp->data;

			}
			sec = sec->next;
		}
		fir = fir->next;
		sec = fir->next;
	}
}