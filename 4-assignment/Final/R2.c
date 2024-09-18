#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct {
  char model[50];
  int storage;
  int price;
} Phone;

typedef struct {
    Phone* elements;
    int size;
} PhoneList;

PhoneList createPhoneList(int size){
    PhoneList newList;
    newList.size = size;
    newList.elements = (Phone*)malloc(size * sizeof(Phone));
    return newList;
}

void setValue(PhoneList* phones, int index, Phone phone){
    if(index < phones->size && index >= 0){
        phones->elements[index] = phone;
    }else {
        printf("Index out of bound.\n");
    }
}

Phone getValue(PhoneList* phones, int index){
     if(index < phones->size && index >= 0){
        return phones->elements[index];
    }else {
        printf("Index out of bound.\n");
    }
}

void inputPhoneList(PhoneList* phones)
{
    Phone phone;

    for(int i=0; i < phones->size; i++){
        printf("\n\n\t+Enter phone %d model: ", i + 1);
        _flushall();
        gets(phone.model);

        printf("\n\t+Enter Storage capacity: ");
        scanf("%d", &phone.storage);

        printf("\n\t+Enter price: ");
        scanf("%d", &phone.price);

        setValue(phones, i, phone);
    }
}

void displayPhoneList(PhoneList phones){
  printf("\n---------------MOBILE PHONES INFORMATION---------------\n");
  for (int i = 0; i < phones.size; i++)
  {
    printf("\t-%s\n", phones.elements[i].model);
    printf("\t-Storage capacity: %d\n", phones.elements[i].storage);
    printf("\t-Price: %d\n\n", phones.elements[i].price);
  }
}

void accesdingsortPhoneListByCapacity(PhoneList* phones){
  Phone temp;
  for(int i=0; i < phones->size - 1; i++){
    for(int j = i + 1; j < phones->size;j++){
      if(phones->elements[i].storage > phones->elements[j].storage){
        //swap
        temp = phones->elements[i];
        phones->elements[i] = phones->elements[j];
        phones->elements[j] = temp;
      }
    }
  }
}

int main() {
  int num;
  PhoneList phones;

  printf("The number of mobile phones in the range 1 - 10.\n");
  printf("\nPress any key to continue");
  getch();

  do{
    printf("\nHow many mobile phones would you like to manage: ");
    scanf("%d", &num);
    if(num < 0 || num > 10){
      printf("\n Input is not valid\n");
    }
  }while(num < 0 || num > 10);

 
  phones = createPhoneList(num);
  inputPhoneList(&phones);
  accesdingsortPhoneListByCapacity(&phones);
  displayPhoneList(phones);

  getch();
  return 0;
} 
