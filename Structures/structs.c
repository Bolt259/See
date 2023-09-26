# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <time.h>
# include <stdlib.h>

struct Point {
    int x, y
};

typedef struct AccountHolder {
    int accountNumber;
    int balance;
    int dob;            // date of birth
    char name[100];
    bool registered;
    struct Point location;
} AccountHolder ;

void printAccountHolders(AccountHolder accountHolders[], int size) {
    printf("\nNumber of Account Holders: %i\n", size);
    for (int i = 0; i < size; i++) {
        printf("\nAccount Number: %i\nBalance (in U.S. dollars): $%i\nDate of Birth: %i\nName: %s\nRegistration Status: %s\nLocation: (Lat: %i Long: %i)\n\n", 
        accountHolders[i].accountNumber, accountHolders[i].balance, accountHolders[i].dob, accountHolders[i].name, accountHolders[i].registered ? "true" : "false", 
        accountHolders[i].location.x, accountHolders[i].location.y);
    }

}

// Constructor for Account Holder:
AccountHolder createAccountHolder(
    int accountNumber,
    int balance,
    int dob,
    char name[],
    bool registered
) {
    AccountHolder accHolder;

    accHolder.accountNumber = accountNumber;
    accHolder.balance = balance;
    accHolder.dob = dob;

    // Deal with if name is left un-entered:
    if (name == NULL) {
        strcpy(accHolder.name, "ERROR: Account name has not been added");
    } else {
        strcpy(accHolder.name, name);
    }
    //

    accHolder.registered = registered;
    
    srand(time(NULL));
    accHolder.location.x = rand() % 10;
    accHolder.location.y = rand() % 10;

    return accHolder;
}

int main() {
    AccountHolder accountHolders[4] = {
        {107685390, 2100000, 211292, "Thomas Brown Liverspoon", true, {24, 37}},
        {104689791, 100070423, 41684, "Nganyu Oka Huetayueua", true, {54, 27}},
        {268939370, 4300509, 120472, "Chizqe Noran Wettislue", true, {42, 33}},
    };

    // make new Account Holder with function:
    accountHolders[3] = createAccountHolder(287326580, 410239, 60909, "Molizery Cottingham Westburshure", false);

    int size = sizeof(accountHolders) / sizeof(accountHolders[0]);

    // Another way of doing it
    // struct AccountHolder Tom = {1076852390, 2100000, 211292, "ThomasBrownLiverspoon", true, {24, 37}};
    // struct AccountHolder Nganyu = {5046892791, 100070423, 4684, "NganyuOkaHuetayueua", true, {54, 27}};
    // struct AccountHolder Chizqe = {2689399370, 4300509, 120472, "ChizqeNoranWettislue", true, {42, 33}};

    printAccountHolders(accountHolders, size);
}