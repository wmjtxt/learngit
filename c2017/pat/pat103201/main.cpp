//#include <iostream>
#include <stdio.h>
#include <iomanip>
//#include <algorithm>
//using namespace std;

int main()
{
    int n;
    //cin >> n;
    scanf("%d",&n);
    int school[n], score[n], result[n] = {0};
    int i;
    int max_school = 0, max_result = 0;
    for(i = 0; i < n; i++){
        scanf("%d%d",&school[i],&score[i]);//cin >> school[i] >> score[i];
        result[school[i]] += score[i];
        if(result[school[i]] > max_result){
            max_result = result[school[i]];
            max_school = school[i];
        }
    }
    printf("%d %d",max_school,max_result);
    return 0;
}
