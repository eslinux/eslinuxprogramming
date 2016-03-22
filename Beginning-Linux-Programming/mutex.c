



sem_t sem_lock;

int x = 0,y = 0,z = 0;

void *thread_A(void *arg) {
    sem_wait(&sem_lock);

    write x;
    write y;
    write x;


    sem_post(&sem_lock);
}


void *thread_A(void *arg) {
    sem_wait(&sem_lock);

    read x;
    read y;
    read x;

    sem_post(&sem_lock);
}

int main() {

    create thread A;
    create thread B;

    return 1;
}
