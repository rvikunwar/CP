// upper_bound.cpp


// Default
vector<int> a = {-10, -7, -6, 1, 4};

auto i = upper_bound(a.begin(), a.end(), -2);
if( i != a.end()) {
    cout<<*i<<endl;
} else {
    cout<<"NO"<<endl;
}


// Reverse behaviour
vector<int> a = {-10, -7, -6, 1, 4};

auto i = upper_bound(a.rbegin(), a.rend(), -2, greater<>());
if( i != a.rend()) {
    cout<<*i<<endl;
} else {
    cout<<"NO"<<endl;
}