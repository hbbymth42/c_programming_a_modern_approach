/* Breakdown of ISBN entered by User */

#include <stdio.h>

int main(void) {
    int gs1, gid, pub_code, item_num, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &gid, &pub_code, &item_num, &check);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", gid);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check);
    
    return 0;
}

