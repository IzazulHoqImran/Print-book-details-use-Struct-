#include<stdio.h>
#include<string.h>
struct bookdetails
{
    char name [50];
    char author[50];
    char price [10];
    char season [20];
    char edition[10];
    char page [10];
};
int print(struct bookdetails bk[],int n);
int main()
{
    struct bookdetails book[500];
    int num,i;
    char akdum[10];
    printf("Enter how much book details you entry : ");
    scanf("%d",&num);

    for(i=0; i<num; i++)
    {
        printf("\n\n\tBook Number %d DATA \n\n",i+1);
        gets(akdum);
        printf("\nEnter the Book Name:");
        gets(book[i].name);

        printf("\nEnter the Author of Book:");
        gets(book[i].author);

        printf("\nEnter the price of Book:");
        gets(book[i].price);

        printf("\nEnter the season of Book:");
        gets(book[i].season);

        printf("\nEnter the edition of Book:");
        gets(book[i].edition);

        printf("\nEnter the page of Book:");
        gets(book[i].page);
        //k++;
    }
    print(book,num);

}
int print(struct bookdetails bk[],int n)
{
    int i,k=0;
    styem("cls");
    for(i=0; i<n; i++)
    {
        printf("\n\n\tBook Number %d DATA \n\n",k+1);
        printf("\n\nBook Name : %s",bk[i].name);

        printf("\n\n\Author of Book: %s",bk[i].author);

        printf("\n\nPrice of Book: %s",bk[i].price);

        printf("\n\nSeason of Book: %s",bk[i].season);

        printf("\n\nEdition of Book: %s",bk[i].edition);

        printf("\n\nPage of Book: %s",bk[i].page);
        k++;
    }



}
