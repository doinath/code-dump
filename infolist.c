#include <stdio.h>
#include <string.h>

#define MAX_USERS 10

typedef struct
{
  char name[50];
  int age;
  char gender;
  char password[20]; 
} personalInfo;

int findUserIndex(personalInfo users[], int numUsers, const char *username)
{
    for (int i = 0; i < numUsers; i++)
    {
        if (strcmp(users[i].name, username) == 0) 
        {
        return i; // user is found, return index
        }
    }
return -1; // not found
}

void addUser(personalInfo users[], int *numUsers)
{
    if (*numUsers < MAX_USERS)
    {
        personalInfo newUser;
        printf("Enter your name: ");
        scanf("%s", newUser.name);
        printf("Enter age: ");
        scanf("%d", &newUser.age);
        printf("Enter gender(M/F/O): ");
        scanf(" %c", &newUser.gender);
        printf("Enter your Password: ");
        scanf("%s", newUser.password);
        
        if (findUserIndex(users, *numUsers, newUser.name) == -1)
        {
            users[(*numUsers)++] = newUser;
            printf("Username added succesfully\n");
        }
        else 
        {
            printf("Error: Try again with a different username.\n");
        }
    }
    else 
    {
        printf("Error: Maximum User!");
    }
}
void accessUserInfo(personalInfo users[], int numUsers)
{
    if (numUsers > 0)
    {
        char username[50];
        char password[50];
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);
        int userIndex = findUserIndex(users, numUsers, username);

        if (userIndex != -1 && strcmp(users[userIndex].password, password)== 0)
        {
            printf("Access Granted! Welcome '%s'\n", username);
            printf("Here are your personal information:\n");
            printf("Name:  %s\n", users[userIndex].name);
            printf("Age: %d\n", users[userIndex].age);
            printf("Gender: %c\n", users[userIndex].gender);
        }
        else
        {
            printf("User not found!\n");
        }
    }
    else 
    {
        printf("User not found, please add user.\n");
    }
}

void deleteUser(personalInfo users[], int *numUsers)
{
    if (*numUsers > 0)
    {
        char username[50];
        printf("Enter username that you wanna delete: ");
        scanf("%s", username);

        int userIndex = findUserIndex(users, *numUsers, username);
        if (userIndex != -1)
        {
            users[userIndex] = users[--(*numUsers)];
            printf("Username deleted succesfully!\n");
        }
        else 
        {
            printf("Error: User not found!\n");
        }
    }
    else
    {
        printf("User not found! Please add one.\n");
    }
}

int main ()
{
    personalInfo user[MAX_USERS];
    int numUsers = 0;
        int choice;
    do 
    {
        printf("Menu Selection:\n");
        printf("1. Add User\n");
        printf("2. Access User Information\n");
        printf("3. Delete User Information\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: 
                addUser(user, &numUsers);
                break;
            case 2:
                accessUserInfo(user, numUsers);
                break;
            case 3:
                deleteUser(user, &numUsers);
                break;
            case 4:
                printf("Exiting Program\n");
                break;
            default:
            printf("Invalid Choice. Please enter a valid option.\n");
        }

    }while (choice != 4);
    return 0;
}