#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>

int main()
{
    pid_t ret;
    int status_shell;
    int cmd_exec;
    char common[10];
    printf("Enter your command:");
    scanf("%s", common);                  
    ret=fork();
    
    if(ret<0)
    {
        perror("fork");
        exit(1);
    }
    if(ret==0)
    {
        cmd_exec=execlp(common,common);
        if(cmd_exec<0)
        {
            perror("execlp");
            exit(2);
        }
        exit(0);
    }
    else
    {
        waitpid(-1,&status_shell,0); //wait(&status_shell);
        printf("parent--child exit status=%d\n",
			WEXITSTATUS(status_shell));
    }
}
