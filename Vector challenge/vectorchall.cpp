#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> vector1{};
    vector <int> vector2{};

    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"Number of elemenets in Vector 1 is: "<<vector1.size()<<endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"Number of elements in Vector 2 is: "<<vector2.size()<<endl;

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"Elements of Vector 2D are: "<<vector_2d.at(0).at(0)<<" , "<<vector_2d.at(0).at(1);
    cout<<" , "<<vector_2d.at(1).at(0)<<" and "<<vector_2d.at(1).at(1)<<endl;

    vector1.at(0)=1000;
    cout<<"vector element 1"<<vector1.at(0)<<endl;
    cout<<"Updated elements of Vector 2D are: "<<vector_2d.at(0).at(0)<<" , "<<vector_2d.at(0).at(1);
    cout<<" , "<<vector_2d.at(1).at(0)<<" and "<<vector_2d.at(1).at(1)<<endl;



    return 0;


}