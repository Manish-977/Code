#include<iostream>
using namespace std;
class customer
{
  private:
  char name[25];
  char address[25];
  char city[25];
  char state[25];
  double salary;
  double hra;
  double da;
  double grass;

   public:
   void input_data();
   void output_data();
   void cal_da();
   void cal_hra();
   void cal_grass();
};
  void customer ::cal_da()
  {
    cout<<"\nda is= "<<1.2*salary;
  }
    void customer ::cal_hra()
  {
    cout<<"\nhra is= "<<0.15*salary;
  }
    void customer ::cal_grass()
  {
    cout<<"\ngrass is= "<<salary+hra+da;
  }
    void customer ::input_data()
   {
    cout<<"enter a name =";
    cin>>name;
    cout<<"enter a address=";
    cin>>address;
    cout<<"enter a city=";
    cin>>city;
    cout<<"enter a state=";
    cin>>state;
    cout<<"enter a salary=";
    cin>>salary;
    
   }
void customer ::output_data()
{
    cout<<"name= "<<name<<endl;
    cout<<"address= "<<address<<endl;
    cout<<"city= "<<city<<endl;
    cout<<"state= "<<state<<endl;
    cout<<"salary= "<<salary<<endl;
}
int main()
{
    customer aa;
    aa.input_data();
    aa.output_data();
    aa.cal_da();
    aa.cal_hra();
    aa.cal_grass();
    return 0;
}
   
