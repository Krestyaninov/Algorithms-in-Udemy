#include<iostream>
#include<stack>

    using namespace std;

int main()
{
    stack<int> st;
    st.push(2);
    st.push(7);
    cout << st.top();
    st.pop();
    cout << st.top();

}