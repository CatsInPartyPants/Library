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
    book_info[0].name = "Колобок";
    book_info[0].author = "Писахов";
    book_info[0].publisher = "Дрофа";
    book_info[0].genre = "Фольклор";

    book_info[1].name = "Сказки бабушки Галины";
    book_info[1].author = "Галина";
    book_info[1].publisher = "Дрофа";
    book_info[1].genre = "Фольклор";

    book_info[2].name = "Война и мир";
    book_info[2].author = "Толстой";
    book_info[2].publisher = "Просвещение";
    book_info[2].genre = "Роман";

    book_info[3].name = "Мастер и Маргарита";
    book_info[3].author = "Булгаков";
    book_info[3].publisher = "Проба";
    book_info[3].genre = "Фэнтези";

    book_info[4].name = "Двенадцать стульев";
    book_info[4].author = "Петров";
    book_info[4].publisher = "Проба";
    book_info[4].genre = "Комедия";

    book_info[5].name = "Преступление и наказание";
    book_info[5].author = "Достоевский";
    book_info[5].publisher = "Проба";
    book_info[5].genre = "Детектив";

    book_info[6].name = "Палата № 6";
    book_info[6].author = "Чехов";
    book_info[6].publisher = "Дрофа";
    book_info[6].genre = "Комедия";

    book_info[7].name = "Евгений Онегин";
    book_info[7].author = "Пушкин";
    book_info[7].publisher = "Проба";
    book_info[7].genre = "Драма";

    book_info[8].name = "Ревизор";
    book_info[8].author = "Гоголь";
    book_info[8].publisher = "Просвещение";
    book_info[8].genre = "Комедия";

    book_info[9].name = "Шерлок холмс";
    book_info[9].author = "Доиль";
    book_info[9].publisher = "Просвещение";
    book_info[9].genre = "Детектив";

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