#include<bits/stdc++.h>
using namespace std;

struct entirenode{
struct data{
    int id;
    int value;
    string owner_name;
    };
struct timestamp {
   int sec;
   int minte;
   int hour;
   int year;
   int month;
   int date;
}tm;
struct node{
    struct data d;
    struct node *left;
    struct node *right;
int nodeNumber;
string nodeID;
string refrenceNodeId;
string childRefrenceNodeId;
string genRefrenceNodeId;
};
struct node *gen=NULL;
}ob;
int main(){
    int ch;
    int nodeId=127;
    int ownerID=789;
    cout<<"input time- Hour, minute,second,date,month,year";
    cin>>ob.tm.hour>>ob.tm.minte>>ob.tm.sec>>ob.tm.date>>ob.tm.month>>ob.tm.year;
    cout<<"Time:"<<ob.tm.hour<<":"<<ob.tm.minte<<":"<<ob.tm.sec;
    cout<<"Date:"<<ob.tm.date<<"/"<<ob.tm.month<<"/"<<ob.tm.year;
    ostringstream str1;
    cout<<"CREATE GENESIS NODE\N";
    gen=(struct node*)malloc(sizeof(struct node));
    gen->nodeNumber=1;
    str1 << nodeId;
    string nodeID= str1.str();
    gen->nodeID=nodeID;
    nodeId++;
    gen->refrenceNodeId="NULL";
    int addrss=1500;
    str1<<addrss;
    string adress=str1.str();
    gen->genRefrenceNodeId=adress;

    gen->d.value=100;
    gen->d.id=ownerID;
    ownerID++;
    gen->d.owner_name="amarnancy";
    gen->left=NULL;
    gen->right=NULL;
    cout<<gen->nodeNumber<<" "<<gen->nodeID<<" "<<gen->refrenceNodeId<<" "<<gen->genRefrenceNodeId<<" "<<gen->d.id<<" "<<gen->d.owner_name;
    return 0;
    while(1){
        cin>>ch;
        switch(ch){
        case 1: cout<<"you have chosen to create genesis node\n";
                exit(1);
               
   case 2:
        cout<<"you have chosen to input a child node\n";
        int input;
        cin>>input;
        insert1(gen,input);
        break;
      

      }
} 

    

}