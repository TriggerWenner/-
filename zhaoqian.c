#include<stdio.h>
int main(){
    int price=0;
    int money=0;
    printf("请输入您购物金额");
    scanf("%d",&price);
    printf("%d",price);
    printf("\n请输入您交了多少钱");//输出的转义字符也需要在“”内
    scanf("%d",&money);
    printf("%d",money);
    printf("\n找您%d元，欢迎再次光临",money-price);
    return 0;//涓轰粈涔堜細鍑虹幇姝诲惊鐜?鐨勬儏鍐?
}