

vector<int> solution(int N, vector<int> &A) {
    int maxCounter = 0, base = 0;
    vector<int> counters(N, 0);
    for(const auto& a : A)
    {
        if(a >= 1 and a <= N)
        {
            if(counters[a-1] < base)
                counters[a-1] = base;
            counters[a-1]++;
            maxCounter = counters[a-1] > maxCounter ? counters[a-1] : maxCounter;
        }
        else if(a == N + 1)
            base = maxCounter;
    }
    for(auto & c : counters)
        if(c < base)
            c = base;
    return counters;
}