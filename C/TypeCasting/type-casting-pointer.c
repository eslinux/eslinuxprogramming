#include <stdio.h>

enum {
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT
};

void print_info(int type, void *data){

    switch (type) {
    case TYPE_CHAR:
        printf("data char: %s \n", (char*)data);
        break;
    case TYPE_INT:
        printf("data int: %d \n", *((int*)data));
        break;
    case TYPE_FLOAT:
        printf("data float: %f \n", *((float*)data));
        break;
    default:
        break;
    }
}


int main()
{
    char name[32] = "chicken";
    int age = 5;
    float weight = 2.5f;

    print_info(TYPE_CHAR, (void*)name);
    print_info(TYPE_INT, (void*)&age);
    print_info(TYPE_FLOAT, (void*)&weight);

    return 0;
}
