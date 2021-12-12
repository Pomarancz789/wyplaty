#include <iostream>
using namespace std;

int main() {
    int nominaly[5]={200,100,50,20,10};
    int wyplaty[10]={0};
    int kasa[10][5]={0};
    int bank[5]={0};
    
    
    for (int i=0; i<10; i++) {
        cout << "ile zarabia pracownik " << i+1 << " ?" << endl;
        cin >> wyplaty[i];
    }
    
    for (int i=0; i<10; i++)
    {
        int temp=wyplaty[i];
        for (int j=0; j<5; j++)
        {
            kasa[i][j]=temp/nominaly[j];
            temp=temp%nominaly[j];
        }
    }
    
    
    for (int j=0; j<5; j++)
    {
        for (int i=0; i<10; i++)
        {
            bank[j]+=kasa[i][j];
        }
    }
    
    for (int i=0;i<5;i++)
    {
        cout << "Nalezy wyplacic " << bank[i] << " o nominale " << nominaly[i] << endl;
    }
    
    
    return 0;
}
