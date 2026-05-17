#include<iostream>
using namespace std;

class BankAccount {
    // data members
    private:
        float balance;

    // member functions
    public:
        void deposit(float amount){
            balance += amount;
        }

        void withdraw(float amount){
            if(amount >= balance){
                balance -= amount;
            }else
            {
                cout << "Not enough money in the account!" << endl;
            }
            // បើលុយគ្រប់ -> អាចដកបាន
            // បើលុយមិនគ្រប់ -> បង្ហាញសារៈ "Not enough money in the account!" 
        }
        void showBalance(){
            cout << "Balance = " << balance << endl; 
        }
};

int main()
{
    cout<<"==== BANK ACCOUNT ===="<<endl;
    
    BankAccount acc;

    acc.deposit(1000);
    acc.withdraw(500);
    acc.showBalance();


    return 0;
}