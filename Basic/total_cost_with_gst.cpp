#include<iostream>
using namespace std;

int main(){
    float pencost;
    float pencilcost;
    float erasercost;

    cin>>pencost;
    cin>>pencilcost;
    cin>>erasercost;

    float total_cost = pencost + pencilcost + erasercost;
    cout<<"Total = "<<total_cost<<endl;

    cout<<"Total with GST = "<< (total_cost + (0.18 * total_cost))<<endl;
    return 0;
}