#include <stdio.h>
#include "prodManager.h"




int updateproduct(product *p){
    int decision=0;
    printf("이름 수정: ");
    printf("수정하시려면 1번을 눌러주세요");
    scanf("%d",&decision);
    if(decision==1){
        printf("이름 입력: ");
        gets(p->name);
    }
    printf("정보 수정: ");
    printf("수정하시려면 1번을 눌러주세요");
    scanf("%d",&decision);
    if(decision==1){
        printf("정보 입력: ");
        gets(p->info);
    }
    printf("가격 수정: ");
    printf("수정하시려면 1번을 눌러주세요");
    scanf("%d",&decision);
    if(decision==1){
        printf("가격 입력: ");
        scanf("%d",p->price);
    }
    printf("수량 수정: ");
    printf("수정하시려면 1번을 눌러주세요");
    scanf("%d",&decision);
    if(decision==1){
        printf("수량 입력: ");
        scanf("%d",p->remain);
    }

}

int printRemain(product *p,int count){
    for(int i=0;i<count;i++){
        if(p[i].price==-1) continue;
        printf("%s: %d개 남았습니다.\n",p[i].name,p[i].remain);
    }
}




int main(){
    return 0;
}
