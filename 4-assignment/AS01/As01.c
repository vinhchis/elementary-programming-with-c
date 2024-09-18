#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

// Q3 - Begin
typedef struct {
    char name[30]; // in C, can't have string type
    int quantity;
    int price;
} Book;

typedef struct {
    Book* elements;
    int size;
} BookList;

BookList createBookList(int size){
    BookList newList;
    newList.size = size;
    newList.elements = (Book*)malloc(size * sizeof(Book));
    return newList;
}

void setValue(BookList* books, int index, Book book){
    if(index < books->size && index >= 0){
        books->elements[index] = book;
    }else {
        printf("Index out of bound.\n");
    }
}

Book getValue(BookList* books, int index){
     if(index < books->size && index >= 0){
        return books->elements[index];
    }else {
        printf("Index out of bound.\n");
    }
}

void displayBookList(){
    int n;
    BookList books;
    Book book; // tempt book

    printf("How many books would you like to manage: ");
    scanf("%d", &n);

    books = createBookList(n); 

    for(int i=0; i < books.size; i++){
        _flushall();
        printf("\nEnter book %d name: ", i + 1);
        gets(book.name);
        // strcpy(book.name, name);

        printf("Enter quantity: ");
        scanf("%d", &book.quantity);

        printf("Enter Unit price: ");
        scanf("%d", &book.price);

        setValue(&books, i, book);
    }


    // Book List
    printf("Book List Information:\n");

    printf("No");
    printf(" ");
    printf("%9c");
    printf("Name");
    printf("%8c");
    printf(" ");
    printf("Quanlity");
    printf(" ");
    printf("Price");
    printf(" ");
    printf("Amount\n");
    printf("--|---------------------|--------|-----|-------\n");

    
    for(int i = 0; i< books.size ; i++){
        book = getValue(&books, i);
        int amount;
        amount = book.price * book.quantity; 

        printf("%-2d", i + 1);
        printf(" ");
        printf(" %-20s", book.name);
        printf(" ");
        printf("%4d    ", book.quantity);
        printf(" ");
        printf("%5d", book.price);
        printf(" ");
        printf("%-6d\n", amount);
    }
}
// Q3 - End


// Q2
void displayFactorialNumber()
{
    int n, f=1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        f *= i;
    }

    printf("Factorial: %d! = %d", n, f); 
}

// back Menu
void backMenu()
{
    char ch;
    do
    {
        printf("\n\nCome back Menu ?\n");
        printf("Enter Y(y)/N(n): ");
        _flushall();
        ch = getchar();

        if (toupper(ch) == 'N')
        {
            printf("\nProgram exit");
            _exit(0);
        }
        else if (toupper(ch) == 'Y')
        {
        }
        else
        {
            printf("Your choice isn't valid !!!\n");
        }
    } while (toupper(ch) != 'Y');
}

int main()
{
    int choice; 
    do{
        system("cls");
        // Q1 
        printf("*********************************************************\n");
        printf("\t C PROGRAM LANGUAGE\n");
        printf("\t\t 1. Question 02.\n");
        printf("\t\t 2. Question 03.\n");
        printf("\t\t 3. Exit.\n");
        printf("*********************************************************\n");
        printf("\t Enter Choice (1 - 3): ");
        scanf("%d", &choice);

        system("cls"); 

        switch (choice)
        {
        case 1:
            displayFactorialNumber();
            backMenu();
            break;
        case 2:
            displayBookList();
            backMenu();
            break;
        case 3:
            _exit(0);
        default:
            printf("Your choice isn't valid !!!\n");
            getch();
            break;
        }
    } while(choice != 3);
    

    getch();
    return 0;
}