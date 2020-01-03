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
	bool PriorElem(int *currentElem, int *preElem);//ǰ��
	bool NextElem(int *currentElem, int *nextElem);//���
	void ListTraverse();
	bool ListInsert(int i, int* e);//����
	bool ListDelete(int i, int* e);//ɾ��

	
private:
	int *m_pList;
	int m_iSize;
	int m_iLength;

};

#endif