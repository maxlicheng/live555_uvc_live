/**********************************************************************************************************
** �ļ���		:encoder_define.hh
** ����			:maxlicheng<licheng.chn@outlook.com>
** ����github		:https://github.com/maxlicheng
** ���߲���		:https://www.maxlicheng.com/	
** ��������		:2019-07-01
** ����			:x264����ͷ�ļ�
************************************************************************************************************/
#ifndef _ENCODER_DEFINE_HH
#define _ENCODER_DEFINE_HH


extern "C" {
#include <stdint.h>
#include <x264.h>

	typedef struct 
	{
		x264_param_t *param;
		x264_t *handle;
		x264_picture_t *picture; 
		x264_nal_t *nal;
	} Encoder;

	typedef struct
	{
	    char *start; 
	    int length;
	}BUFTYPE;

}

#endif


