#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    //allocate the memory 
    total_number_of_books = calloc(total_number_of_shelves,sizeof(int));
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    //allocate the memory which will hold addresses of each individual 1-D array
    total_number_of_pages = malloc(total_number_of_shelves*sizeof(int *));

    for(int i=0;i<total_number_of_shelves;i++){
        //assigning each column of total_no_of_pages with an 1-D array with a size of            //say 1100

        total_number_of_pages[i] = calloc(1100,sizeof(int));
    }
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int shelf, pages;
            scanf("%d %d", &shelf, &pages);
            //increment the number of book count int the books array
            total_number_of_books[shelf]++;
            //get the address of shelf in the given 2-D array
            int* book = total_number_of_pages[shelf];

            //iterate through the books until end
            while(*book != 0){
                book++;
            }
            //insert the book at the end
            *book =pages;

        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}