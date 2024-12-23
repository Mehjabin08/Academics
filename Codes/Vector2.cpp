#include<iostream>
#include<vector>
using namespace std;
//function to print vector
 void printVector(vector<int> P)
    {

        cout<<"|";


        for(int i=0;i<P.size();i++)
        {
            cout<<P[i]<<"|";
        }
    }



int main(){
    vector<int> M={999,99999,9980,0};
    M.insert(M.begin(),8);

        printVector(M);
    M.insert(M.begin()+1,9);
    cout<<M[1]<<endl;
    M.erase(M.begin());
    cout<<M[0]<<endl;
    cout<<"-----------------"<<endl;



    for(int i=0;i<M.size();i++){
        cout<<M[i]<<endl;
    }
    M.insert(M.begin(),11);
    for(auto itr=M.begin();itr !=M.end(); itr++){
    cout<< *itr <<endl;}










}
