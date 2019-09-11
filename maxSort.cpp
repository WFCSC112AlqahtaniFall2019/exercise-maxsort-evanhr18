#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v(5);  // vector to be sorted
    // initialize v
    for (int i = 0; i < v.size(); i++) {
        cin >> v.at(i);
    }


    // print the unsorted v
    print(v);
    cout << endl;


    // sort v
    maxSort(v);


    // print the sorted v
    print(v);

    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for(int i=list.size()-1;i>=0;i--){
        /*complete the code*/
        int currentMax = 0;

        for(int j=0;j<=i;j++){
            /*complete the code*/
            if (list.at(j) > list.at(currentMax)) {
                currentMax = j;
            }

        }
        /*complete the code*/
        swap(list.at(i), list.at(currentMax));
    }
}

// swap function
void swap(int& a, int&b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// print function
void print(const vector<int>& list){
    for (int i = 0; i < list.size(); i++) {
        cout << list.at(i) << " ";
    }
}

