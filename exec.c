#include <unistd.h>
#include <stdio.h>

int main(){
    int pid = fork();
    if(pid == 0){
        printf("soy el hijo\n");
        execl("./hola", "hola", "pedro", "juan", "luis", "mary", (char *) NULL);
        printf("ESTE LINEA NO DEBE EJECUTARSE");
    }
    printf("ich bin der Vater, mein sonne ist:  %d", pid);
    return 0;
}