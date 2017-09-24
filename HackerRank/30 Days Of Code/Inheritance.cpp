class Student :  public Person
{
	private:
		vector<int> testScores;  
	public:
        Student(string firstName, string lastName, int id, vector <int> scores) : Person(firstName, lastName, id)
        {
            this->testScores = scores;
        }
        char calculate()
        {
            int avg,i;
            for(i=0;i<testScores.size();i++)
            {
                avg += testScores[i];
            }
            avg = avg/testScores.size();
            if(avg<=100 && avg>=90)
            {
                return 'O';
            }
            else if(avg<90 && avg>=80)
            {
                return 'E';
            }
            else if(avg<80 && avg>=70)
            {
                return 'A';
            }
            else if(avg<70 && avg>=55)
            {
                return 'P';
            }
            else if(avg<55 && avg>=40)
            {
                return 'D';
            }
            else
            {
                return 'T';
            }
        }
};