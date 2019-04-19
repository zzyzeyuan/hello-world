#include<iostream>
//C题进制转换
using namespace std;
int a[50],ans=0;
class Number{
private:
    int n;
    int count=0;
public:
    Number(int x){
        n=x;
    }
    Number converto(int y){
        ans=0;
        while(n){
            count++;
            a[count] = n%y;
            n = n/y;
        }
        for(int i=count;i>0;i--){
            ans=ans*10+a[i];}
    }
    void show(){
        cout<<ans<<endl;
    }
};


int main() {

    int n, n1, n2;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        cin >> n1 >> n2;

        Number no1(n1);     //n1是10进制正整数

        Number no3 = no1.converto(n2);  //no3是n2进制的正整数

        no3.show();     //输出结果

    }

}