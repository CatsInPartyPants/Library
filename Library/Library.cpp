#include <iostream>
#include <string>

struct Book {
    std::string name;
    std::string author;
    std::string publisher;
    std::string genre;
};

void show_all_books(Book* books, int size);

int edit_book(Book* books, int size);

void find_by_author(Book* books, std::string author, int size);

void find_by_name(Book* books, std::string name, int size);

void sort_by_author(Book* books, int size);

void sort_by_publisher(Book* books, int size);

void sort_by_name(Book* books, int size);

int main()
{
    setlocale(LC_ALL, "ru");
    Book* book_info = new Book[10];
    book_info[0].name = "�������";
    book_info[0].author = "�������";
    book_info[0].publisher = "�����";
    book_info[0].genre = "��������";

    book_info[1].name = "������ ������� ������";
    book_info[1].author = "������";
    book_info[1].publisher = "�����";
    book_info[1].genre = "��������";

    book_info[2].name = "����� � ���";
    book_info[2].author = "�������";
    book_info[2].publisher = "�����������";
    book_info[2].genre = "�����";

    book_info[3].name = "������ � ���������";
    book_info[3].author = "��������";
    book_info[3].publisher = "�����";
    book_info[3].genre = "�������";

    book_info[4].name = "���������� �������";
    book_info[4].author = "������";
    book_info[4].publisher = "�����";
    book_info[4].genre = "�������";

    book_info[5].name = "������������ � ���������";
    book_info[5].author = "�����������";
    book_info[5].publisher = "�����";
    book_info[5].genre = "��������";

    book_info[6].name = "������ � 6";
    book_info[6].author = "�����";
    book_info[6].publisher = "�����";
    book_info[6].genre = "�������";

    book_info[7].name = "������� ������";
    book_info[7].author = "������";
    book_info[7].publisher = "�����";
    book_info[7].genre = "�����";

    book_info[8].name = "�������";
    book_info[8].author = "������";
    book_info[8].publisher = "�����������";
    book_info[8].genre = "�������";

    book_info[9].name = "������ �����";
    book_info[9].author = "�����";
    book_info[9].publisher = "�����������";
    book_info[9].genre = "��������";

    show_all_books(book_info, 10);
    //edit_book(book_info, 10);
    
    sort_by_name(book_info, 10);
    show_all_books(book_info, 10);
    sort_by_author(book_info, 10);
    show_all_books(book_info, 10);

    delete[] book_info;
}

void show_all_books(Book* books, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Books in library: \n";
        std::cout << i + 1 << "." << books[i].name << ",\n";
        std::cout << books[i].author << ",\n";
        std::cout << books[i].publisher << ",\n";
        std::cout << books[i].genre << ",\n";
    }
    std::cout << std::endl;
}

int edit_book(Book* books, int size)
{
    int position;
    std::cout << "What book do you want to edit?";
    std::cin >> position;
    if (position >= size)
    {
        return 1;
    }
    std::cin.get();
    std::cout << "Enter the name of the book:";
    std::getline(std::cin, books[position].name);

    std::cout << "Enter the author of the book:";
    std::getline(std::cin, books[position].author);

    std::cout << "Enter the publisher of the book:";
    std::getline(std::cin, books[position].publisher);

    std::cout << "Enter the genre of the book:";
    std::getline(std::cin, books[position].genre);
    return 0;
}

void find_by_author(Book* books, std::string author, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (author == books[i].author)
        {
            std::cout << books[i].author << std::endl;
            std::cout << books[i].name << std::endl;
            std::cout << books[i].publisher << std::endl;
            std::cout << books[i].genre << std::endl;
        }
    }
}

void find_by_name(Book* books, std::string name, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (name == books[i].name)
        {
            std::cout << books[i].author << std::endl;
            std::cout << books[i].name << std::endl;
            std::cout << books[i].publisher << std::endl;
            std::cout << books[i].genre << std::endl;
        }
    }
}

void sort_by_author(Book* books, int size)
{
    Book temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (strcmp(books[i].author.c_str(), books[j].author.c_str()) == 1)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sort_by_name(Book* books, int size)
{
    Book temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (strcmp(books[i].name.c_str(), books[j].name.c_str()) == 1)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sort_by_publisher(Book* books, int size)
{
    Book temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (strcmp(books[i].publisher.c_str(), books[j].publisher.c_str()) == 1)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}