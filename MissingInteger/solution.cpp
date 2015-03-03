int solution(vector<int> &A) {
    vector<bool> mask(A.size() + 1, false);
    for(const auto & a : A)
    {
        if(a > 0 && a < mask.size())
            mask[a] = true;
    }
    for(size_t i = 1; i <= mask.size(); ++i)
        if(!mask[i])
            return i;
    return -1;
}
