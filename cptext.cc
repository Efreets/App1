#include "emp.h"
//1. Read File
#include <stdio.h>
#include <iostream>
//#include <sys/types.h>
#include <string>
#include <windows.h>
void mainT()
{
    FILE *fp_in=NULL;
    FILE *outfile;
    fp_in=fopen("test.h264","rb");
    if(!fp_in)
    {
        printf("Could not open input stream\n");
//    return -1;
    }
    unsigned char *in_buffer;
    in_buffer=new unsigned char[4096*4];
    unsigned char *cur_ptr=NULL;
    int cur_size=0;
    while(feof(fp_in)==0)
    {
        cur_size=fread(in_buffer,1,4096*4,fp_in);
        if(cur_size==0)
            break;
        cur_ptr=in_buffer;
        //input_stream_data(cur_ptr,cur_size);
        Sleep(10);
    }
    fclose(fp_in);
    delete[] in_buffer;
    in_buffer=NULL;

//2. Write File

    outfile=fopen("test.h264","wb");
    if(outfile==NULL)
    {
        printf("fopen error");
    }
    fwrite(cur_ptr,sizeof(unsigned char),cur_size,outfile);
    fclose(outfile);

//3. Together File read& write
//FILE *fp_in=NULL;
    fp_in=fopen("test.h264","rb");
    if(!fp_in)
    {
        printf("Could not open input stream");
//    return -1;
    }
//FILE *outfile;
    outfile=fopen("out.h264","wb");
    if(outfile==NULL)
    {
        printf("fopen error");
    }
//unsigned char *in_buffer;
    in_buffer=new unsigned char[4096*4];
//unsigned char *cur_ptr=NULL;
//int cur_size=0;
    while(feof(fp_in)==0)
    {
        cur_size=fread(in_buffer,1,4096*4,fp_in);
        if(cur_size==0)
            break;
        cur_ptr=in_buffer;
        fwrite(cur_ptr,sizeof(unsigned char),cur_size,outfile);
        Sleep(10);
    }
    fclose(fp_in);
    fclose(outfile);
    delete[] in_buffer;
    in_buffer=NULL;
}

void extmain()
{
    printf("extern function called");
}
