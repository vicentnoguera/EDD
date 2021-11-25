Vaig a explicar la funció major que

~~~
int major (int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
~~~

Ara escrivim els 2 fitxers calc.h i calc.c i els guardarem en un .o

~~~
gcc -c calc.c -o calc.o
gcc -Wall -g calcula.c calc.o -o calcula
~~~

Sols agarrem el calc.c ja que el calc.h és la llibreria

Finalment amb el .PHONY:clean
~~~
rm -rf calcula calc.o
~~~
borrem els fitxer sobrants
