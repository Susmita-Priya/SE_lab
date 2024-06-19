// Name : Susmita Rani Saha
// ID : B-180305047

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double EI,EO,EQ,ILF,EIF,effort,TD,UD,cost;
    cout<<"1. The number of user inputs = ";
    cin>>EI;
    cout<<"2. The number of user outputs = ";
    cin>>EO;
    cout<<"3. The number of inquiries = ";
    cin>>EQ;
    cout<<"4. The number of files = ";
    cin>>ILF;
    cout<<"5. The number of external interfaces = ";
    cin>>EIF;
    cout<<"6. Effort(p-m) = ";
    cin>>effort;
    cout<<"7. The number of technical documents(pages) = ";
    cin>>TD;
    cout<<"8. The number of user documents(pages) = ";
    cin>>UD;
    cout<<"9. Cost($ per month) = ";
    cin>>cost;

    double weight[]={4,4,6,10,5};
    double count_total= ((EI*weight[0])+(EO*weight[1])+(EQ*weight[2])+(ILF*weight[3])+(EIF*weight[4]));

    cout<<"Various processing complexity factors are (14 values) : ";
    double sum_function=0.0,f=0.0;
    for(int i=0;i<14;i++)
    {
        cin>>f;
        sum_function = sum_function+f;
    }
    cout<<"Sum of all functions = "<<sum_function<<endl;

    double FP,productivity,documentation,page_of_doc,cost_per_function;

    FP = count_total * (0.65+(0.01*sum_function));
    cout<<"Function point = "<<FP<<endl;

    productivity = FP/effort;
    cout<<"Productivity = "<<productivity<<endl;

    page_of_doc=TD+UD;
    documentation = page_of_doc/FP;
    cout<<"Documentation = "<<documentation<<endl;

    cost_per_function = cost/productivity;
    cout<<"Cost per function($) = "<<cost_per_function<<endl;

}

/*
OUTPUT :
1. The number of user inputs = 24
2. The number of user outputs = 46
3. The number of inquiries = 8
4. The number of files = 4
5. The number of external interfaces = 2
6. Effort(p-m) = 36.9
7. The number of technical documents(pages) = 265
8. The number of user documents(pages) = 122
9. Cost($ per month) = 7744
Various processing complexity factors are (14 values) : 4 1 0 3 3 5 4 4 3 3 2 2 4 5
Sum of all functions = 43
Function point = 408.24
Productivity = 11.0634
Documentation = 0.947972
Cost per function($) = 699.965
*/
