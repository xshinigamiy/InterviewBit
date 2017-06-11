/*
  Author -- AJAY KUMAR
  MNNIT ALLAHABAD, ALLAHABAD
*/
int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    bool  flag = false;
    long long a;
    if(A < 0){
        A = -1 * A;
        flag = true;
    }
        
    string s =  to_string(A);
    int i = 0;
    int j = s.length() - 1;
    while(i < j){
        char ch = s[i];
        s[i] = s[j];
        s[j] = ch;
        i++;
        j--;
    }
    
    a = stoll(s);
    if(a > INT_MAX)
        return 0;
    if(flag)
        a = -1 * a;
    return a;    
}
