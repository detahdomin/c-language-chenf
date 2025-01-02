#include<stdio.h>
#define tian_cai_jia 1.15
#define yang_li_jia 2.05
#define hu_luo_bo 1.09
int main(void)
{
    char ch;
    double yang_li = 0,tian_cai = 0,hu_luo = 0;
    double bang_shu,sum,sho_jia,shu_cai_fei,ding_dan,bao_zhuang;
    double zhe_ko = 0;
    while (1)
    {
        ch = getchar()
        if (ch == 'q')
            break;
        switch (ch)
        {
        case 'a':scanf("%lf",&bang_shu);
            sho_jia = yang_li_jia;
            yang_li += bang_shu;
            shu_cai_fei = yang_li * yang_li_jia;
            bang_shu = yang_li;
            break;
        case 'b':scanf("%lf",&bang_shu);
            sho_jia = tian_cai_jia;
            tian_cai += bang_shu;
            shu_cai_fei = tian_cai * tian_cai_jia;
            bang_shu = tian_cai;
            break;
        case 'c':scanf("%lf",&bang_shu);
            sho_jia = hu_luo_bo;
            hu_luo += bang_shu;
            shu_cai_fei = hu_luo * hu_luo_bo;
            bang_shu = hu_luo;
        default:
            break;
        }
        ding_dan = shu_cai_fei;
        if (shu_cai_fei > 100){
            ding_dan = shu_cai_fei * 0.05;
            shu_cai_fei *= 0.05;
            zhe_ko = 0.5;
        }
        if (bang_shu <= 5){
            bao_zhuang = 6.5;
            sum = shu_cai_fei + bao_zhuang;
        }
        else if (bang_shu > 5 && bang_shu <= 20){
            bao_zhuang = 14;
            sum = shu_cai_fei + bao_zhuang;
        }
        else{
            bao_zhuang = 14 + (bang_shu - 20 * 0.5);
            sum = shu_cai_fei + bao_zhuang;
        }
        printf("物品售价为:%lf,订购的重量为:%lf,蔬菜费:%lf,订单费用:%lf,折扣:%lf,运费和包装费:%lf,费用总和:%lf",sho_jia,bang_shu,shu_cai_fei,ding_dan,zhe_ko,bao_zhuang,sum);
    }
    return 0;
}