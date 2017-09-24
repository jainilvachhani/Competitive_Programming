class Person
{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
};
    Person::Person(int initialAge)
    {
        if(initialAge<0)
        {
            printf("Age is not valid, setting age to 0.\n");
            age = 0;
        }
        else
        {
            age = initialAge;    
        }
    }
    void Person::amIOld()
    {   
        if(age<13)
        {
            printf("You are young.\n");
        }
        else if(age>=13 && age<18)
        {
            printf("You are a teenager.\n");
        }
        else
        {
            printf("You are old.\n");
        }    
    }
    void Person::yearPasses()
    {
        age++;    
    }