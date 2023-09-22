#include <stdio.h>

// student structure
struct student {
  char id[15];
  char firstname[64];
  char lastname[64];
  float points;
};

// function declaration
void getDetail(struct student *);
void displayDetail(struct student *);

int main(void) {

  // student structure variable
  struct student std[3];

  // get student detail
  getDetail(std);

  // display student detail
  //displayDetail(std);

  return 0;
}

// function definition


void getDetail(struct student *ptr) {

  int i;

  for (i = 0; i < 2; i++) {
    printf("Enter detail of student #%d\n", (i + 1));
    printf("Enter ID: ");
    scanf("%s", ptr->id);
    printf("Enter first name: ");
    scanf("%s", ptr->firstname);
    printf("Enter last name: ");
    scanf("%s", ptr->lastname);
    printf("Enter Points: ");
    scanf("%f", &ptr->points);

    // update pointer to point at next element
    // of the array std
    ptr++;
  }

}
