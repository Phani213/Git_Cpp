#include <iostream>
using namespace std;

class Jobs
{
    protected:
        int Id;
    public:
        void Set_Id(int a){
            Id = a;
        }
        void Print_Id(){
            cout<<"Your Id is "<<Id<<endl;
        }
};
class Part_Time_Job : virtual public Jobs
{
    protected:
        float time, salary_hour,salary_P;
    public:
        void set_time_P(float x, float y){
            salary_hour = 17.02;
            time = x+(y*1/60);
            salary_P = time*salary_hour;
        }
        void Print_time_P(void){
            cout<<"Time Worked at Part time is: "<<time<<" h.m"<<endl
            <<"your salary for part timr job is "<<salary_P<<endl
            <<"your salary for part timr job after taxes is "<<(salary_P-(salary_P*0.17))<<endl;
        }
};
class Mini_Job : public virtual Jobs
{
    protected:
        float time_M, salary_hour_M,salary_M;
    public:
        void set_time_M(float x, float y){
            salary_hour_M = 12.83;
            time_M = x+(y*1/60);
            salary_M = time_M*salary_hour_M;
        }
        void Print_time_M(void){
            cout<<"Time Worked at mini job is: "<<time_M<<" h.m"<<endl
            <<"your salary for part time job is "<<salary_M<<endl;
        }
};
class Gehalt: public Part_Time_Job, public Mini_Job{
    private:
        float Gehalt;
    public:
        
        void print_Gehalt(void){
            Gehalt = (salary_P-(salary_P*0.17))+salary_M;
            Print_Id();
            Print_time_P();
            Print_time_M();
            cout<<"Total Salary is "<<Gehalt<<"€"<<endl;
        }
};

int main(){
    Gehalt Phani;
    int h_p,m_p;
    int h_m,m_m;
    cout<<"Enter part time Hours and Minutes :"<<endl;
    cin>>h_p>>m_p;
    cout<<"Enter mini time Hours and Minutes :"<<endl;
    cin>>h_m>>m_m;
    Phani.Set_Id(789);
    Phani.set_time_P(h_p,m_p);
    Phani.set_time_M(h_m,m_m);
    Phani.print_Gehalt();
    return 0;
}