#include<iostream>
using namespace std;

int main()
{
    int total = 0;
    int price;
    cout << "請輸入藥價，輸入完畢請按0\n";
    do {
        cin >> price;
        if(price!=0) {
            cout << "請繼續輸入藥價，輸入完畢請按0\n";
        }
        total+=price;
    } while(price!=0);

    if(total<100) {
        cout << 130;
    } else if(total>=100 && total<200) {
        cout << 150;
    } else if(total>=200 && total<300) {
        cout << 170;
    } else if(total>=300 && total<400) {
        cout << 190;
    } else if(total>=400 && total<500) {
        cout << 210;
    } else if(total>=500 && total<600) {
        cout << 230;
    } else if(total>=600 && total<700) {
        cout << 250;
    } else if(total>=700 && total<800) {
        cout << 270;
    } else if(total>=800 && total<900) {
        cout << 290;
    } else if(total>=900 && total<1000) {
        cout << 310;
    } else {
        cout << 330;
    }
    return 0;
}