# 2.18


# 2.19

指针是一个变量，存储的是所指向变量的地址，

引用是一个变量的别名，指的就是变量本身，引用一旦绑定，就不能更改，而一般指针是可以更改所指向的变量的；指针不需要初始化，引用定义时必须初始化

# 2.20

计算 i 的平方

# 2.21 

a) 整型指针不能赋给浮点型指针 
b) ip 是一个指针
c) legal

# 2.22 

如果 p 不为空指针
如果 p 指向的整数不为 0

refer to 2-22.cpp

# 2.23 

不能判断一个指针是否有效

# 2.24

在 C++ 中允许 void 指针转换为另外一种类型的指针，但是非 void 类型不能转换

# 2.25 
a) ip : int pointer, value: null
i undefined 
r undefined 
b) i undefined & integer; ip is a pointer to integer, value undefined; 
c) ip is a pointer to integer, value undefined; ip2 is integer type


# 2.26 
a) 非法操作，常量必须初始化
b) 合法
c) 合法
d) 合法；非法 

# 2.27
a) int &r = 0; 不合法 不能把 r 绑定到一个临时变量中
b) 如果 i2 是一个整型变量，则为合法
c) 合法
d) 合法
e) 合法
f) 不合法
g) 合法

# 2.28 

a) 不合法，cp 是一个固定的指针，需要初始化
b) p2 不合法，理由同上
c) ic 需要初始化
d) p3 需要初始化
e) p 需要初始化

# 2.29

a) legal
b) illegal; // p3 为一个 const 指针， 
c) illegal 
d) illegal 
e) legal 
f) legal 

# 2.30 


top level: point itself is a const;

low level: object point to is a const;

const int v2 = 0; // top level 

int v1 = v2; // no 

int *p1 = &v1, &r1 = v1; // p1 no level , r1 top level 

const int *p2 = &v2; // low level 

const int *const p3 = &vi; // top level & low level 

const  int &r2 = v2; // low level 



# 2.31 

const int v2 = 0; // v2 top-level

int v1 = v2; // v1 no level

int *p1 = &v1; // p1 no level 

int &r1 = v1; // r1 no level 

const int *p2 = &v2; // p2 low level

const int *const p3 = &i; // p3 both top and low level 

const int &r2 = v2; // r2 low level 

r1 = v2; // legal, const is ignored
p1 = p2; // illegal no same low level
p2 = p1; // legal not const can be converted to const
p1 = p3 //  illegal 
p2 = p3; // legal same low level



