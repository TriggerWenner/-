#include<stdio.h>
int main(){
    int price=0;
    int money=0;
    printf("��������������");
    scanf("%d",&price);
    printf("%d",price);
    printf("\n�����������˶���Ǯ");//�����ת���ַ�Ҳ��Ҫ�ڡ�����
    scanf("%d",&money);
    printf("%d",money);
    printf("\n����%dԪ����ӭ�ٴι���",money-price);
    return 0;//为什么会出现死循�?的情�?
}