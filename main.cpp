#include <bits/stdc++.h>
using namespace std;
vector<string>names;
void start(){cout<<"[user]\n\n";}
void start_buffering(){string s;while(getline(cin,s))names.push_back(s);}

void start_reading1(){
    for(int i = 1 ; i <= 36; i++){
        cout<<"usernumber="<<i<<endl;
        cout<<"usersitenumber=1\n";
        i < 10? cout<<"username=team00"<<i<<endl : cout<<"username=team0"<<i<<endl;
        cout<<"userfullname="<<names[i-1]<<endl;
        cout<<"userdesc="<<names[i-1]<<endl;
        cout<<"usertype=team\n";
        i < 10? cout<<"userpassword=team00"<<i<<endl : cout<<"userpassword=team0"<<i<<endl;
        cout<<"userip=\n";
        cout<<"userenabled=t\n";
        cout<<endl;
    }
}

void start_reading2(){
    for(int i = 1 ; i <= 36; i++){
        cout<<"usernumber="<<i<<endl;
        cout<<"usersitenumber=1\n";
        i < 10? cout<<"username=user"<<i<<endl : cout<<"username=user"<<i<<endl;
        cout<<"userfullname="<<names[i-1]<<endl;
        cout<<"userdesc="<<names[i-1]<<endl;
        cout<<"usertype=team\n";
        i < 10? cout<<"userpassword=user0"<<i<<endl : cout<<"userpassword=user"<<i<<endl;
        cout<<"userip=\n";
        cout<<"userenabled=t\n";
        cout<<endl;
    }
}

void start_reading3(){
    for(int i = 1 ; i <= 30; i++){
        cout<<"usernumber="<<i<<endl;
        cout<<"usersitenumber=1\n";
        i < 10? cout<<"username=user"<<i<<endl : cout<<"username=user"<<i<<endl;
        cout<<"userfullname="<<endl;
        cout<<"userdesc="<<endl;
        cout<<"usertype=team\n";
        i < 10? cout<<"userpassword=user0"<<i<<endl : cout<<"userpassword=user"<<i<<endl;
        cout<<"userip=\n";
        cout<<"userenabled=t\n";
        cout<<endl;
    }
}


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output1", "w", stdout);
    start();
    start_buffering();
    start_reading1();
    return 0;
}
