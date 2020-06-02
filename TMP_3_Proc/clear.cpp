#include "clear.h"
void Clear(List &c) {
	node *clear = c.head;
	node *time = new node;

	//clear = c.head;
	while (true)
	{
		time = clear->next;
		delete clear;
		clear = time;
		if (clear == NULL)
		{
			//delete(c.endList);
			//delete(c.head);
			break;
		}
	}

}