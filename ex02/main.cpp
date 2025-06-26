#include <iostream>

#include"Account.hpp"

int main()
{
    std::cout << "--init--" << std::endl;
    Account acc0(1000);
    Account acc1(1000);
    Account acc2(1000);
    Account acc3(1000);
    std::cout << "--display status--" << std::endl;
    acc0.displayStatus();
    std::cout << "--makeDeposit--" << std::endl;
    acc0.makeDeposit(42);
    std::cout << "--display status--" << std::endl;
    acc0.displayStatus();
    std::cout << "--display Accounts Infos--" << std::endl;
    Account::displayAccountsInfos();
    return 0;
}
