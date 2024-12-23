#include<iostream>
#include<vector>
using namespace std;

 void printVector(vector<int> P)
    {

        cout<<"|";


        for(int i=0;i<P.size();i++)
        {
            cout<<P[i]<<"|";
        }
    }

int main(){



    vector<int> V={10,20,30,40};
    cout<< V.front()<<endl;
    cout<< V.back()<<endl;
    cout<< V[2]<<endl;
    cout<< V.size()<<endl;
    V.push_back(90);

    V.pop_back();
    V.shrink_to_fit();
    cout<< V.size()<<endl;
    cout<< V.capacity()<<endl;
     cout<<"------------------"<<endl;




   printVector(V);


}
