//
//  struct_obj1.h
//  work_study
//
//  Created by 이정엽 on 2023/12/28.
//

#define struct_obj1_h


#include <stdio.h>

struct Obj_Private;

struct Obj1
{
    void (*set)(struct Obj1* m_this, int x, int y);
    void (*sum)(struct Obj1* m_this);
    void (*mul)(struct Obj1* m_this);
    
    struct Obj_Private* m_private;
};

struct Obj1* (obj_init)(void);

void set(struct Obj1* m_this, int x, int y);
void sum(struct Obj1* m_this);
void mul(struct Obj1* m_this);
