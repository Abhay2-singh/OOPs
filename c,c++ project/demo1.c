#include<iostream>
using namespace std;
int main()
{
    int finalresult=0;
    int playquiz(void);
    finalresult=playquiz();
    cout<<"your score is="<<finalresult;
    if(finalresult>=6)
    {
        cout<<"\nyou are pass="<<endl;
    }
    else{
        cout<<"\nyou are fail="<<endl;
    }
}
int playquiz()
{
    char c;
    char option;
    int score=0;
     cout<<"----------welcome to Quiz game-------------"<<endl;
    cout<<"----------please follow the instruction--------"<<endl;
    cout<<"step 1 : quiz game contain total 10 question"<<endl;\
    cout<<"step 2 : you will give 1 marks for each right answer"<<endl;
    cout<<"step 3 : there will be no negative marking"<<endl;
    cout<<"step 4: please press s to start the quiz"<<endl;
    cout<<"step 5: please select the option a,b,c,d"<<endl;
    cout<<"step 6: if your score is >=6,you will pass the quiz"<<endl;
    cin>>c;
    if(c=='s'|| c=='S')
    {
        cout<<"Q1. what is capital of india"<<endl;
        cout<<"(a) delhi (b) mp (c) up (d) mumbai"<<endl;
       cin>>option;
       if(option=='a' || option=='A')
       {
        score=score+1;
       }
       else{
        score=score+0;
       }
        cout<<"Q2. who is the prime minister of india"<<endl;
        cout<<"(a) modi ji (b) yogi (c) kamalnath (d) nitin"<<endl;
       cin>>option;
       if(option=='a' || option=='A')
       {
        score=score+1;
       }
       else{
        score=score+0;
       }
               cout<<"Q3. what is the national bird of india"<<endl;
        cout<<"(a) parrort (b) peacock (c)pigeon  (d) sparrow"<<endl;
       cin>>option;
       if(option=='b' || option=='B')
       {
        score=score+1;
       }
       else{
        score=score+0;
       }
               cout<<"Q4.what is the capital of mp"<<endl;
        cout<<"(a) bhind (b) indore (c) riva (d) bhopal"<<endl;
       cin>>option;
       if(option=='d' || option=='D')
       {
        score=score+1;
       }
       else{
        score=score+0;
       }        cout<<"Q5. what is national animal of india"<<endl;
        cout<<"(a) lion (b) tiger (c) elephant (d) zebra"<<endl;
       cin>>option;
       if(option=='b' || option=='B')
       {
        score=score+1;
       }
       else{
        score=score+0;
       }
               cout<<"Q6. what is the national flower of india"<<endl;
        cout<<"(a) lotus (b) rose (c) lily (d) sunflower"<<endl;
       cin>>option;
       if(option=='a' || option=='A')
       {
        score=score+1;
       }
       else{
        score=score+0;
       }
               cout<<"Q7. who is chief minister of up"<<endl;
        cout<<"(a) kejriwal (b) yogi aditynath (c) shivraj singh chohan (d) golu sukla"<<endl;
       cin>>option;
       if(option=='b' || option=='B')
       {
        score=score+1;
       }
       else{
        score=score+0;
       }
               cout<<"Q8. basic language of programming "<<endl;
        cout<<"(a) c,c++ (b) python (c) java (d) dsa"<<endl;
       cin>>option;
       if(option=='a' || option=='A')
       {
        score=score+1;
       }
       else{
        score=score+0;
       }
               cout<<"Q9. example of pop (procedual object programming language )"<<endl;
        cout<<"(a) c (b) c++ (c) python (d) java"<<endl;
       cin>>option;
       if(option=='a' || option=='A')
       {
        score=score+1;
       }
       else{
        score=score+0;
       }
               cout<<"10. who is the capital of up"<<endl;
        cout<<"(a) lukhnow (b) praygraj (c) kolkata (d) chennai"<<endl;
       cin>>option;
       if(option=='a' || option=='A')
       {
        score=score+1;
       }
       else{
        score=score+0;
       }
    }
    else{
        cout<<"you have enter wrong value,please enter s"<<endl;
    }
    return score;
}