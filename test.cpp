#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int max_zn_del_na_2 = 0;
    while(x != 0){
        if(x % 2 == 0){
            static int last_max_zn_del_na_2 = x;
            max_zn_del_na_2 = max(last_max_zn_del_na_2, x);
            last_max_zn_del_na_2 = max_zn_del_na_2;
        }
        cin >> x;
    }
    if(max_zn_del_na_2 > 0){
        cout << max_zn_del_na_2;
    } else {
        cout << "NO";
    }
}