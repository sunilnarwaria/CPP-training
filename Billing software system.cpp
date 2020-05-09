
 #include<iostream>
 using namespace std;

class Billingsystem
{
    private:
        char name[20];
        char number[17];
        char address[50];
        char DOB[20];

        char* readmobilenumber(char msg[]){
            cout<<msg;
              char BillingNumber[17];
              cin>>BillingNumber;
              return BillingNumber;

        }
        char* readchar(char msg[]){
              cout<<msg;
                char Billingaddress[50];
                cin>>Billingaddress;
                return Billingaddress;
        }
        char* readName(char msg[]){
              cout<<msg;
             char BillingName[20];
             cin>>BillingName;
              return BillingName;
        }
         char* dateofbirth(char msg[]){
              cout<<msg;
             char BillingsystemDOB[20];
             cin>>BillingsystemDOB;
              return BillingsystemDOB;
        }
    public:

        void getData(){
            char* number=readmobilenumber("Please enter the mobile Number : ");
            char* name= readName("Please Enter The Name :");
            char* DOB= dateofbirth("Please enter the DOB :");
            char* address= readchar("Please enter the address :");
        }
        void showDetail(){
            cout<<"The Details are as follows :"<<endl;
            cout<<"The Mobile Number is : "<<number<<endl;
            cout<<"The Name is : "<<name<<endl;
            cout<<"The DOB is :"<<DOB<<endl;
              cout<<"The address is : "<<address;
        }
};

int main()
{
    Billingsystem myBillingsystem;
    myBillingsystem.getData();
    myBillingsystem.showDetail();
}
