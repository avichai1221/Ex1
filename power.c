
#include "myMath.h"
#define EXP 2.7182818285
double Exp(int x) {
    if (x == 0) return 1;
    double ans = 1;
    double help = -1*x;
    if (x>0) {
        for (int i = 0; i < x; ++i) {
            ans = ans * EXP;
        }
        return ans;
        }else
         for (int i = 0; i < help; ++i) {
             ans = EXP * ans;
         }
                return 1/ans;

}
double Pow (double x,int y) {
    if (y == 0) return 1;
    if (x==0)return 0;
    double ans = 1;
    int help=-1*y;
    if (y > 0) {
        for (int i = 0; i < y; ++i) {
            ans = ans * x;
        }
        return ans;
    }else
        for (int i = 0; i < help; ++i) {
            ans = ans * x;
        }
     return 1/ans;
}
