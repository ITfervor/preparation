
#include "struct_obj1.h"
#include <stdio.h>
#include <stdlib.h>

struct Obj_Private
{
    int x;
    int y;
};

struct Obj1* obj_init(void)
{
    struct Obj1* obj = malloc(sizeof(struct Obj1));
    
    obj -> set = set;
    obj -> sum = sum;
    obj -> mul = mul;
    
    obj->m_private = malloc(sizeof(struct Obj_Private));
    obj->m_private -> x = 3;
    obj->m_private -> y = 5;
    
    return obj; 
}


void set(struct Obj1* m_this, int x, int y)
{
    m_this->m_private->x = x;
    m_this->m_private->y = y;
};

void sum(struct Obj1* m_this){
    printf("Obj1의 sum함수 호출 = %d\n" , m_this->m_private->x + m_this->m_private->y);
};

void mul(struct Obj1* m_this){
    printf("Obj1의 mul함수 호출 = %d\n" , m_this->m_private->x * m_this->m_private->y);
};

int main(void)
{
    struct Obj1* obj = obj_init();
    obj -> sum(obj);
    obj -> mul(obj);
    
    obj -> set(obj, 10, 20);
    obj -> sum(obj);
    obj -> mul(obj);
    
    free(obj);
    
    return 0;
}


