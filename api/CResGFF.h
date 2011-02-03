#ifndef _CRESGFF_H_
#define _CRESGFF_H_
#include "nwndef.h"
#include "CExoLocString.h"
#include "CRes.h"

class CResGFF
{
public:
	int AddDataField(unsigned long, unsigned long, unsigned long);
	int AddDataLayoutField(unsigned long, unsigned long, unsigned long);
	int AddDataLayoutList(unsigned long, unsigned long, unsigned long);
	int AddField(CResStruct *, char *, unsigned long);
	int AddLabel(char *);
	int AddListElement(CResStruct *, CResList *, unsigned long);
	int AddList(CResList *, CResStruct *, char *);
	int AddStructToStruct(CResStruct *, CResStruct *, char *, unsigned long);
	int AddStruct(unsigned long);
	int CreateGFFFile(CResStruct *, CExoString const &, CExoString const &);
	int GetDataFieldNum();
	int GetDataField(CResGFFField *, unsigned long &);
	int GetDataFromPointer(void *, int);
	int GetDataLayoutFieldNum();
	int GetDataLayoutField(CResGFFField *, unsigned long &);
	int GetDataLayoutListNum();
	int GetDataLayoutList(CResGFFField *, unsigned long &);
	int GetElementType(CResStruct *);
	int GetFieldByLabel(CResStruct *, char *);
	int GetFieldCount(CResStruct *);
	int GetFieldCount(CResGFFStruct *);
	int GetFieldLabel(CResStruct *, unsigned long);
	int GetFieldNum();
	int GetFieldSize(CResStruct *, char *, unsigned long);
	int GetFieldStringID(CResStruct *, unsigned long);
	int GetFieldType(CResStruct *, char *, unsigned long);
	int GetField(CResStruct *, unsigned long);
	int GetField(CResGFFStruct *, unsigned long);
	int GetFileData(char *);
	int GetGFFFileInfo(CExoString *, CExoString *);
	int GetLabelNum();
	int GetLabel(CResStruct *, unsigned long);
	int GetListCount(CResList *);
	int GetListElement(CResStruct *, CResList *, unsigned long);
	int GetList(CResList *, CResStruct *, char *);
	int GetStructFromStruct(CResStruct *, CResStruct *, char *);
	int GetStructNum();
	int GetStruct(CResStruct *);
	int GetTopLevelStruct(CResStruct *);
	int GetTotalSize();
	int GetWastedFieldSpace();
	int GetWastedListSpace();
	int InitializeForWriting();
	int IsDataInPlace(unsigned long);
	int IsLoaded();
	int OnResourceFreed();
	int OnResourceServiced();
	int Pack(unsigned char, unsigned long);
	int ReadFieldBYTE(CResStruct *, char *, int &, unsigned char);
	int ReadFieldCExoLocString(CResStruct *, char *, int &, CExoLocString const &);
	int ReadFieldCExoString(CResStruct *, char *, int &, CExoString const &);
	int ReadFieldCHAR(CResStruct *, char *, int &, char);
	int ReadFieldCResRef(CResStruct *, char *, int &, CResRef const &);
	int ReadFieldDOUBLE(CResStruct *, char *, int &, double);
	int ReadFieldDWORD64(CResStruct *, char *, int &, unsigned long long);
	int ReadFieldDWORD(CResStruct *, char *, int &, unsigned long);
	int ReadFieldFLOAT(CResStruct *, char *, int &, float);
	int ReadFieldINT64(CResStruct *, char *, int &, long long);
	int ReadFieldINT(CResStruct *, char *, int &, int);
	int ReadFieldSHORT(CResStruct *, char *, int &, short);
	int ReadFieldVOID(CResStruct *, void *, unsigned long, char *, int &, void *);
	int ReadFieldWORD(CResStruct *, char *, int &, unsigned short);
	int ReleaseResource();
	int SetFileType(char *);
	int SetReplaceExistingFields(int);
	int WriteFieldBYTE(CResStruct *, unsigned char, char *);
	int WriteFieldCExoLocString(CResStruct *, CExoLocString, char *);
	int WriteFieldCExoString(CResStruct *, CExoString const &, char *);
	int WriteFieldCHAR(CResStruct *, char, char *);
	int WriteFieldCResRef(CResStruct *, CResRef const &, char *);
	int WriteFieldDOUBLE(CResStruct *, double, char *);
	int WriteFieldDWORD64(CResStruct *, unsigned long long, char *);
	int WriteFieldDWORD(CResStruct *, unsigned long, char *);
	int WriteFieldFLOAT(CResStruct *, float, char *);
	int WriteFieldINT64(CResStruct *, long long, char *);
	int WriteFieldINT(CResStruct *, int, char *);
	int WriteFieldSHORT(CResStruct *, short, char *);
	int WriteFieldVOID(CResStruct *, void const *, unsigned long, char *);
	int WriteFieldWORD(CResStruct *, unsigned short, char *);
	int WriteGFFData(CExoFile &, unsigned long &);
	int WriteGFFFile(char *);
	int WriteGFFFile(CExoString const &, unsigned short);
	int WriteGFFToPointer(void **, int &);
	~CResGFF();
	CResGFF();
	CResGFF(unsigned short, char *, CResRef const &);

	/* 0x0/0 */ CRes Res;
	/* 0x2C/44 */ unsigned long field_2C;
	/* 0x30/48 */ unsigned long field_30;
	/* 0x34/52 */ unsigned long field_34;
	/* 0x38/56 */ unsigned long field_38;
	/* 0x3C/60 */ unsigned long field_3C;
	/* 0x40/64 */ unsigned long field_40;
	/* 0x44/68 */ unsigned long m_pFileHeader;
	/* 0x48/72 */ unsigned long field_48;
	/* 0x4C/76 */ unsigned long field_4C;
	/* 0x50/80 */ unsigned long field_50;
	/* 0x54/84 */ unsigned long field_54;
	/* 0x58/88 */ unsigned long field_58;
	/* 0x5C/92 */ unsigned long field_5C;
	/* 0x60/96 */ unsigned long field_60;
	/* 0x64/100 */ unsigned long field_64;
	/* 0x68/104 */ unsigned long field_68;
	/* 0x6C/108 */ unsigned long field_6C;
	/* 0x70/112 */ unsigned long field_70;
	/* 0x74/116 */ unsigned long field_74;
	/* 0x78/120 */ unsigned long field_78;
	/* 0x7C/124 */ unsigned long field_7C;
	/* 0x80/128 */ unsigned long field_80;
	/* 0x84/132 */ char m_pLabelBuffer[17];
	/* 0x95/149 */ char m_pFileType[4];
	/* 0x9A/154 */ char rsvd1;
	/* 0x9A/154 */ unsigned long m_bLoaded;
	/* 0x9E/158 */ unsigned short field_9E;
	/* 0xA0/160 */ unsigned short field_A0;
	/* 0xA8/168 */ char rsvd2[6];
	/* 0xA8/168 */ unsigned long field_A8;
};
#endif
