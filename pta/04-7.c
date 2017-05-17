BinTree Insert( BinTree BST, ElementType X )
{
    if(BST) {
        if(X < BST->Data) 
            BST->Left = Insert(BST->Left, X);
        else BST->Right = Insert(BST->Right, X);
    }
    else {
        BST = malloc( sizeof(struct TNode) );
        BST->Data = X;
        BST->Left = BST->Right = NULL;
    }
    return BST;
}

BinTree Delete( BinTree BST, ElementType X )
{
    Position TmpCell;
    
    if( BST == NULL ) { 
        printf("Not Found\n");
        return NULL;
    }
    else if( X < BST->Data ) 
        BST->Left = Delete( BST->Left, X );
    else if( X > BST->Data )
        BST->Right = Delete( BST->Right, X );
    // Found element to be deleted
    else if( BST->Left && BST->Right ) {
        TmpCell = FindMin( BST->Right );
        BST->Data = TmpCell->Data;
        TmpCell->Right = Delete( BST->Right, BST->Data );
    }
    else {
        TmpCell = BST;
        if( BST->Left == NULL )
            BST = BST->Right;
        else if( BST->Right == NULL )
            BST = BST->Left;
        free( TmpCell );
    }
    return BST;
}

Position Find( BinTree BST, ElementType X )
{
    Position TmpCell;
    if( BST == NULL ) return NULL;
    if( BST->Data != X )
        TmpCell = BST->Data > X ? Find( BST->Left, X ) : 
                                  Find( BST->Right, X );
    else TmpCell = BST;
    return TmpCell;
}

Position FindMax( BinTree BST )
{
    Position TmpCell;
    if( BST == NULL ) return NULL;
    TmpCell = BST->Right ? FindMax( BST->Right ) : BST;
    return TmpCell;
}

Position FindMin( BinTree BST )
{
    if( BST == NULL ) return NULL;
    if( BST->Left ) FindMin( BST->Left );
    else return BST;
}
