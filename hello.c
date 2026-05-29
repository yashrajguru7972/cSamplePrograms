    #include <stdio.h>
    int main() {
        char name[10];
        printf("Enter name \n");
        scanf("%s", name);
        int age;
        printf("Enter the age\n");
        scanf("%d", &age);
        float Marks;
        printf("enetr the marks\n");
        scanf("%f", &Marks);
        printf("Student info \n Name is %s \n Age is %d \n Marks = %f", name, age, Marks);
    return 0;
}
