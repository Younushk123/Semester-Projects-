#include<iostream>
#include<string>
using namespace std;
//class Staff
class Staff{
    public:
    Staff(){
        cout<<"The staff of that company"<<endl;
    }
};
//inheritance
class Manager: public Staff{
    private:
    int id;
    int salary;
    public:
    //polymorphism

    void name(){
        cout<<"Albert"<<endl;
    }

      //Encapsulation
    void setSalary(int s){
        salary=s;
        cout<<"salary :"<<s<<endl;
    }
    int getSalary(){
        return salary;
    }

    //Abstraction
    virtual void Idno(int x){
        id=x;
        cout<<"ID no:"<<x<<endl;
    }
    
};
   //Class Operation Manager
   //inheritance
    class Ops_Mgr: public Manager{
        public:
        void Idno(int x) override{
            cout<<"ID no"<<x<<endl;
        }
        //polymorphism
        void name(){
            cout<<"Albert is thr Ops_mgr of that comapany"<<endl;

        }
    };
    int main(){
        
        Ops_Mgr op1;
        op1.name();
        Manager m1;
        m1.setSalary(50000);
        cout<<m1.getSalary()<<endl;
        m1.Idno(123555);
        return 0;
    }