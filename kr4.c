#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//Найдите наименьшее количество строчных латинских букв в строке
//файла.
//FILE *fp open file
//fclose(fp) close file
//fgets(char * string, int num, FILE * filestream) read string in file
//fgetc(FILE * filestream) read simvol in file
//unlink(char * fname) del file
//remove(char * fname) del file
//DIR *d
//opendir(d)open dir
//closedir(d)close dir
//
//int stat(const char *file_name, struct stat *buf);
//struct stat {

//    dev_t     st_dev;         /* ID устройства с файлом */
//    ino_t     st_ino;         /* номер inode */
//   mode_t    st_mode;        /* права доступа */
//   nlink_t   st_nlink;       /* кол-во жёстких ссылок */
//    uid_t     st_uid;         /* ID пользователя-владельца */
//    gid_t     st_gid;         /* ID группы-владельца */
//    dev_t     st_rdev;        /* ID устройства (если это спец. файл) */
//    off_t     st_size;        /* полный размер в байтах */
//    blksize_t st_blksize;     /* размер блока ввода-вывода
//                                 файловой системы */
//    blkcnt_t  st_blocks;      /* кол-во выделенных блоков по 512Б */
    /* Начиная с Linux 2.6, ядро поддерживает точность до
       наносекунд в следующих полям меток времени.
       Подробней о версиях до Linux 2.6, смотрите ЗАМЕЧАНИЯ. */
//    struct timespec st_atim;  /* время последнего доступа */
//    struct timespec st_mtim;  /* время последнего изменения */
//    struct timespec st_ctim;  /* время последней смены состояния */

int main(int argc, char *argv[])
{
FILE *fp;
char ch;
 
if ((fp=fopen(argv[1], "r"))==NULL) {
printf("Cannot open file.\n");
return 1;
}
int i = 0;//счётчик букв
int j = 1;//счётчик строк
int min_str = j;//минимальная строка
int maxLet = INT_MAX;//количество букв
while((ch=fgetc(fp)) != EOF) {
    if (ch >= 'a'&& ch <= 'z')
        i++;
 
    if (ch == '\n')
    {
        if (i < maxLet)
        {
            maxLet = i;
            min_str = j;
        }
        i = 0;
        j++;
    }
}
printf("String number %d namber letter %d (min)\n", min_str, maxLet);
fclose(fp);
return 0;
}
