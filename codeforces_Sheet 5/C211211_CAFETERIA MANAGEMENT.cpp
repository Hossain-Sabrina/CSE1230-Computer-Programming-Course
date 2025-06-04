//IIUC CAFETERIA BY C211211
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;

//Global Variable
float amount=0;		//To calculate the total amount.
int size=0;
int i=0;		//Total Items Added to Order

//Structure to store the ordered items & generate bill
struct Items
{
    int id;
    char item[20];
    int qty;
    float rate;
    float amt;
} I[20];

//Function Prototyping
void drawLine();	//Function to drawLines for presentaiton
void Header();		//Display Heading in Invoice
void menu();		//Displaying Menu of Items
void showBill();	//Displaying Invoice

void drawLine()
{
    for(int i=1; i<70; i++)
        cout<<"=";
    cout<<endl;
}

void Header()
{
    cout<<setw(10)<<"I.D."
        <<setw(20)<<"Item Name"
        <<setw(10)<<"Qty."
        <<setw(10)<<"Rate"
        <<setw(10)<<"Amount"
        <<endl;
}

void showBill()
{
    system("cls");
    drawLine();
    cout<<"\t\t\t\tTOTAL BILL\n";
    drawLine();
    Header();
    drawLine();
    for(int i=0; i<size; i++)
    {
        cout<<setw(10)<<I[i].id
            <<setw(20)<<I[i].item
            <<setw(10)<<I[i].qty
            <<setw(10)<<I[i].rate
            <<setw(10)<<I[i].amt
            <<endl;
    }
    cout<<endl;
    cout<<setw(50)<<"Total Amount : "
        <<setw(10)<<amount<<"Taka"<<endl;
    drawLine();
    cout<<"\n\t...Thank you for purchasing from IIUC CAFETERIA...\n\n";

}

void menu()
{
    system("cls");
    drawLine();
    cout<<"\t\tWELCOME TO IIUC CAFETERIA\n";
    drawLine();
    cout<<"Items Available\t\tRate\n";
    drawLine();
    cout<<"0. Exit\n";
    cout<<"1. Coffee\t\t50.00\n";
    cout<<"2. Tea\t\t\t30.00\n";
    cout<<"3. Soda\t\t\t20.00\n";
    cout<<"4. Juice\t\t15.00\n";
    cout<<"5. Chicken Khichuri\t60.00\n";
    cout<<"6. Biscut\t\t15.00\n";
    cout<<"\nEnter your choice: ";
}

int main()
{
    int ch, i=0, qty;
    char choice='n';
start:
    do
    {
        system("cls");
        menu();
        cin>>ch;
        switch(ch)
        {
        case 0:
            break;
        case 1:
            cout<<"\nNo. of Coffees: ";
            cin>>I[i].qty;
            I[i].id=i+1;
            strcpy(I[i].item,"Coffee");
            I[i].rate=50;
            I[i].amt=I[i].qty*I[i].rate;
            amount+=I[i].amt;
            i++;
            size++;
            break;

        case 2:
            cout<<"\nNo. of Teas: ";
            cin>>I[i].qty;
            I[i].id=i+1;
            strcpy(I[i].item,"Tea");
            I[i].rate=30;
            I[i].amt=I[i].qty*I[i].rate;
            amount+=I[i].amt;
            i++;
            size++;
            break;

        case 3:
            cout<<"\nNo. of Sodas: ";
            cin>>I[i].qty;
            I[i].id=i+1;
            strcpy(I[i].item,"Soda");
            I[i].rate=20;
            I[i].amt=I[i].qty*I[i].rate;
            amount+=I[i].amt;
            i++;
            size++;
            break;

        case 4:
            cout<<"\nNo. of Juices: ";
            cin>>I[i].qty;
            I[i].id=i+1;
            strcpy(I[i].item,"Juice");
            I[i].rate=15;
            I[i].amt=I[i].qty*I[i].rate;
            amount+=I[i].amt;
            i++;
            size++;
            break;

        case 5:
            cout<<"\nNo. of Chicken Khichuri's: ";
            cin>>I[i].qty;
            I[i].id=i+1;
            strcpy(I[i].item,"Chicken Khichuri");
            I[i].rate=60;
            I[i].amt=I[i].qty*I[i].rate;
            amount+=I[i].amt;
            i++;
           size++;
            break;
        case 6:
            cout<<"\nNo. of Biscuts : ";
            cin>>I[i].qty;
            I[i].id=i+1;
            strcpy(I[i].item,"Biscut");
            I[i].rate=15;
            I[i].amt=I[i].qty*I[i].rate;
            amount+=I[i].amt;
            i++;
            size++;
            break;
        default:
            break;
        }
        cout<<"\nDo You Want to Add More (Y/N)? ";
        cin>>choice;

        if(choice=='Y'||choice=='y')
            goto start;
        else if(choice!='Y'||choice!='y')
            ch=0;

    }
    while(ch!=0);

    if((choice!='y'||choice!='Y') && amount>0)
        showBill();
    amount=0;
    size=0;
    int ax;
    cout<<"\n\n press 1 for new order ";
    cin>>ax;
    if(ax==1)
    {
        main();
        system("cls");
    }
    else
        cout<<"\nNo Order Placed Yet...\n";

    system("pause");
}
