#include <math.h>
#include <stdio.h>

int square(int num){
    return (num * num);
}

int getPythagTripletsSum1000(){
    int b,found,ans; 
    double a;
    found=0,b=0;;

    while(!found){
        b = b + 1;
        a = (500000 - (1000*b)) / (1000 - b);

        if (a + b + sqrt((a*a) + (b*b)) == 1000) {
            found = 1;
        }
    }

    ans = a*b*(sqrt((a*a) + (b*b)));

    return ans;
}

int main(){
    int ans = getPythagTripletsSum1000();
    printf("%d \n", ans);
}
