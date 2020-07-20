#include <iostream>
using namespace std;

class Wallet {
public:
    int nrOfDollars;
    
    Wallet() = default; 

    Wallet(Wallet &&other) {
        this->nrOfDollars = other.nrOfDollars;
        other.nrOfDollars = 0;
    }
};
int main()
{
    Wallet a;
    a.nrOfDollars = 1;
    Wallet b (std::move(a)); 
    cout << a.nrOfDollars << endl; //0
    cout << b.nrOfDollars << endl; //1
}
