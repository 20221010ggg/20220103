#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>

int CHECK_ARG(int argno,int prono,const char* Sfile);  //参数校验：参数数量 进程数量  源文件是否有效
int COPY_BLOCK_CUR(const char* Sfile,int prono);   //任务量切割：  源文件名   进程数量
int PROCESS_CREATE(const char* Sfile,const char* Dfile,int prono,int blocksize); //进程创建：源文件  目标文件  进程数量  拷贝大小
int PROCESS_WAIT(void);  //回收
