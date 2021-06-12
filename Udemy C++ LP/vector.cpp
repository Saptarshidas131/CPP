#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // declaring vectors
    vector <int> vector1 {}, vector2 {};
    // declare 2d vector
    vector <vector <int>> vector_2d {};

    // add elements to vector1
    vector1.push_back(10);
    vector1.push_back(20);

    // display elements in vector1
    cout << "vector1:" << endl;
    cout << vector1.at(0) << endl;
    cout<< vector1.at(1) <<endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;

    // add vector to vector2
    vector2.push_back(100);
    vector2.push_back(200);

    // display elements to vector2
    cout << "vector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "vector2 contains " << vector2.size() << " elements" << endl;

    // add vector1 and vector2 to vector_2d
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // display elements at vector_2d
    cout << "vector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(0).at(1) << endl;;
    cout << "vector2_d contains " << vector_2d.size() << " elements" << endl;

    // change vector1 at 0 to 1000
    vector1.at(0) = 1000;

    // display elements at vector_2d
    cout << "vector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(0).at(1) << endl;;
    cout << "vector2_d contains " << vector_2d.size() << " elements" << endl;

    // display elements in vector1
    cout << "vector1:" << endl;
    cout << vector1.at(0) << endl;
    cout<< vector1.at(1) <<endl;
    
    return 0;
}
