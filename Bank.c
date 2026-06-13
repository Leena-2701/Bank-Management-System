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
