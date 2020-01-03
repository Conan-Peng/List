#ifndef LIST_H
#define LIST_H

class List
{
public:
	List(int size);
	~List();
	void ClearList();
	bool ListEmpty();
	int ListLength();
	bool GetElem(int i, int *e);
	int LocatedElem(int *e);
	bool PriorElem(int *currentElem, int *preElem);//Ç°Çý
	bool NextElem(int *currentElem, int *nextElem);//ºó¼Ì
	void ListTraverse();
	bool ListInsert(int i, int* e);//²åÈë
	bool ListDelete(int i, int* e);//É¾³ý

	
private:
	int *m_pList;
	int m_iSize;
	int m_iLength;

};

#endif