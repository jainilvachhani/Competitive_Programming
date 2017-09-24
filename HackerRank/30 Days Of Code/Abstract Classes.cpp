class MyBook : public Book
{
    private:
        int price;
    public:
        MyBook(string title, string author, int price) : Book(title,author)
        {
            this->price = price;
        }
        void display()
        {
            cout << "Title: " + this->title  << endl;
            cout << "Author: " + this->author << endl;
            cout << "Price: " << this->price << endl;
        }
};