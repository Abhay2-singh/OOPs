#include<iostream>
using namespace std;
class vikash{
    public:
    int health;
    public :
    char level;
    vikash(){ 
        cout<<endl; //default constructor
        cout<<endl; //default constructor
        cout<<"\nhello vikash what are doing";
    }
    //paramterized constructor
    vikash(int health){
        this->health=health;
    }
    vikash(int health,char level){
        this->health=health;
        this->level=level;
    }
    void print(){
        cout<<"health is="<<this->health;
        cout<<"level us="<<this->level;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
            }
};
int main(){
    vikash v1(70,'c');
    v1.print();
    cout<<endl;
    cout<<endl;
    
    vikash s(v1);
    s.print();


}