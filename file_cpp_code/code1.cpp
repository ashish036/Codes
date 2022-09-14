
#include <bits/stdc++.h>
#include<fstream>
using namespace std;

class item{
  public:
    string name;
    int price;
    int quantity;
    
 public:
    item(){};
    item(string n, int p, int q = 0){
        name = n;
        price = p;
        quantity = q;
    }
    friend ifstream& operator>>(ifstream &iof, item &it);
    friend ofstream& operator<<(ofstream &ofs, item &it);
};

ofstream& operator<<(ofstream &ofs, item &it){
    ofs<<it.name<<endl;
    ofs<<it.price<<endl;
    ofs<<it.quantity<<endl;
    return ofs;
}
ifstream& operator>>(ifstream &iof, item &it){
    iof>>it.name>>it.price>>it.quantity;
    return iof;
}

int main()
{
    item it,it2;
    cin>>it.name>>it.price>>it.quantity;
    ofstream ioof("My.txt");
    ioof<<it;
    ioof.close();
    
    ifstream iof("My.txt");
    iof>>it2;
    iof.close();
    cout<<"NAME = "<<it2.name<<"\t"<<"Price = "<<it2.price<<"\t"<<"Qunatity = "<<it2.quantity<<endl;
    // cout>>it2<<endl;
    return 0;
}
