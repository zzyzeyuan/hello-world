#include<iostream>
//B题韩信点兵
using namespace std;
class HanXin{
private:
    int n1;
    int n2;
    int n3;
public:
    void line3(int n){
        n1= n;
    }
    void line5(int n){
        n2= n;
    }
    void line7(int n){
        n3= n;
    }
    void showMany(){
        int i;
        bool flag=false;
        for(i=10;i<=100;i++){
            if(i%3==n1&&i%5==n2&&i%7==n3){
                cout<<i<<endl;
                flag = true ;
                break;
            }
        }
        if(!flag)cout<<"Impossible"<<endl;
    }

};
int main() {

    int n, n1, n2, n3;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        cin >> n1 >> n2 >> n3;

        HanXin hx ;  //韩信

        hx.line3(n1);  //3人一排

        hx.line5(n2);   //5人一排

        hx.line7(n3);   //7人一排

        hx.showMany();

    }

}