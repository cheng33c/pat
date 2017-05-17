List Merge( List L1, List L2 )
{
	List L3 = (PtrToNode)malloc(sizeof(struct Node));
	PtrToNode p = L1->Next, q = L2->Next, m = L3;
	while( p && q ) {
		if(p->Data < q->Data) { m->Next = p; p = p->Next; }
		else { m->Next = q; q = q->Next; }
		m = m->Next;
	}

	if(p) m->Next = p;
	else m->Next = q;

	L1->Next = NULL;
	L2->Next = NULL;

	return L3;
}

