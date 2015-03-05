int solution(vector<int> &A) {
    
    int sum = 0, counter = 0;
    for(size_t i = 0; i < A.size(); ++i)
    {
        if(A[i])
        {
            counter += i - sum++;
        }
        if(counter > 1000000000)
            return -1;
    }
    return counter;
}
