void insert(stack<int>& s, int x) {
   if(s.size() == 0) {
       s.push(x);
       return;
   }
   int temp = s.top();
   s.pop();
   insert(s, x);
   s.push(temp);
}
void reverse(stack<int>& s) {
    if(s.size() == 1) 
        return;
        
    int temp = s.top();
    s.pop();
    reverse(s);
    insert(s, temp);
} 
