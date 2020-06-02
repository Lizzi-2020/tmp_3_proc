// ¬ывод содержимого контейнера в указанный поток
#include "outall.h"
void Out(List &c, std::ofstream &ofst) {
	ofst << "Container contains " << c.data
		<< " elements." << std::endl;
	node* nod = c.head;
	key k;
	//transport* b = new transport;
	int a = c.data;
	while (0 < a)
	{
		outtransport(nod->data, ofst);
		nod = nod->next;
		//c.data--;
		a--;
	}
}