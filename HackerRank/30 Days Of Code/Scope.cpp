Difference(vector <int> x)
    {
        this->elements = x;
    }
    int computeDifference()
    {
        int i,j;
        maximumDifference = 0;
        for(i=0;i<elements.size();i++)
        {
            for(j=i+1;j<elements.size();j++)
            {
                if(abs(elements[i]-elements[j])>maximumDifference)
                {
                    maximumDifference = abs(elements[i]-elements[j]);
                }
            }
        }
        return maximumDifference;
    }