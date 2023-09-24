#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

typedef int DataType ;
typedef struct BTree{
    BTree * left ;
    BTree * right ;
    DataType x ;
}BTNode;

void preordered( BTNode * root ){
    if(root == NULL){
        printf("NULL\n");
        return ;
    }
    printf("%d",root -> x);
    preordered(root -> left);
    preordered(root -> right);
    return ;
}


void test(){

    std :: cout << 1 << std :: endl;
    return ;

}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;
   // while (_t--)solve();
    BTNode * first[20] = {} ;

     first[0] =  (BTNode *)malloc(sizeof(BTNode));
     first[1] =  (BTNode *)malloc(sizeof(BTNode));
     first[2] =  (BTNode *)malloc(sizeof(BTNode));
     first[3] =  (BTNode *)malloc(sizeof(BTNode));
     first[4] =  (BTNode *)malloc(sizeof(BTNode));
     first[5] =  (BTNode *)malloc(sizeof(BTNode));

     test();

    return 0 ;
}


// 求树的深度 ；
// 分治 ； 
// 

int TreeHeight(BTNode * root){
	
	


}