#include <stdio.h>
#include <dirent.h>
//
//struct dirent {
//    ino_t          d_ino;       /* inode number */
//    off_t          d_off;       /* offset to the next dirent */
//    unsigned short d_reclen;    /* length of this record */
//    unsigned char  d_type;      /* type of file; not supported
//                                   by all file system types */
//    char           d_name[256]; /* filename */
//};
//Все натуральные числа, находящиеся в именах обычных (регулярных)файлов переверн
//уть (записать цифры в обратном порядке)
int main(){
DIR *d;
char fn[]="test";
struct dirent *entry;
int l;
if((d=opendir(fn)) == NULL){
peror ("open dir error");
}
else{
while ((entry - readdir(d)) != NULL){
		if(entry->d_name == '1,2,3,4,5,6,7,8,9,0'){
			fn = entry->d_name;
			l=strlen(fn);		
				for(int i = l; i != 0; i--)
					fn = entry->d_name[i];
			rename("entry->d_name",fn);
		}
	}
}



closedir(d);
return 0;
}
