typedef struct {
    // User defined data may be declared here.
    pthread_mutex_t mutex_1;
    pthread_mutex_t mutex_2;
} Foo;

Foo* fooCreate() {
    Foo* obj = (Foo*) malloc(sizeof(Foo));
    pthread_mutex_init(&obj->mutex_1, NULL);
    pthread_mutex_init(&obj->mutex_2, NULL);
    
    pthread_mutex_lock(&obj->mutex_1);
    pthread_mutex_lock(&obj->mutex_2);

    // Initialize user defined data here.
    return obj;
}

void first(Foo* obj) {
    
    // printFirst() outputs "first". Do not change or remove this line.
    printFirst();
    pthread_mutex_unlock(&obj->mutex_1);
}

void second(Foo* obj) {
    
    // printSecond() outputs "second". Do not change or remove this line.
    pthread_mutex_lock(&obj->mutex_1);
    printSecond();
    pthread_mutex_unlock(&obj->mutex_1);
    pthread_mutex_unlock(&obj->mutex_2);
}

void third(Foo* obj) {
    
    // printThird() outputs "third". Do not change or remove this line.
    pthread_mutex_lock(&obj->mutex_2);
    printThird();
    pthread_mutex_unlock(&obj->mutex_2);
}

void fooFree(Foo* obj) {
    // User defined data may be cleaned up here.
    pthread_mutex_destroy(&obj->mutex_1);
    pthread_mutex_destroy(&obj->mutex_2);    
}
