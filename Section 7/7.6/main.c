#include<stdio.h>
#include<string.h>

#include "ItemToPurchase.h"

int main(void) {
   
   ItemToPurchase item1;
   ItemToPurchase item2;
   
   printf("Item 1\n");
   printf("Enter the item name:\n");
   fgets(item1.itemName, 20, stdin);
   item1.itemName[strcspn(item1.itemName, "\n")] = 0; //Cleaner way to remove trailing line space off fgets()
   printf("Enter the item price:\n");
   scanf("%d", &item1.itemPrice);
   printf("Enter the item quantity:\n");
   scanf("%d", &item1.itemQuantity);
   
   char c;
   c = getchar();
   while(c != '\n' && c != EOF) {
   c = getchar();
   }
   
   printf("\n");
   
   printf("Item 2\n");
   printf("Enter the item name:\n");
   fgets(item2.itemName, 20, stdin);
   item2.itemName[strcspn(item2.itemName, "\n")] = 0;
   printf("Enter the item price:\n");
   scanf("%d", &item2.itemPrice);
   printf("Enter the item quantity:\n");
   scanf("%d", &item2.itemQuantity);
   
   printf("\n");
   
   printf("TOTAL COST\n");
   PrintItemCost(item1);
   PrintItemCost(item2);
   printf("\nTotal: $%d\n", (item1.itemPrice * item1.itemQuantity) + (item2.itemPrice * item2.itemQuantity));

   return 0;
}
