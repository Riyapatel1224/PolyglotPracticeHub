#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    // Create a hash map using an array of pointers to store pairs of (value, index)
    int hashMapSize = 2048; // This can be adjusted based on expected input size
    int **hashMap = (int **)calloc(hashMapSize, sizeof(int *));

    int *result = (int *)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        int complement = target - nums[i];
        int hashIndex = abs(complement) % hashMapSize;

        // Check if complement exists in the hash map
        if (hashMap[hashIndex] != NULL && hashMap[hashIndex][0] == complement)
        {
            result[0] = hashMap[hashIndex][1];
            result[1] = i;
            *returnSize = 2;
            free(hashMap);
            return result;
        }

        // Store the current number and its index in the hash map
        hashIndex = abs(nums[i]) % hashMapSize;
        hashMap[hashIndex] = (int *)malloc(2 * sizeof(int));
        hashMap[hashIndex][0] = nums[i];
        hashMap[hashIndex][1] = i;
    }

    // Free allocated memory in case no solution is found (which shouldn't happen per the problem constraints)
    free(hashMap);
    *returnSize = 0;
    return NULL;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int *result = twoSum(nums, 4, target, &returnSize);

    if (returnSize == 2)
    {
        printf("Indices: [%d ,%d]\n", result[0], result[1]);
    }
    else
    {
        printf("No solution found.\n");
    }

    free(result);
    return 0;
}

// #include<stdio.h>
// #include<stdlib.h>
// #include<uthash.h>

// int* twoSum(int *nums, int numsSize, int target, int* returnSize){
//     struct hashTable
//     {
//         int key;  //number we need to find
//         int value;//index of the number
//         UT_hash_handle hh;
//     }*hashTable=NULL,*item,*tmpItem;

//     for (int i = 0; i < numsSize;i++)
//     {
//         HASH_FIND_INT(hashTable, &nums[i], item);
//         if(item){
//             int *result = malloc(sizeof(int) * 2);
//             result[0] = item->value;
//             result[1] = i;
//             *returnSize = 2;

//             HASH_ITER(hh, hashTable, item, tmpItem){
//                 HASH_DEL(hashTable, item);
//                 free(item);
//             }
//             return result;
//         }

//         item = malloc(sizeof(struct hashTable));
//         item->key = target - nums[i];
//         item->value = i;

//         HASH_ADD_INT(hashTable, key, item);
//     }
//     HASH_ITER(hh, hashTable, item, tmpItem)
//     {
//         HASH_DEL(hashTable, item);
//         free(item);
//     }
//     *returnSize = 0;
//     return NULL;
// }

// int main()
// {
//     int nums[] = {2, 7, 11, 15};
//     int target = 9;
//     int returnSize;
//     int *result = twoSum(&nums, 4, target, &returnSize);

//     if (returnSize == 2)
//     {
//         printf("Indices: %d, %d\n", result[0], result[1]);
//     }
//     else
//     {
//         printf("No solution found.\n");
//     }

//     free(result);
//     return 0;
// }