#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<vector>

using namespace std;


std::vector<int> sortByHeight(std::vector<int> a) {
    int temp=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]!=-1 && a[i]>a[j]){
               temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}



int main()
{

return 0;

}
