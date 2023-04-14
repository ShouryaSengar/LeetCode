class Solution {
public:
//     template<typename T>
// void pop_front(std::vector<T> &v)
// {
//     if (v.size() > 0) {
//         v.erase(v.begin());
//     }
// }
//     bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//         stack<int> s;
//         for(int i=0; i<pushed.size();i++)
//         {
//             if(pushed[i]!=popped.front())
//             {
//                 s.push(pushed[i]);
//             }
//             else if(pushed[i]==popped.front())
//             {
//                 pop_front(popped);
//             }
//         }
//         for(auto i:popped)
//         {
//             if(s.top()==i)
//             {
//                 s.pop();
//             }
//         }
//         if(s.empty())
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
     bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s ;   // an empty stack
        int j = 0;
        for(int i= 0; i<pushed.size(); ++i)
        {
            s.push(pushed[i]);
            
			// check if pushed values is next to pe popped out.
            while(!s.empty() && s.top() == popped[j])
            {
                s.pop();
                ++j;
            }
        }
		// if stack is empty means sequence is correct.
        return s.empty();
    }
};