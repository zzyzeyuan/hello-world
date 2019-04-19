#include<iostream>
//最大公约数A题
using namespace std;
class Number{
private:
    int no;
public:
    Number(int x){
        no=x;
    }
    void show(){
        cout<<no<< endl;
    }
    int maxDivisor(Number no2){
        int a;
        int b;
        a=max(no,no2.no);b=min(no,no2.no);
        while(b>0){
            a=a%b;b=b^a;
            a=a^b;b=b^a;
        }
        return a;
    }
};

int main() {

    int n, n1, n2;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        cin >> n1 >> n2;

        Number no1(n1), no2(n2);

        Number no3 = no1.maxDivisor(no2);  //最大公约数

        no3.show();

    }

}