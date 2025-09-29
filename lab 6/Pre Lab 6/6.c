#include <stdio.h>

int manageParking(int occupiedSlots, int totalSlots, int action)
{
    if (action == 1)
    {
        if (occupiedSlots < totalSlots)
        {
            printf("Vehicle entered. Total Slots: %d | Occupied Slots: %d | Slots remaining: %d\n", totalSlots, occupiedSlots + 1, totalSlots - (occupiedSlots + 1));
            return occupiedSlots + 1;
        }
        else
        {
            printf("Parking Full! No slots available.\n");
            return occupiedSlots;
        }
    }
    else if (action == 2)
    {
        if (occupiedSlots > 0)
        {
            printf("Vehicle exited. Total Slots: %d | Occupied Slots: %d | Slots remaining: %d\n", totalSlots, occupiedSlots - 1, totalSlots - (occupiedSlots - 1));
            return occupiedSlots - 1;
        }
        else
        {
            printf("Parking lot is empty!\n");
            return occupiedSlots;
        }
    }
    return occupiedSlots;
}

int main()
{
    int totalSlots = 9, occupiedSlots = 0, action;

    while (1)
    {
        printf("\nEnter action \n1 - Entry \n2 - Exit \n3 - Exit Program \n");
        scanf("%d", &action);

        if (action == 3)
        {
            printf("Exiting program...\n");
            break;
        }
        else if (action < 1 || action > 3)
        {
            printf("Invalid action. Please enter a valid action.\n");
            continue;
        }

        occupiedSlots = manageParking(occupiedSlots, totalSlots, action);
    }

    return 0;
}
