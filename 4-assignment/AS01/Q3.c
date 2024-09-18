#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char name[30]; 
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


int main()
{
    int n;
    BookList books;
    Book book; // tempt book

    printf("How many books would you like to manage: ");
    scanf("%d", &n);

    books = createBookList(n); 

    for(int i=0; i < books.size; i++){
        printf("\nEnter book %d name: ", i + 1);
        scanf("%s", &book.name);
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
    printf("%*c", 9, ' ');
    printf("Name");
    printf("%*c", 8, ' ');
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
        // printf("%-2d", i + 1);
        // printf(" ");
        // printf(" %-20s", book.name);
        // printf(" ");
        // printf("%4d    ", book.quantity);
        // printf(" ");
        // printf("%5d", book.price);
        // printf(" ");
        // printf("%-6d\n", amount);
        printf("%-2d  %-20s %4d     %5d %-6d\n", i + 1, book.name, book.quantity, book.price, amount);
    }
    

    getch();
    return 0;
}