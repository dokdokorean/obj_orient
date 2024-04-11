#include <iostream>
using namespace std;

class FruitSeller{
    private:
        int apple_price;
        int numofapple;
        int mymoney;

    public:
        void initMembers(int price,int num, int money){
            apple_price = price;
            numofapple=num;
            mymoney=money;
        }
        int salesapple(int money){
            if(money < 0){
                cout<<"돈이 없어요ㅠ";
                return 0;
            }
            int num = money/apple_price;
            numofapple -= num;
            mymoney+=money;
            return num;
        }
        void showsalesresults()const{
            cout << "남은 사과" << numofapple << endl;
            cout << "판매수익"<<mymoney<<endl;
        }
};
class FruitBuyer
{
private:
    int mymoney;
    int numofapples;
public:
    void initmembers(int money){
        mymoney=money;
        numofapples=0;
    }
    void buyapples(FruitSeller&seller,int money){
        if (money <0){
            cout << "돈이 업서요";
            return;
        }
        numofapples+=seller.salesapple(money);
        mymoney-=money;
    }
    void showbuyresult()const{
        cout<< "현재 잔액"<<mymoney<<endl;
        cout<<"사과갯수:"<< numofapples<<endl;
    }
};

int main(){
    FruitSeller seller;
    seller.initMembers(1000,20,0);

    FruitBuyer buyer;
    buyer.initmembers(5000);

    buyer.buyapples(seller,2000);

    cout<<"과일판매자 현황 : "<< endl;
    seller.showsalesresults();

    cout << "과일구매자 현황 : " << endl;
    buyer.showbuyresult();
}
