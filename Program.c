// Problem # 1


// #include <stdio.h>
// #include <math.h>
// int isPrime(int num);

// int main()
// {
//     int number;
//     int array[10] ;
//     int pCount = 0;
//     int cCount = 9;
//     for(int i=0; i<10; i++)
//     {
//         printf("Enter Value: ");
//         scanf("%d",&number);
//         if(isPrime(number)==1)
//         {
//             array[pCount] = number;
//             pCount = pCount + 1;
//         }
//         else
//         {
//             array[cCount] = number;
//             cCount = cCount - 1;
//         }
//     }
//     printf("Elements in some order....\n");
//     for (int i = 0; i<10; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     return 0;
// }

// int isPrime(int num)
// {
//     int prime = 1;
//     for(int i = 2; i < sqrt(num); i++) 
//     {
//         if((num % i) == 0)
//         {
//             prime = 0;
//             break;
//         }
//     }
//     if (num <= 1)
//     {
//         prime = 0 ;
//     }
//     if (prime==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }


// Bonus Problem


#include <stdio.h>
#include <stdlib.h>
int selectLeader(int array[], int size);
int main()
{
    int array[19] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int size = sizeof(array)/sizeof(int);
    printf("Leader Number is %d ", selectLeader(array, size));
    return 0;
}

int selectLeader(int array[], int size)
{
    int index = 2;
    int elemenated;
    for (int i=0; i<size ; i++)
    {
        
        if ( index>size-1)
        {
            index = abs((index-(size-1))-2);
        }
        if (array[index]==0)
        {
            index = index + 1;
            continue;
        }
        elemenated = array[index];
        array[index] = 0;
        index  = index + 3;
        for (int i = 0; i<size; i++)
        {
            printf("%d ", array[i]);
        }
        printf("- %d\n", elemenated);
    }
    return elemenated;
}
