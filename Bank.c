/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct BankAccount
{
    char name[50];
    int age;
    char aadhaar[20];
    char mobile[15];
    char address[100];

    int accNo;
    int pin;
    float balance;
};

int isNumber(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(!isdigit(str[i]))
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    struct BankAccount user;

    int enteredOTP;
    int systemOTP = 1234;

    int enteredPin;
    int choice;
    float amount;

    printf("=====================================\n");
    printf("      BANK ACCOUNT OPENING FORM\n");
    printf("=====================================\n");

    // NAME
    printf("\nEnter Customer Name: ");
    scanf(" %[^\n]", user.name);

    // AGE
    while(1)
    {
        printf("Enter Age: ");
        scanf("%d", &user.age);

        if(user.age >= 18)
        {
            break;
        }
        else
        {
            printf("Age must be 18 or above!\n");
        }
    }

    // AADHAAR VALIDATION
    while(1)
    {
        printf("Enter Aadhaar Number (12 digits): ");
        scanf("%s", user.aadhaar);

        if(strlen(user.aadhaar) == 12 && isNumber(user.aadhaar))
        {
            break;
        }
        else
        {
            printf("Invalid Aadhaar Number!\n");
            printf("Aadhaar must contain exactly 12 digits.\n");
        }
    }

    // MOBILE VALIDATION
    while(1)
    {
        printf("Enter Mobile Number (10 digits): ");
        scanf("%s", user.mobile);

        if(strlen(user.mobile) == 10 && isNumber(user.mobile))
        {
            break;
        }
        else
        {
            printf("Invalid Mobile Number!\n");
            printf("Mobile number must contain exactly 10 digits.\n");
        }
    }

    // ADDRESS
    printf("Enter Address: ");
    scanf(" %[^\n]", user.address);

    // OTP VERIFICATION
    printf("\n=====================================\n");
    printf("        KYC VERIFICATION\n");
    printf("=====================================\n");

    printf("OTP Sent to Mobile Number...\n");
    printf("Sample OTP: 1234\n");

    printf("Enter OTP: ");
    scanf("%d", &enteredOTP);

    if(enteredOTP != systemOTP)
    {
        printf("Verification Failed!\n");
        return 0;
    }

    printf("KYC Verification Successful!\n");

    // ACCOUNT CREATION
    printf("\n=====================================\n");
    printf("        ACCOUNT CREATION\n");
    printf("=====================================\n");

    printf("Create Account Number: ");
    scanf("%d", &user.accNo);

    // PIN VALIDATION
    while(1)
    {
        printf("Set 4-Digit ATM PIN: ");
        scanf("%d", &user.pin);

        if(user.pin >= 1000 && user.pin <= 9999)
        {
            break;
        }
        else
        {
            printf("PIN must be exactly 4 digits!\n");
        }
    }

    // INITIAL DEPOSIT
    while(1)
    {
        printf("Enter Initial Deposit Amount: ");
        scanf("%f", &user.balance);

        if(user.balance >= 500)
        {
            break;
        }
        else
        {
            printf("Minimum deposit is 500!\n");
        }
    }

    printf("\nAccount Created Successfully!\n");

    // LOGIN
    printf("\n=====================================\n");
    printf("            ATM LOGIN\n");
    printf("=====================================\n");

    printf("Enter ATM PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin != user.pin)
    {
        printf("Incorrect ATM PIN!\n");
        return 0;
    }

    printf("Login Successful!\n");

    // BANK MENU
    while(1)
    {
        printf("\n=====================================\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");
        printf("=====================================\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    user.balance += amount;
                    printf("Amount Deposited Successfully!\n");
                }
                else
                {
                    printf("Invalid Amount!\n");
                }

                break;

            case 2:

                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if(amount <= 0)
                {
                    printf("Invalid Amount!\n");
                }
                else if(amount > user.balance)
                {
                    printf("Insufficient Balance!\n");
                }
                else
                {
                    user.balance -= amount;
                    printf("Withdrawal Successful!\n");
                }

                break;

            case 3:

                printf("Current Balance = %.2f\n", user.balance);

                break;

            case 4:

                printf("\n========== ACCOUNT DETAILS ==========\n");

                printf("Customer Name  : %s\n", user.name);
                printf("Age            : %d\n", user.age);
                printf("Aadhaar Number : %s\n", user.aadhaar);
                printf("Mobile Number  : %s\n", user.mobile);
                printf("Address        : %s\n", user.address);
                printf("Account Number : %d\n", user.accNo);
                printf("Balance        : %.2f\n", user.balance);

                break;

            case 5:

                printf("Thank You For Using Our Bank!\n");

                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
*/
#include <stdio.h>
#include <string.h>

struct Account
{
    char username[30];
    char password[30];
    char name[50];
    long accountNo;
    char gender[10];
    char dob[20];
    char email[50];
    char phone[15];
    float balance;
};

int main()
{
    struct Account user;
    int choice;
    int registered = 0;
    int loggedIn = 0;

    char uname[30], pass[30];
    float amount;

    while(1)
    {
        printf("\n===== MAIN MENU =====\n");
        printf("1. Registration\n");
        printf("2. Login\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\n----- REGISTRATION -----\n");

                printf("Enter Username: ");
                scanf("%s",user.username);

                printf("Create Password: ");
                scanf("%s",user.password);

                printf("Enter Account Number: ");
                scanf("%ld",&user.accountNo);

                printf("Enter Name: ");
                scanf("%s",user.name);

                printf("Enter Gender: ");
                scanf("%s",user.gender);

                printf("Enter Date of Birth: ");
                scanf("%s",user.dob);

                printf("Enter Email ID: ");
                scanf("%s",user.email);

                printf("Enter Phone Number: ");
                scanf("%s",user.phone);

                printf("Enter Initial Balance: ");
                scanf("%f",&user.balance);

                registered = 1;

                printf("\nRegistration Successful!\n");
                break;

            case 2:

                if(!registered)
                {
                    printf("Please Register First!\n");
                    break;
                }

                printf("\n----- LOGIN -----\n");

                printf("Enter Username: ");
                scanf("%s",uname);

                printf("Enter Password: ");
                scanf("%s",pass);

                if(strcmp(uname,user.username)==0 &&
                   strcmp(pass,user.password)==0)
                {
                    loggedIn = 1;
                    printf("Login Successful!\n");
                }
                else
                {
                    printf("Invalid Username or Password!\n");
                }

                break;

            case 3:

                if(!loggedIn)
                {
                    printf("Please Login First!\n");
                    break;
                }

                printf("Current Balance = %.2f\n",user.balance);

                printf("Enter Deposit Amount: ");
                scanf("%f",&amount);

                if(amount > 0)
                {
                    user.balance += amount;
                    printf("Amount Deposited Successfully!\n");
                    printf("Updated Balance = %.2f\n",user.balance);
                }
                else
                {
                    printf("Invalid Amount!\n");
                }

                break;

            case 4:

                if(!loggedIn)
                {
                    printf("Please Login First!\n");
                    break;
                }

                printf("Current Balance = %.2f\n",user.balance);

                printf("Enter Withdrawal Amount: ");
                scanf("%f",&amount);

                if(amount <= user.balance)
                {
                    user.balance -= amount;
                    printf("Withdrawal Successful!\n");
                    printf("Remaining Balance = %.2f\n",user.balance);
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }

                break;

            case 5:

                if(!loggedIn)
                {
                    printf("Please Login First!\n");
                    break;
                }

                printf("Available Balance = %.2f\n",user.balance);

                break;

            case 6:

                printf("Thank You!\n");
                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
