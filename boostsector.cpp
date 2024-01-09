#include<stdio.h>
#include<dos.h>
#include<memory.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<iostream>

struct BOOT{
	char jmp[3];
	char OEM[8];
	int bytes_per_sector;
	char sectors_per_cluster;
	int reserved;
	char FAT_cnt;
	int ROOT_size;
	int total_sectors;
	char media;
	int FAT_size;
	int sectors_per_track;
	int head_cnt;
	long hidden_sectors;
	long total_sectors_long;
	char unknown[3];
	long serial;
	char volume[11];
	char FAT_type[8];
	char loader[448];
	char mark[2];
};

int main(){
	int drive=3;
	BOOT boot;
	int res=absread(drive, 1, 0, &boot);
	if(res!=0){
		printf("Cannot read boot sector\n");
		return 1;
	}
	printf("Reading disk paramaters\n");
	printf("-------------------------\n");
	printf("Sector size: %d\n", boot.bytes_per_sector);
	printf("FAT type:");
	for(int i=0; i<8; i++){
		printf("%c", boot.FAT_type[i]);
	}
 
}
