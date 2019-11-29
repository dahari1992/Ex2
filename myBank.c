#include <stdio.h>
#include "myBank.h"


static double bank[ACCOUNTBANK_SIZE][ACCOUNTBANK_INFO]={{0.0}};


int account_help(){
    
int number_account;

do { 
printf("\nPlease enter a Number Acount : ");
scanf("%d",&number_account);
}while(number_account<FIX || number_account>950);

return number_account;
}

void  o (){

    int temp=-1;

for (int i = 0; i < ACCOUNTBANK_SIZE; i++)
{
if(temp==-1){
   if(bank[i][0]==CLOSE){

        temp=i;
       bank[i][0]=OPEN;
       bank[i][1]=0.0;

       
double amount=0.0;
       do {
        printf("\nAmount?");
       scanf("%lf",&amount);

       }while(amount<=0);

       bank[i][1]=amount;
       printf("\nWelcom to th bank ,Your account is %d your amount is : %.2f",i+FIX,bank[i][1]);
   } 
}
}



if(temp==-1){

    printf("\nSorry, all acount occuped!");
}

}

void b(){

int number_account=account_help();


if(bank[number_account-FIX][0]==OPEN){
    printf("\nA Account %d have : %.2f",number_account,bank[number_account-FIX][1]);
}else
{
    printf("\nSorry , your accout is not accessible");
}



}


void d(){

int number_account=account_help();

if(bank[number_account-FIX][0]==OPEN){
    double new_amount=0.0;
    do
    {
        printf("\nPlease enter amount :");
        scanf("%lf",&new_amount);
    } while (new_amount<0);

   bank[number_account-FIX][1]=bank[number_account-FIX][1]+new_amount;
    
    printf("\nA new sold of account %d is : %.2f",number_account,bank[number_account-FIX][1]);



}else
{
    printf("\nSorry , your accout is not accessible");
}




}


void w(){


int number_account=account_help();

if(bank[number_account-FIX][0]==OPEN){
    double new_amount=0.0;
    do
    {
        printf("\nPlease enter amount :");
        scanf("%lf",&new_amount);
    } while (new_amount<0);

if(bank[number_account-FIX][1]-new_amount>=0){


   bank[number_account-FIX][1]=bank[number_account-FIX][1]-new_amount;
    
    printf("\nA new sold of account %d is : %.2f",number_account,bank[number_account-FIX][1]);

}else
{
    printf("\nSorry you dont have enoght money ");
}



}else
{
    printf("\nSorry , your accout is not accessible");
}




}

void c(){

    int number_account=account_help();

if(bank[number_account-FIX][0]==OPEN){

    bank[number_account-FIX][0]=CLOSE;
    bank[number_account-FIX][1]=0.0;
    printf("\nYour acount %d is succesfull closed ",number_account);
}else
{
    printf("\nSorry , your accout is not accessible");
}

}


void i(){

double interest_rate=0;
do
{
    printf("\nPlease enter Interest rate");
    scanf("%lf",&interest_rate);
} while (interest_rate<0 || interest_rate>100);


    for (int i = 0; i < ACCOUNTBANK_SIZE; i++)
    {

        if(bank[i][0]==OPEN){
            double account_rate=bank[i][1]*(interest_rate/100);
            bank[i][1]=bank[i][1]+account_rate;
        }
    }

    printf("\nSuccefull add intereast rate");
    
}
void p(){



    for (int i = 0; i <ACCOUNTBANK_SIZE; i++)
    {
        if(bank[i][0]==OPEN){

            printf("\nA Account %d have: %.2f",i+FIX,bank[i][1]);
        }
    }
    
}
void e(){


    for (int i = 0; i <ACCOUNTBANK_SIZE; i++)
    {
        if(bank[i][0]==OPEN){
bank[i][0]=CLOSE;
bank[i][1]=0.0;
            printf("\nA Account %d is now closed",i+FIX);
        }
    }
    
printf("\nAll accounts is Succesfull close \n ");


}