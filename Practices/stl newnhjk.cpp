#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(12);
    l.push_back(3);
    l.push_back(5);
    l.push_back(7);
    l.push_back(2);
    list<int>::iterator it;
    list<int>l2=l;

    cout<<"Initial List:"<<endl;
    for(it=l.begin(); it!=l.end(); it++)
        cout<<*it<<" ";


    cout<<"\n\nAfter Removing the first element from the list:"<<endl;
    l.pop_front();
    for(it=l.begin(); it!=l.end(); it++)
        cout<<*it<<" ";


    cout<<"\n\nAfter inserting "<<10<<" at the beginning of the list:"<<endl;
    l=l2;
    l.push_front(10);
    for(it=l.begin(); it!=l.end(); it++)
        cout<<*it<<" ";


    cout<<"\n\nReplacing "<<12<<" with "<<6<<":\n";
    l=l2;
    list<int>::iterator it1;
    it1=find(l.begin(), l.end(), 12);
    for(it=l.begin(); it!=l.end(); it++)
    {
        if(it==it1)
            cout<<6<<" ";
        else
            cout<<*it<<" ";
    }

}
