#include <stdio.h>
#include <stdlib.h>

typedef enum { false, true } bool;
typedef int ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree BuildTree(); /* 由裁判实现，细节不表 */
bool IsBST ( BinTree T );

int main()
{
    BinTree T;
    
    T = BuildTree();
    if ( IsBST(T) ) printf("Yes\n");
    else printf("No\n");
    
    return 0;
}
bool IsBST ( BinTree T )
{
    if(T!=NULL&&T->Right==NULL&&T->Left==NULL)
    {
        return true;
    }
    if(T!=NULL)
    {
    if(T->Data>IsBST(T->Right))
    {
        return false;
    }
   else if(T->Data<IsBST(T->Left))
    {
        return false;
    }
    else
    {
        return true;
    }
    }
        return true;
}
