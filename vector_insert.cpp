#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<char> letter = {'R', 'd'};

    letter.insert(letter.begin(), 'N');
    letter.insert(letter.begin()+1, '.');
    letter.insert(letter.begin()+2, 'I');
    letter.insert(letter.begin()+3, '.');
    

    letter.push_back('e');

    letter.insert(letter.begin()+5, 'o');

    for (int i=0; i < letter.size(); i++){
        cout<<letter[i];
    }
}